/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmateo <pmateo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 17:05:31 by u4s2e0r           #+#    #+#             */
/*   Updated: 2025/03/24 01:30:41 by pmateo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

int main(void)
{
    FragTrap	robot("Pissenlit");

	robot.print_stats();
    for(int i = 0; i < 101; i++)
		robot.attack("Margerite");
	robot.highfivesGuys();
	robot.beRepaired(20);
	robot.print_stats();
	robot.takeDamage(70);
	robot.print_stats();
	robot.beRepaired(50);
	robot.print_stats();
	robot.takeDamage(115);
	robot.print_stats();
	robot.beRepaired(100);
	robot.attack("Coquelicot");
	robot.print_stats();
}