/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:22:57 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/07 17:23:48 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.class.hpp"
#include "FragTrap.class.hpp"

int	main(void)
{
	ClapTrap	Clap("Clap");
	std::cout << std::endl;
	ScavTrap	Scav("Scav");
	std::cout << std::endl;
	FragTrap	Frag("Frag");
	std::cout << std::endl;

	for (int i = 0; i < 12; i++)
		Clap.attack("Pierre");
	for (int j = 0; j < 52; j++)
	{
		std::cout << j << std::endl;
		Scav.attack("Paul");
	}
	for (int k = 0; k < 101; k++)
	{
		std::cout << k << std::endl;
		Frag.attack("Louis");
	}
	Frag.highFivesGuys();
	return (0);
}
