/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmateo <pmateo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 00:13:42 by pmateo            #+#    #+#             */
/*   Updated: 2025/04/18 04:36:24 by pmateo           ###   ########.fr       */
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

DiamondTrap::DiamondTrap( std::string name ) : 
		name(name), ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
{
	this->hp = FragTrap::hp;
	this->ep = ScavTrap::ep;
	this->ad = FragTrap::ad;
	std::cout << "DiamondTrap default constructor called !" << std::endl;
}

DiamondTrap::DiamondTrap( const DiamondTrap &to_copy) :
		name(to_copy.name), ClapTrap(to_copy), ScavTrap(to_copy), FragTrap(to_copy)
{
	std::cout << "DiamondTrap copy constructor callel !" << std::endl;
}
		
DiamondTrap& DiamondTrap::operator=(const DiamondTrap &to_assign)
{
	if (this != &to_assign)
	{
		this->name = to_assign.name;
		this->hp = to_assign.hp;
		this->ep = to_assign.ep;
		this->ad = to_assign.ad;
	}
	return (*this);
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "DiamondTrap destructor called !" << std::endl;
}