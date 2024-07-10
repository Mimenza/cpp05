/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 13:21:49 by emimenza          #+#    #+#             */
/*   Updated: 2024/07/10 12:15:03 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <iostream>
# include "Bureaucrat.hpp"
# define MIN_GRADE	150
# define MAX_GRADE	1

class Bureaucrat;
class Form
{
    private:
        const std::string _name;
        bool _isSigned;
        const int _gradeSign;
        const int _gradeExec;

    public:
        Form();
        Form(Form &source);
        Form& operator=(Form &source);
        ~Form();
    
        void checkGrade(int grade);
        Form(std::string name, int gradeSign, int gradeExec);
        void display(std::ostream& stream) const;
        
        const std::string getName();
        bool getSigned();
        int getGradeSign();
        int getGradeExec();
        
        void beSigned(Bureaucrat &b);

        class GradeTooLowException;
	    class GradeTooHighException;
};

std::ostream&	operator<<(std::ostream& stream, Form const& cl);

#endif
