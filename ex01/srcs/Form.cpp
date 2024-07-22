/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:21:46 by emimenza          #+#    #+#             */
/*   Updated: 2024/07/22 22:12:24 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Form.hpp"

class Form::GradeTooHighException : public std::exception {
public:
    const char* what() const throw() {
        return "Grade is too high!";
    }
};

class Form::GradeTooLowException : public std::exception {
public:
    const char* what() const throw() {
        return "Grade is too low!";
    }
};

Form::Form():_isSigned(false),_gradeSign(0), _gradeExec(0)
{
    //std::cout << "Form default constructor called" << std::endl;
}


Form::Form(Form &source):_name(source._name), _isSigned(source._isSigned), _gradeSign(source._gradeSign), _gradeExec(source._gradeExec)
{
    //std::cout << "Form copy constructor called" << std::endl;
}


Form& Form::operator=(Form &source)
{
    //std::cout << "Form copy assignment called" << std::endl;
    *this = source;
    return(*this);
}


Form::~Form()
{
    //std::cout << "Form destructor called" << std::endl;
}

void Form::checkGrade(int grade)
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

void		Form::display(std::ostream& stream) const
{
	stream << _name << "'s signed grade is " << _gradeSign << " and exec grade is " << _gradeExec ;
}

std::ostream&	operator<<(std::ostream& stream, Form const& cl)
{
	cl.display(stream);
	return (stream);
}

Form::Form(const std::string name, int gradeSign, int gradeExec): _name(name), _isSigned(false), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
    //std::cout << "Form param assignment called" << std::endl;
    checkGrade(gradeSign);
    checkGrade(gradeExec);
}

const std::string Form::getName()
{
    return _name;
}

int Form::getGradeExec()
{
    return _gradeExec;
}

int Form::getGradeSign()
{
    return _gradeSign;
}

bool Form::getSigned()
{
    return _isSigned;
}

void Form::beSigned(Bureaucrat &buro)
{
    if (buro.getGrade() <= _gradeSign)
    {
        _isSigned = true;
    }
    else
        throw GradeTooLowException();
}