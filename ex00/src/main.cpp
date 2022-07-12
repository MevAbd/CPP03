/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:22:57 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/07 16:37:20 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"

int	main(void)
{
	ClapTrap	Pierre("Pierre");
	ClapTrap	Paul("Paul");
	ClapTrap	Jack(Paul);

	ClapTrap	test = Jack;

	Pierre.attack("Paul");
	Paul.takeDamage(0);
	Pierre.attack("Paul");
	Paul.takeDamage(0);
	Pierre.attack("Paul");
	Paul.takeDamage(0);
	Pierre.attack("Paul");
	Paul.takeDamage(0);
	Pierre.attack("Paul");
	Paul.takeDamage(0);
	Pierre.attack("Paul");
	Paul.takeDamage(0);
	Pierre.attack("Paul");
	Paul.takeDamage(0);
	Pierre.attack("Paul");
	Paul.takeDamage(0);
	Pierre.attack("Paul");
	Paul.takeDamage(0);
	Pierre.attack("Paul");
	Paul.takeDamage(0);
	Pierre.attack("Paul");
	Paul.takeDamage(0);
	Pierre.attack("Paul");
	Paul.takeDamage(0);
	Pierre.attack("Paul");
	Paul.takeDamage(0);
	Pierre.attack("Paul");
	Paul.takeDamage(0);
	Pierre.attack("Paul");
	Paul.takeDamage(0);
	Pierre.attack("Paul");
	Paul.takeDamage(0);
	Pierre.attack("Paul");
	Paul.takeDamage(0);
	Pierre.attack("Paul");
	Paul.takeDamage(0);
	Pierre.attack("Paul");
	Paul.takeDamage(0);
	Pierre.beRepaired(20);
	Pierre.attack("Paul");
	Paul.takeDamage(0);
	return (0);
}
