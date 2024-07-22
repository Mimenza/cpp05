/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:58:27 by emimenza          #+#    #+#             */
/*   Updated: 2024/07/22 22:55:16 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "incs/Bureaucrat.hpp"
#include "incs/AForm.hpp"
#include "incs/ShrubberyCreationForm.hpp"
#include "incs/RobotomyRequestForm.hpp"
#include "incs/PresidentialPardonForm.hpp"

int main(void)
{
    {
        // Crear un formulario de creación de arbustos
        ShrubberyCreationForm form("arboles");
        std::cout << form << std::endl;

        // Crear un burócrata
        Bureaucrat David("David", 10);
        std::cout << David << std::endl;

        // Firmar el formulario
        try {
            David.signAForm(form);
            form.beSigned(David);
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
        //ejecutar el formulario
        try {
            David.executeForm(form);
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
        
        std::cout << "" << std::endl;
        
        Bureaucrat John("John", 146); // John tiene un grado demasiado bajo para FIRMAR el formulario
        std::cout << John << std::endl;
        ShrubberyCreationForm form2("arboles2");
        std::cout << form2 << std::endl;
        try {
            John.signAForm(form2);
            form2.beSigned(John);
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
        try {
            John.executeForm(form2);
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    {
        //Crear un formulario de creación de arbustos
        RobotomyRequestForm form("arboles");
        std::cout << form << std::endl;

        // Crear un burócrata
        Bureaucrat David("David", 10);
        std::cout << David << std::endl;

        // Firmar el formulario
        try {
            David.signAForm(form);
            form.beSigned(David);
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
        //ejecutar el formulario
        try {
            David.executeForm(form);
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
        
        std::cout << "" << std::endl;
        
        Bureaucrat John("John", 60); // John tiene un grado demasiado bajo para EJECUTAR el formulario
        std::cout << John << std::endl;
        RobotomyRequestForm form2("arboles2");
        std::cout << form2 << std::endl;
        try {
            John.signAForm(form2);
            form2.beSigned(John);
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
        try {
            John.executeForm(form2);
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    {
        PresidentialPardonForm form("arboles");
        std::cout << form << std::endl;

        // Crear un burócrata
        Bureaucrat David("David", 10);
        std::cout << David << std::endl;

        // Firmar el formulario
        try {
            David.signAForm(form);
            form.beSigned(David);
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
        //ejecutar el formulario
        try {
            David.executeForm(form);
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
        
        std::cout << "" << std::endl;
        
        Bureaucrat John("John", 60); // John tiene un grado demasiado bajo para FIMAR Y EJECUTAR el formulario
        std::cout << John << std::endl;
        PresidentialPardonForm form2("arboles2");
        std::cout << form2 << std::endl;
        try {
            John.signAForm(form2);
            form2.beSigned(John);
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }
        try {
            John.executeForm(form2);
        } catch (std::exception &e) {
            std::cout << e.what() << std::endl;
        }

            std::cout << "" << std::endl;
    }
//     return 0;


}