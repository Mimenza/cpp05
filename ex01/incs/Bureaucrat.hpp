/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:53:02 by emimenza          #+#    #+#             */
/*   Updated: 2024/07/10 11:51:23 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>
# include "Form.hpp"
# define MIN_GRADE	150
# define MAX_GRADE	1

class Form;
class Bureaucrat
{
    private:
        const std::string _name;
        int _grade;

    public:
        Bureaucrat();
        Bureaucrat(Bureaucrat &source);
        Bureaucrat& operator=(Bureaucrat &source);
        ~Bureaucrat();

        void checkGrade(int grade);
        Bureaucrat(std::string name, int grade);
        void display(std::ostream& stream) const;
        
        int getGrade();
        const std::string getName();
        
        void    incrementGrade();
        void    decrementGrade();

        void    signForm(Form &form);

        class GradeTooLowException;
	    class GradeTooHighException;
};

std::ostream&	operator<<(std::ostream& stream, Bureaucrat const& cl);

#endif
