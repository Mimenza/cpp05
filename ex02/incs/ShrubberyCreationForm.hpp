/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:01:05 by emimenza          #+#    #+#             */
/*   Updated: 2024/07/10 14:05:45 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include <fstream>
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
    private:
        const std::string _targetName;
        static std::string	asciiTree;
        
    public:
        class FileError;
        ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm &source);
        ShrubberyCreationForm& operator=(const ShrubberyCreationForm &source);
        ~ShrubberyCreationForm();

        ShrubberyCreationForm(const std::string &target);

        void execute(Bureaucrat const & executor) const;

        const std::string getTargetName();
};

#endif
