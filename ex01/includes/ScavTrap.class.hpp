/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:41:31 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/12 11:55:35 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_CLASS_HPP
# define SCAVTRAP_CLASS_HPP
# include "ClapTrap.class.hpp"

class ScavTrap : public ClapTrap
{
	public :
				ScavTrap(void);
				ScavTrap(std::string name);
				ScavTrap(const ScavTrap &rhs);
				~ScavTrap(void);

				ScavTrap	&operator=(const ScavTrap &rhs);
				
				void	attack(const std::string &target);
				void	guardGate(void) const;
};

#endif
