/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmateo <pmateo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 00:13:42 by pmateo            #+#    #+#             */
/*   Updated: 2025/03/28 20:13:42 by pmateo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

void	DiamondTrap::attack( const std::string &target )
{
	ScavTrap::attack(target);
}

void	DiamondTrap::takeDamage( unsigned int amount )
{
	FragTrap::takeDamage(amount);
}

void	DiamondTrap::beRepaired( unsigned int amount )
{
	FragTrap::takeDamage(amount);
}

void	DiamondTrap::whoAmI( void )
{
	std::cout << "My name is " << this->name << " !" << std::endl;
	std::cout << "My ClapTrap name is " << ClapTrap::name << " !" << std::endl;
}