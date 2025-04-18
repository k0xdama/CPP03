/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmateo <pmateo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 14:19:48 by pmateo            #+#    #+#             */
/*   Updated: 2025/04/17 22:53:20 by pmateo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap
{
	private:
		std::string name;
		int			hp; //Health points
		int			ep; //Energy points
		int			ad;	//Attack damage
	
	public:
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		void	print_stats( void );

		ClapTrap( std::string name );
		ClapTrap(const ClapTrap &to_copy);
		~ClapTrap( void );
		ClapTrap &operator=(const ClapTrap &to_assign);
};

















# endif