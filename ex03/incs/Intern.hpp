#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "AForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
    private:
        static const std::string forms[3];

    public:
        class CannotMakeForm;
        Intern();
        Intern(Intern &source);
        Intern& operator=(Intern &source);
        ~Intern();

        AForm * makeForm(std::string nameForm, const std::string nameTarget);

};

#endif
