/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmateo <pmateo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 18:12:22 by pmateo            #+#    #+#             */
/*   Updated: 2025/03/28 00:13:30 by pmateo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	name;
	
	public:
		DiamondTrap( std::string name ) : 
			name(name), ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name)
		{
			this->hp = FragTrap::hp;
			this->ep = ScavTrap::ep;
			this->ad = FragTrap::ad;
			std::cout << "DiamondTrap default constructor called !" << std::endl;
		}

		DiamondTrap( const DiamondTrap &to_copy) :
			name(to_copy.name), ClapTrap(to_copy), ScavTrap(to_copy), FragTrap(to_copy)
		{
			std::cout << "DiamondTrap copy constructor callel !" << std::endl;
		}

		DiamondTrap		&operator=(const DiamondTrap &to_assign)
		{
			if (this != &to_assign)
			{
				ScavTrap::operator=(to_assign);
				FragTrap::operator=(to_assign);
				this->name = to_assign.name;
			}
			return (*this);
		}

		~DiamondTrap( void )
		{
			std::cout << "DiamondTrap destructor called !" << std::endl;
		}

		void	attack(const std::string &target);

		void	whoAmI( void );

};
























#endif