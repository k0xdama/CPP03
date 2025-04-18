/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmateo <pmateo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 01:20:19 by pmateo            #+#    #+#             */
/*   Updated: 2025/04/18 03:38:40 by pmateo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

#define MAX_HP 100

class FragTrap : virtual public ClapTrap
{
	public:
	
		FragTrap( std::string name );
		FragTrap( const FragTrap &to_copy);
		FragTrap	&operator=(const FragTrap &to_assign);
		~FragTrap( void );

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void	highfivesGuys( void );
};

#endif