/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 13:40:35 by emimenza          #+#    #+#             */
/*   Updated: 2024/07/11 16:03:25 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Intern.hpp"

class Intern::CannotMakeForm : public std::exception {
	public:
		virtual const char* what() const throw() { return("Cannot make form with given name"); }
};


Intern::Intern()
{
    //std::cout << "Intern default constructor called" << std::endl;
}


Intern::Intern(Intern &source)
{
    //std::cout << "Intern copy constructor called" << std::endl;
    *this = source;
}


Intern& Intern::operator=(Intern &source)
{
    //std::cout << "Intern copy assignment called" << std::endl;
    *this = source;
    return(*this);
}


Intern::~Intern()
{
    //std::cout << "Intern destructor called" << std::endl;
}

const std::string Intern::forms[3] = {
    "ShrubberyCreationForm",
    "RobotomyRequestForm",
    "PresidentialPardonForm"
};
    
AForm * Intern::makeForm(std::string nameForm, const std::string nameTarget)
{
    int i = 0;
    while (i < 3)
    {
        if (forms[i] == nameForm)
            break;
        i++;
    }
    
    switch (i)
    {
        case (0):
            return new ShrubberyCreationForm(nameTarget);
            break;
        
        case (1):
            return new RobotomyRequestForm(nameTarget);
            break;

        case (2):
            return new PresidentialPardonForm(nameTarget);
            break;
            
        default:
            throw CannotMakeForm();
            break;
    }
}

