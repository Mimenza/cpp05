/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:21:46 by emimenza          #+#    #+#             */
/*   Updated: 2024/07/10 12:19:34 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/AForm.hpp"

class AForm::FormIsNotSign : public std::exception {
public:
    const char* what() const throw() {
        return "Form is not sign";
    }
};

class AForm::GradeTooHighException : public std::exception {
public:
    const char* what() const throw() {
        return "Grade is too high!";
    }
};

class AForm::GradeTooLowException : public std::exception {
public:
    const char* what() const throw() {
        return "Grade is too low!";
    }
};

AForm::AForm():_isSigned(false),_gradeSign(0), _gradeExec(0)
{
    std::cout << "AForm default constructor called" << std::endl;
}


AForm::AForm(const AForm &source):_name(source._name), _isSigned(source._isSigned), _gradeSign(source._gradeSign), _gradeExec(source._gradeExec)
{
    std::cout << "AForm copy constructor called" << std::endl;
}


AForm& AForm::operator=(const AForm &source)
{
    std::cout << "AForm copy assignment called" << std::endl;
    *this = source;
    return(*this);
}


AForm::~AForm()
{
    std::cout << "AForm destructor called" << std::endl;
}

void AForm::checkGrade(int grade)
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

void		AForm::display(std::ostream& stream) const
{
	stream << _name << "'s signed grade is " << _gradeSign << " and exec grade is " << _gradeExec ;
}

std::ostream&	operator<<(std::ostream& stream, AForm const& cl)
{
	cl.display(stream);
	return (stream);
}

AForm::AForm(const std::string name, int gradeSign, int gradeExec): _name(name), _isSigned(false), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
    std::cout << "AForm param assignment called" << std::endl;
    checkGrade(gradeSign);
    checkGrade(gradeExec);
}

const std::string AForm::getName()
{
    return _name;
}

int AForm::getGradeExec() const
{
    return _gradeExec;
}

int AForm::getGradeSign() const
{
    return _gradeSign;
}

bool AForm::getSigned() const
{
    return _isSigned;
}

void AForm::beSigned(Bureaucrat &buro)
{
    if (buro.getGrade() <= _gradeSign)
    {
        _isSigned = true;
    }
    else
        throw GradeTooLowException();
}

void AForm::execute(Bureaucrat const & executor) const
{
    if (!this->_isSigned)
        throw FormIsNotSign();
    
    if (this->getGradeExec() < executor.getGrade())
    {
        std::cout << executor.getName() << " couldn’t execute " << _name << " because ";
		throw AForm::GradeTooLowException();
    }
}