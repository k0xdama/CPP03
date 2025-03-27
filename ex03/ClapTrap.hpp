/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmateo <pmateo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 14:19:48 by pmateo            #+#    #+#             */
/*   Updated: 2025/03/24 00:27:54 by pmateo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap
{
	protected:
		std::string name;
		int			hp = 10; //Health points
		int			ep = 10; //Energy points
		int			ad = 0;	//Attack damage
	
	public:
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	print_stats( void );

		ClapTrap( std::string name ) : name(name)
		{
			std::cout << "ClapTrap constructor called !" << std::endl;
		}

		ClapTrap(const ClapTrap &to_copy) : name (to_copy.name), hp(to_copy.hp), ep(to_copy.ep), ad(to_copy.ad)
		{
			std::cout << "ClapTrap copy constructor called !" << std::endl;
		}

		~ClapTrap( void )
		{
			std::cout << "ClapTrap destructor called" << std::endl;
		}

		ClapTrap &operator=(const ClapTrap &to_assign)
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

		
};

















# endif