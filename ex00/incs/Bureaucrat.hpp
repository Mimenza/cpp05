/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 11:53:02 by emimenza          #+#    #+#             */
/*   Updated: 2024/07/22 22:02:42 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>
# define MIN_GRADE	150
# define MAX_GRADE	1

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

        class GradeTooLowException;
	    class GradeTooHighException;
};

std::ostream&	operator<<(std::ostream& stream, Bureaucrat const& cl);

#endif
