/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 12:58:40 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/07 15:01:48 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_CLASS_HPP
# define CLAPTRAP_CLASS_HPP
# include <iostream>

class ClapTrap
{
	private : 
				std::string	_name;
				int			_h_points;
				int			_e_points;
				int			_a_damage;
	public :
				ClapTrap(void);
				ClapTrap(std::string name);
				ClapTrap(const ClapTrap &rhs);
				~ClapTrap(void);

				ClapTrap	&operator=(const ClapTrap &rhs);

				void	attack(const std::string &target);
				void	takeDamage(unsigned int amount);
				void	beRepaired(unsigned int amount);
};

#endif
