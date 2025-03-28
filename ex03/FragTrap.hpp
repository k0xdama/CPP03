/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmateo <pmateo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/24 01:20:19 by pmateo            #+#    #+#             */
/*   Updated: 2025/03/28 20:16:05 by pmateo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#define MAX_HP 100

class FragTrap : virtual public ClapTrap
{
	public:
	
		FragTrap( std::string name ) : ClapTrap(name)
		{
			this->hp = 100;
			this->ep = 100;
			this->ad = 30;
			std::cout << "FragTrap default constructor called !" << std::endl;
		}

		FragTrap( const FragTrap &to_copy) : ClapTrap(to_copy)
		{
			std::cout << "FragTrap copy constructor called !" << std::endl;
		}

		FragTrap	&operator=(const FragTrap &to_assign)
		{
			if (this != &to_assign)
				operator=(to_assign);
			return (*this);
		}

		~FragTrap( void )
		{
			std::cout << "FragTrap destructor called" << std::endl;
		}

		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);

		void	highfivesGuys( void );
};

#endif