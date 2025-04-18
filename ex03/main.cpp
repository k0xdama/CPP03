/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmateo <pmateo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 17:05:31 by u4s2e0r           #+#    #+#             */
/*   Updated: 2025/04/18 04:59:03 by pmateo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap	robot("Droideka");

	robot.print_stats();
    // for(int i = 0; i < 101; i++)
	// 	robot.attack("C-3PO");
	robot.highfivesGuys();
	robot.guardGate();
	robot.whoAmI();
	robot.beRepaired(20);
	robot.print_stats();
	robot.takeDamage(70);
	robot.print_stats();
	robot.beRepaired(50);
	robot.print_stats();
	robot.takeDamage(115);
	robot.print_stats();
	robot.beRepaired(100);
	robot.attack("R2-D2");
	robot.print_stats();
}