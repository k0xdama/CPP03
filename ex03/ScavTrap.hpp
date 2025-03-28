/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmateo <pmateo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 19:21:43 by pmateo            #+#    #+#             */
/*   Updated: 2025/03/28 20:16:12 by pmateo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

#define MAX_HP 100

class ScavTrap : virtual public ClapTrap
{
	public:
	
		ScavTrap( std::string name ) : ClapTrap(name)
		{
			this->hp = 100;
			this->ep = 50;
			this->ad = 20;
			std::cout << "ScavTrap default constructor called !" << std::endl;
		}

		ScavTrap( const ScavTrap &to_copy) : ClapTrap(to_copy)
		{
			std::cout << "ScavTrap copy constructor called !" << std::endl;
		}

		ScavTrap	&operator=(const ScavTrap &to_assign)
		{
			if (this != &to_assign)
				operator=(to_assign);
			return (*this);
		}

		~ScavTrap( void )
		{
			std::cout << "ScavTrap destructor called" << std::endl;
		}

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void	guardGate( void );
};












#endif