/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmateo <pmateo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 22:57:22 by pmateo            #+#    #+#             */
/*   Updated: 2025/03/23 22:57:27 by pmateo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

void    ClapTrap::attack(const std::string &target)
{
    if (this->hp == 0)
    {
        std::cout << "ClapTrap " << this->name << " can't attack " << target
                                    << " because he has been destroyed !" << std::endl;
        return ;
    }
    else if (this->ep == 0)
    {
        std::cout << "ClapTrap " << this->name << " can't attack " << target
                                    << " because he's out of energy points !" << std::endl;
        return ;
    }
    else
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target
                                    << " causing " << this->ad << " points of damage !" << std::endl;
        this->ep -= 1;
        return ;
    }
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hp == 0)
    {
        std::cout << "ClapTrap " << this->name << " takes " << amount
                                    << " points of damage, but he's already destroyed !" << std::endl;
        return ;
    }
    this->hp -= amount;
    std::cout << "ClapTrap " << this->name << " takes " << amount
                                    << " points of damage !" << std::endl;
    if (this->hp <= 0)
    {
        this->hp = 0;
        std::cout << "ClapTrap " << this->name << " has been destroyed !" << std::endl;
    }
    return ;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hp == 0)
    {
        std::cout << "ClapTrap " << name << " can't repair himself, he has already been destroyed !" << std::endl;
        return ;
    }
    else if (this->hp == 10)
    {
        std::cout << "ClapTrap " << name << " can't repair himself, he is already full of hit points !" << std::endl;
        return ;
    }
    this->hp += amount;
    if (this->hp > 10)
        this->hp = 10;
    std::cout << "ClapTrap " << name << " repaired himself by " << amount << " hit points !" << std::endl;
}

void    ClapTrap::print_stats( void )
{
    std::cout << "hit points = " << this->hp << std::endl;
    std::cout << "energy points = " << this->ep << std::endl;
    std::cout << "attack damage = " << this->ad << std::endl;
}