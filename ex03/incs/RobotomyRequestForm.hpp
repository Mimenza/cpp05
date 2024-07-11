/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:01:02 by emimenza          #+#    #+#             */
/*   Updated: 2024/07/11 11:44:33 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <ctime>
# include <cstdlib>
# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private:
        const std::string _targetName;

    public:
        RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm &source);
        RobotomyRequestForm& operator=(RobotomyRequestForm &source);
        ~RobotomyRequestForm();

        RobotomyRequestForm(const std::string &target);
        
        void execute(Bureaucrat const & executor) const;

        const std::string getTargetName();
};

#endif
