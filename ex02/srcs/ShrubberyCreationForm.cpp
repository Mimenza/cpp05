/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:01:12 by emimenza          #+#    #+#             */
/*   Updated: 2024/07/11 16:07:19 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/ShrubberyCreationForm.hpp"

std::string ShrubberyCreationForm::asciiTree =
"       _-_\n"	
"    /~~   ~~\\\n"
" /~~         ~~\\\n"
"{               }\n"
" \\  _-     -_  /\n"
"   ~  \\\\ //  ~\n"
"_- -   | | _- _\n"
"  _ -  | |   -_\n"
;

class ShrubberyCreationForm::FileError : public std::exception {
	public:
		virtual const char* what() const throw() { return ("Cannot open file\n"); }
};

ShrubberyCreationForm::ShrubberyCreationForm():AForm("ShrubberyCreationForm", 145, 137)
{
    //std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}


ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &source): AForm(source)
{
    //std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
    *this = source;
}


ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &source)
{
    //std::cout << "ShrubberyCreationForm copy assignment called" << std::endl;
    *this = source;
    return(*this);
}


ShrubberyCreationForm::~ShrubberyCreationForm()
{
    //std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}


ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target):AForm("ShrubberyCreationForm", 145, 137), _targetName(target)
{
    //std::cout << "ShrubberyCreationForm param constructor called" << std::endl;
}

const std::string ShrubberyCreationForm::getTargetName()
{
    return _targetName;
}
void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    AForm::execute(executor);
    try
    {
        std::ofstream outFile;
        std::string filename = _targetName + "_shrubbery";
        outFile.open(filename.c_str());

        if (!outFile.is_open())
        throw ShrubberyCreationForm::FileError();
        outFile << asciiTree;
        outFile.close();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}