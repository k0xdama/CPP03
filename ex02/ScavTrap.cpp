/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmateo <pmateo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 19:21:30 by pmateo            #+#    #+#             */
/*   Updated: 2025/03/24 00:31:08 by pmateo           ###   ########.fr       */
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
        this->ep -= 1;
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
    this->hp += amount;
    if (this->hp > 100)
        this->hp = 100;
    std::cout << "ScavTrap " << name << " repaired himself by " << amount << " hit points !" << std::endl;
}

void	ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << this->name << " is now in gate keeper mode !" << std::endl;
}