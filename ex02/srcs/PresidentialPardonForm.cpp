/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:01:07 by emimenza          #+#    #+#             */
/*   Updated: 2024/07/10 13:03:07 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm default constructor called" << std::endl;
}


PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &source)
{
    std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
    *this = source;
}


PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm &source)
{
    std::cout << "PresidentialPardonForm copy assignment called" << std::endl;
    *this = source;
    return(*this);
}


PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

