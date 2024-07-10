/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:52:59 by emimenza          #+#    #+#             */
/*   Updated: 2024/07/09 12:25:08 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "Bureaucrat default constructor called" << std::endl;
}


Bureaucrat::Bureaucrat(Bureaucrat &source)
{
    std::cout << "Bureaucrat copy constructor called" << std::endl;
    *this = source;
}

void Bureaucrat::checkGrade(int grade)
{
    try
    {
        if (grade > MIN_GRADE)
        {
            throw std::runtime_error("GradeTooLowException");
        }
        else if (grade < MAX_GRADE)
        {
            throw std::runtime_error("GradeTooHighException");
        }
        else
            _grade = grade;
    }
    catch (std::exception & e)
    {
        std::cerr << "Bureaucrat: " << e.what() << std::endl;
    }
}

Bureaucrat::Bureaucrat(std::string name, int grade):_name(name)
{
    std::cout << "Bureaucrat param constructor called" << std::endl;
    checkGrade(grade);
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat &source)
{
    std::cout << "Bureaucrat copy assignment called" << std::endl;
    *this = source;
    return(*this);
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor called" << std::endl;
}

void		Bureaucrat::display(std::ostream& stream) const
{
	stream << _name << "'s grade is " << _grade ;
}

std::ostream&	operator<<(std::ostream& stream, Bureaucrat const& cl)
{
	cl.display(stream);
	return (stream);
}

int Bureaucrat::getGrade()
{
    return this->_grade;
}

const std::string Bureaucrat::getName()
{
    return this->_name;
}

void Bureaucrat::incrementGrade(void)
{
    checkGrade(_grade - 1);
}
void Bureaucrat::decrementGrade(void)
{
    checkGrade(_grade + 1);
}