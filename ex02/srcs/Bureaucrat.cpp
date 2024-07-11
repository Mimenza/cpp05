/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:52:59 by emimenza          #+#    #+#             */
/*   Updated: 2024/07/11 16:06:41 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Bureaucrat.hpp"

class Bureaucrat::GradeTooHighException : public std::exception {
public:
    const char* what() const throw() {
        return "Grade is too high!";
    }
};

class Bureaucrat::GradeTooLowException : public std::exception {
public:
    const char* what() const throw() {
        return "Grade is too low!";
    }
};

Bureaucrat::Bureaucrat()
{
    //std::cout << "Bureaucrat default constructor called" << std::endl;
}


Bureaucrat::Bureaucrat(Bureaucrat &source)
{
    //std::cout << "Bureaucrat copy constructor called" << std::endl;
    *this = source;
}

void Bureaucrat::checkGrade(int grade)
{
    if (grade > MIN_GRADE)
    {
        throw GradeTooLowException();
    }
    else if (grade < MAX_GRADE)
    {
        throw GradeTooHighException();
    }
}

Bureaucrat::Bureaucrat(std::string name, int grade):_name(name)
{
    //std::cout << "Bureaucrat param constructor called" << std::endl;
    checkGrade(grade);
    _grade = grade;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat &source)
{
    //std::cout << "Bureaucrat copy assignment called" << std::endl;
    *this = source;
    return(*this);
}

Bureaucrat::~Bureaucrat()
{
    //std::cout << "Bureaucrat destructor called" << std::endl;
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

int Bureaucrat::getGrade() const
{
    return this->_grade;
}

const std::string Bureaucrat::getName() const
{
    return this->_name;
}

void Bureaucrat::incrementGrade(void)
{
    checkGrade(_grade - 1);
    _grade--;
}
void Bureaucrat::decrementGrade(void)
{
    checkGrade(_grade + 1);
    _grade++;
}

void Bureaucrat::signAForm(AForm &AForm)
{    
    try
    {
        AForm.beSigned(*this);
        std::cout << this->getName() << " signed "<< AForm.getName() << std::endl;
    }
    catch (std::exception& e)
    {
        std::cout << this->getName() << " couldn’t sign " << AForm.getName() << " because " << e.what() << std::endl;
    }
    
}

void Bureaucrat::executeForm(AForm const &form)
{
    if ((this->getGrade() <= form.getGradeSign()) && (this->getGrade() <= form.getGradeExec()))
    {
        std::cout << this->getName() << " executed " << form.getName() << std::endl;
        
        form.execute(*this);
    }
}