/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:01:10 by emimenza          #+#    #+#             */
/*   Updated: 2024/07/11 16:07:05 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm():AForm("RobotomyRequestForm", 72, 45)
{
    //std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}


RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &source): AForm(source)
{
    //std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
    *this = source;
}


RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm &source)
{
    //std::cout << "RobotomyRequestForm copy assignment called" << std::endl;
    *this = source;
    return(*this);
}


RobotomyRequestForm::~RobotomyRequestForm()
{
    //std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target): AForm("RobotomyRequestForm", 145, 137), _targetName(target)
{
    //std::cout << "RobotomyRequestForm param constructor called" << std::endl;
}

const std::string RobotomyRequestForm::getTargetName()
{
    return _targetName;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    AForm::execute(executor);
    try
    {
        std::cout << "bzzzzzzzzzzzzzzzzzzzzzzz (drilling noises)" << std::endl;

        std::srand(std::time(0));
        int random_value = std::rand();

        if (random_value % 2 == 0)
            std::cout << "The " << executor.getName() << " has been robotomized" << std::endl;
        else
             std::cout << "The " << executor.getName() << " robotomization failed" << std::endl;
       
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}