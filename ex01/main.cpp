/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmateo <pmateo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 17:05:31 by u4s2e0r           #+#    #+#             */
/*   Updated: 2025/03/24 01:30:13 by pmateo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

int main(void)
{
    ScavTrap	robot("Wall-e");

	robot.print_stats();
    for(int i = 0; i < 51; i++)
		robot.attack("Megatron");
	robot.guardGate();
	robot.beRepaired(20);
	robot.print_stats();
	robot.takeDamage(70);
	robot.print_stats();
	robot.beRepaired(50);
	robot.print_stats();
	robot.takeDamage(115);
	robot.print_stats();
	robot.beRepaired(100);
	robot.attack("Eve");
	robot.print_stats();
}