/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:58:27 by emimenza          #+#    #+#             */
/*   Updated: 2024/07/10 16:33:22 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "incs/Bureaucrat.hpp"
#include "incs/AForm.hpp"
#include "incs/ShrubberyCreationForm.hpp"

int main(void)
{
    try
    {
       ShrubberyCreationForm scf("archivo");
       Bureaucrat bure("Jhon", 1);

       //std::cout << scf.getTargetName() << std::endl;
       bure.signAForm(scf);
       scf.execute(bure);
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}