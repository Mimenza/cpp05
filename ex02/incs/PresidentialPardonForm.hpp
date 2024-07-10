/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:00:58 by emimenza          #+#    #+#             */
/*   Updated: 2024/07/10 13:02:15 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <iostream>
# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private:
        
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm &source);
        PresidentialPardonForm& operator=(PresidentialPardonForm &source);
        ~PresidentialPardonForm();
};

#endif
