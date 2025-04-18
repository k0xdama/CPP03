/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmateo <pmateo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 01:23:10 by pmateo            #+#    #+#             */
/*   Updated: 2025/04/18 04:40:10 by pmateo           ###   ########.fr       */
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
        this->ep--;
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
    if (amount >= this->hp)
        this->hp = 0;
    else
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
    unsigned int max_repair;
    unsigned int actual_repair;
    
    if (this->ep == 0)
    {
        std::cout << "FragTrap " << name << " can't repair himself, because he's out of energy points !" << std::endl;
        return ;
    }
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
    max_repair = 10 - this->hp;
    actual_repair = (amount > max_repair) ? max_repair : amount;
    this->hp += actual_repair;
    this->ep--;
    std::cout << "FragTrap " << name << " repaired himself by " << amount << " hit points !" << std::endl;
}

void	FragTrap::highfivesGuys( void )
{
	std::cout << "FragTrap " << this->name << " asked positively for a high fives ! " << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	this->hp = 100;
	this->ep = 100;
	this->ad = 30;
	std::cout << "FragTrap constructor called !" << std::endl;
}

FragTrap::FragTrap( const FragTrap &to_copy) : ClapTrap(to_copy)
{
    std::cout << "FragTrap copy constructor called !" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &to_assign)
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

FragTrap::~FragTrap( void )
{
	std::cout << "FragTrap destructor called" << std::endl;
}