/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmateo <pmateo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 22:56:00 by pmateo            #+#    #+#             */
/*   Updated: 2025/04/18 04:29:55 by pmateo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	robot("Chenapan");

	// for(int i = 0; i < 11; i++)
	// 	robot.attack("Sacripand");
	robot.beRepaired(2);
	robot.print_stats();
	robot.takeDamage(7);
	ClapTrap	test("bidulle");
	test = robot;
	test.print_stats();
	robot.print_stats();
	robot.beRepaired(4);
	robot.print_stats();
	robot.takeDamage(15);
	robot.print_stats();
	robot.beRepaired(10);
	robot.attack("Salopiaud");
	robot.print_stats();
}