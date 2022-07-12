/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 16:58:53 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/12 12:04:23 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_CLASS_HPP
# define FRAGTRAP_CLASS_HPP
# include "ClapTrap.class.hpp"

class FragTrap : public ClapTrap
{
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
