/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:58:53 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/07 17:19:58 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_HPP
# define FRAGTRAP_CLASS_HPP
# include "ClapTrap.class.hpp"

class FragTrap : public ClapTrap
{
	private : 
				std::string	_name;
				int			_h_points;
				int			_e_points;
				int			_a_damage;
	public :
				FragTrap(void);
				FragTrap(std::string name);
				FragTrap(const FragTrap &rhs);
				~FragTrap(void);

				FragTrap	&operator=(const FragTrap &rhs);

				void	attack(const std::string &target);
				void	highFivesGuys(void) const;
};

#endif
