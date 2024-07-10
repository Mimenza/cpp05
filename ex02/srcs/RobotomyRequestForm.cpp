/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:01:10 by emimenza          #+#    #+#             */
/*   Updated: 2024/07/10 13:01:35 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}


RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &source)
{
    std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
    *this = source;
}


RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm &source)
{
    std::cout << "RobotomyRequestForm copy assignment called" << std::endl;
    *this = source;
    return(*this);
}


RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

