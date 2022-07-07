/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:22:57 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/07 16:47:40 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.class.hpp"

int	main(void)
{
	ClapTrap	Pierre("Pierre");
	std::cout << std::endl;

	ClapTrap	Pil;
	std::cout << std::endl;

	ScavTrap	Scavvv("Scavvv");
	std::cout << std::endl;

	ScavTrap	Bis(Scavvv);
	std::cout << std::endl;

	ScavTrap	Ter;
	std::cout << std::endl;
	
	Pil.attack("Scavvv");
	Ter.attack("Scavvv");
	std::cout << std::endl;

	Pierre.attack("Scavvv");
	Scavvv.takeDamage(0);
	Scavvv.attack("Pierre");
	Pierre.takeDamage(20);
	std::cout << std::endl;

	Pierre.attack("Scavvv");
	Scavvv.takeDamage(0);
	std::cout << std::endl;

	Scavvv.guardGate();
	std::cout << std::endl;
	return (0);
}
