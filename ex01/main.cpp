/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emimenza <emimenza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 12:03:03 by emimenza          #+#    #+#             */
/*   Updated: 2024/07/10 12:37:01 by emimenza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incs/Bureaucrat.hpp"
#include "incs/Form.hpp"

int main(void)
{
    try
    {
        Form formu("formu", 1, 150);
        Bureaucrat buro("buro", 1);

        std::cout << buro << std::endl;
        buro.incrementGrade();
        std::cout << buro << std::endl;

        //formu.beSigned(buro);
        buro.signForm(formu);
    }
    catch (const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}