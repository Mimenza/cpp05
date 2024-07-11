/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:21:49 by emimenza          #+#    #+#             */
/*   Updated: 2024/07/11 13:24:00 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include <iostream>
# include <iostream>
# include "Bureaucrat.hpp"
# define MIN_GRADE	150
# define MAX_GRADE	1

class Bureaucrat;
class AForm
{
    private:
        const std::string _name;
        bool _isSigned;
        const int _gradeSign;
        const int _gradeExec;

    public:
        AForm();
        AForm(const AForm &source);
        AForm& operator=(const AForm &source);
        virtual ~AForm();
    
        void checkGrade(int grade);
        AForm(const std::string name, int gradeSign, int gradeExec);
        void display(std::ostream& stream) const;
        
        const std::string getName()const;
        bool getSigned() const;
        int getGradeSign() const;
        int getGradeExec() const;
        
        void beSigned(Bureaucrat &b);

        class GradeTooLowException;
	    class GradeTooHighException;
        class FormIsNotSign;

        virtual void execute(Bureaucrat const & executor) const = 0;
};

std::ostream&	operator<<(std::ostream& stream, AForm const& cl);

#endif
