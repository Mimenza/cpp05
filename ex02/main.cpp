/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:58:27 by emimenza          #+#    #+#             */
/*   Updated: 2024/07/11 15:50:23 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "incs/Bureaucrat.hpp"
#include "incs/AForm.hpp"
#include "incs/ShrubberyCreationForm.hpp"
#include "incs/RobotomyRequestForm.hpp"
#include "incs/PresidentialPardonForm.hpp"

int main(void)
{
    try
    {
    //    ShrubberyCreationForm scf("archivo");
    //    Bureaucrat bure("Jhon", 1);
    //    bure.signAForm(scf);
    //    scf.execute(bure);
    //    bure.executeForm(scf);


    //    RobotomyRequestForm rrf("archivo");
    //    Bureaucrat bure("Jhon", 1);
    //    bure.signAForm(rrf);
    //    rrf.execute(bure);

    // PresidentialPardonForm ppf("archivo");
    // Bureaucrat bure("Jhon" , 1);
    // bure.signAForm(ppf);
    // ppf.execute(bure);
    
    // bure.executeForm(ppf);
       
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}