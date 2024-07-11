/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:01:07 by emimenza          #+#    #+#             */
/*   Updated: 2024/07/11 16:06:49 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5)
{
    //std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}


PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &source): AForm(source)
{
    //std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
    *this = source;
}


PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm &source)
{
    //std::cout << "PresidentialPardonForm copy assignment called" << std::endl;
    *this = source;
    return(*this);
}


PresidentialPardonForm::~PresidentialPardonForm()
{
    //std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target):AForm("PresidentialPardonForm", 145, 137), _targetName(target)
{
    //std::cout << "PresidentialPardonForm param constructor called" << std::endl;
}

const std::string PresidentialPardonForm::getTargetName()
{
    return _targetName;
}
void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    AForm::execute(executor);
    try
    {
        std::cout << executor.getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}