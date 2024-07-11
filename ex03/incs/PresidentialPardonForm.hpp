/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:00:58 by emimenza          #+#    #+#             */
/*   Updated: 2024/07/11 12:23:20 by emimenza         ###   ########.fr       */
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
        const std::string _targetName;

    public:
        PresidentialPardonForm();
        PresidentialPardonForm(PresidentialPardonForm &source);
        PresidentialPardonForm& operator=(PresidentialPardonForm &source);
        ~PresidentialPardonForm();

        PresidentialPardonForm(const std::string &target);

        void execute(Bureaucrat const & executor) const;

        const std::string getTargetName();
};

#endif
