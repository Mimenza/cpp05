/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:03:03 by emimenza          #+#    #+#             */
/*   Updated: 2024/07/09 12:25:56 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incs/Bureaucrat.hpp"

int main (void)
{
    Bureaucrat pepe("pepe", 1);
    std::cout << pepe << std::endl;
    //std::cout << pepe.getName() << " " << pepe.getGrade() << std::endl;
    //pepe.incrementGrade();
    pepe.decrementGrade();
    std::cout << pepe << std::endl;
    
}