/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmateo <pmateo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 19:21:43 by pmateo            #+#    #+#             */
/*   Updated: 2025/04/18 03:38:49 by pmateo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

#define MAX_HP 100

class ScavTrap : virtual public ClapTrap
{
	public:
	
		ScavTrap( std::string name );
		ScavTrap( const ScavTrap &to_copy);
		ScavTrap	&operator=(const ScavTrap &to_assign);
		~ScavTrap( void );

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void	guardGate( void );
};





#endif