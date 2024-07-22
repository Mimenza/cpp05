/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:03:03 by emimenza          #+#    #+#             */
/*   Updated: 2024/07/22 22:10:35 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incs/Bureaucrat.hpp"

int main (void)
{
    try
    {
        Bureaucrat pepe("pepe", 2);
        std::cout << pepe << std::endl;
        //std::cout << pepe.getName() << " " << pepe.getGrade() << std::endl;
        pepe.incrementGrade();
        std::cout << pepe << std::endl;
        pepe.incrementGrade();
        std::cout << pepe << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        Bureaucrat pepito("pepito", 149);
        std::cout << pepito << std::endl;
        //std::cout << pepe.getName() << " " << pepe.getGrade() << std::endl;
        pepito.decrementGrade();
        std::cout << pepito << std::endl;
        pepito.decrementGrade();
        std::cout << pepito << std::endl;
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

}