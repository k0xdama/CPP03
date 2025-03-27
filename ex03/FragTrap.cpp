/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmateo <pmateo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 01:23:10 by pmateo            #+#    #+#             */
/*   Updated: 2025/03/24 01:26:15 by pmateo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

void	FragTrap::attack(const std::string &target)
{
	if (this->hp == 0)
    {
        std::cout << "FragTrap " << this->name << " can't attack " << target
                                    << " because he has been destroyed !" << std::endl;
        return ;
    }
    else if (this->ep == 0)
    {
        std::cout << "FragTrap " << this->name << " can't attack " << target
                                    << " because he's out of energy points !" << std::endl;
        return ;
    }
    else
    {
        std::cout << "FragTrap " << this->name << " attacks " << target
                                    << " causing " << this->ad << " points of damage !" << std::endl;
        this->ep -= 1;
        return ;
    }
}

void    FragTrap::takeDamage(unsigned int amount)
{
    if (this->hp == 0)
    {
        std::cout << "FragTrap " << this->name << " takes " << amount
                                    << " points of damage, but he's already destroyed !" << std::endl;
        return ;
    }
    this->hp -= amount;
    std::cout << "FragTrap " << this->name << " takes " << amount
                                    << " points of damage !" << std::endl;
    if (this->hp <= 0)
    {
        this->hp = 0;
        std::cout << "FragTrap " << this->name << " has been destroyed !" << std::endl;
    }
    return ;
}

void    FragTrap::beRepaired(unsigned int amount)
{
    if (this->hp == 0)
    {
        std::cout << "FragTrap " << name << " can't repair himself, he has already been destroyed !" << std::endl;
        return ;
    }
    else if (this->hp == 100)
    {
        std::cout << "FragTrap " << name << " can't repair himself, he is already full of hit points !" << std::endl;
        return ;
    }
    this->hp += amount;
    if (this->hp > 100)
        this->hp = 100;
    std::cout << "FragTrap " << name << " repaired himself by " << amount << " hit points !" << std::endl;
}

void	FragTrap::highfivesGuys( void )
{
	std::cout << "FragTrap " << this->name << " asked positively for a high fives ! " << std::endl;
}