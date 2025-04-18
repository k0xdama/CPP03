/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmateo <pmateo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 22:57:22 by pmateo            #+#    #+#             */
/*   Updated: 2025/04/17 23:26:37 by pmateo           ###   ########.fr       */
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
        this->ep--;
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
    if (amount >= this->hp)
        this->hp = 0;
    else
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
    unsigned int max_repair;
    unsigned int actual_repair;
    
    if (this->ep == 0)
    {
        std::cout << "ClapTrap " << name << " can't repair himself, because he's out of energy points !" << std::endl;
        return ;
    }
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
    max_repair = 10 - this->hp;
    actual_repair = (amount > max_repair) ? max_repair : amount;
    this->hp += actual_repair;
    this->ep--;
    std::cout << "ClapTrap " << name << " repaired himself by " << amount << " hit points !" << std::endl;
}

void    ClapTrap::print_stats( void )
{
    std::cout << "hit points = " << this->hp << std::endl;
    std::cout << "energy points = " << this->ep << std::endl;
    std::cout << "attack damage = " << this->ad << std::endl;
}

ClapTrap::ClapTrap( std::string name ) : name(name)
{
	this->hp = 10;
	this->ep = 10;
	this->ad = 0;
	std::cout << "ClapTrap constructor called !" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &to_copy) : name (to_copy.name), hp(to_copy.hp), ep(to_copy.ep), ad(to_copy.ad)
{
	std::cout << "ClapTrap copy constructor called !" << std::endl;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &to_assign)
{
	if (&to_assign != this)
	{
		this->name = to_assign.name;
		this->hp = to_assign.hp;
		this->ep = to_assign.ep;
		this->ad = to_assign.ad;
	}
	return (*this);
}