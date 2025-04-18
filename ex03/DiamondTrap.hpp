/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmateo <pmateo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 18:12:22 by pmateo            #+#    #+#             */
/*   Updated: 2025/04/18 03:41:37 by pmateo           ###   ########.fr       */
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
		DiamondTrap( std::string name );
		DiamondTrap( const DiamondTrap &to_copy);
		DiamondTrap		&operator=(const DiamondTrap &to_assign);
		~DiamondTrap( void );

		void	attack( const std::string &target );
		void	takeDamage( unsigned int amount);
		void	beRepaired( unsigned int amount);

		void	whoAmI( void );

};
























#endif