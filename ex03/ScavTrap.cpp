/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmateo <pmateo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 19:21:30 by pmateo            #+#    #+#             */
/*   Updated: 2025/04/18 04:45:19 by pmateo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

void	ScavTrap::attack(const std::string &target)
{
	if (this->hp == 0)
    {
        std::cout << "ScavTrap " << this->name << " can't attack " << target
                                    << " because he has been destroyed !" << std::endl;
        return ;
    }
    else if (this->ep == 0)
    {
        std::cout << "ScavTrap " << this->name << " can't attack " << target
                                    << " because he's out of energy points !" << std::endl;
        return ;
    }
    else
    {
        std::cout << "ScavTrap " << this->name << " attacks " << target
                                    << " causing " << this->ad << " points of damage !" << std::endl;
        this->ep--;
        return ;
    }
}

void    ScavTrap::takeDamage(unsigned int amount)
{
    if (this->hp == 0)
    {
        std::cout << "ScavTrap " << this->name << " takes " << amount
                                    << " points of damage, but he's already destroyed !" << std::endl;
        return ;
    }
    if (amount >= this->hp)
        this->hp = 0;
    else
        this->hp -= amount;
    std::cout << "ScavTrap " << this->name << " takes " << amount
                                    << " points of damage !" << std::endl;
    if (this->hp <= 0)
    {
        this->hp = 0;
        std::cout << "ScavTrap " << this->name << " has been destroyed !" << std::endl;
    }
    return ;
}

void    ScavTrap::beRepaired(unsigned int amount)
{
    unsigned int max_repair;
    unsigned int actual_repair;
    
    if (this->ep == 0)
    {
        std::cout << "ScavTrap " << name << " can't repair himself, because he's out of energy points !" << std::endl;
        return ;
    }
    if (this->hp == 0)
    {
        std::cout << "ScavTrap " << name << " can't repair himself, he has already been destroyed !" << std::endl;
        return ;
    }
    else if (this->hp == 100)
    {
        std::cout << "ScavTrap " << name << " can't repair himself, he is already full of hit points !" << std::endl;
        return ;
    }
    max_repair = 10 - this->hp;
    actual_repair = (amount > max_repair) ? max_repair : amount;
    this->hp += actual_repair;
    this->ep--;
    std::cout << "ScavTrap " << name << " repaired himself by " << amount << " hit points !" << std::endl;
}

void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << this->name << " is now in gate keeper mode !" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	this->hp = 100;
	this->ep = 50;
	this->ad = 20;
	std::cout << "ScavTrap constructor called !" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap &to_copy) : ClapTrap(to_copy)
{
	std::cout << "ScavTrap copy constructor called !" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &to_assign)
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

ScavTrap::~ScavTrap( void )
{
	std::cout << "ScavTrap destructor called" << std::endl;
}