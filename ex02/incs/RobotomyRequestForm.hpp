/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:01:02 by emimenza          #+#    #+#             */
/*   Updated: 2024/07/10 13:02:23 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <iostream>
# include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private:
        
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(RobotomyRequestForm &source);
        RobotomyRequestForm& operator=(RobotomyRequestForm &source);
        ~RobotomyRequestForm();
};

#endif
