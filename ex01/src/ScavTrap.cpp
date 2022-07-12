/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 15:43:44 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/12 12:02:53 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.class.hpp"

ScavTrap::ScavTrap(void) : ClapTrap("")
{
	std::cout << "SCAVTRAP : Constructor" << std::endl;
	this->_h_points = 100;
	this->_e_points = 50;
	this->_a_damage = 20;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "SCAVTRAP : " << _name << " Constructor" << std::endl;
	this->_h_points = 100;
	this->_e_points = 50;
	this->_a_damage = 20;
	return ;
}

ScavTrap::ScavTrap(const ScavTrap &rhs)
{
	*this = rhs;
	if (_name == "")
		std::cout << "SCAVTRAP copy constructor" << std::endl;
	else
		std::cout << "SCAVTRAP : " << _name << " Copy constructor" << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	if (_name == "")
		std::cout << "SCAVTRAP Destructor called" << std::endl;
	else 
		std::cout << "SCAVTRAP : " << _name << " Destructor called" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (_h_points > 0 && _e_points > 0)
	{
		std::cout << "SCAVTRAP : " << _name << " attacks " << target << ", causing " << _a_damage << " points of damage !" << std::endl;
		_e_points = _e_points - 1;
	}
	else
		std::cout << "SCAVTRAP : " << _name << " cant attack" << std::endl;
}

void	ScavTrap::guardGate(void) const
{
	std::cout << _name << " SCAVTRAP is in mode gate keeper !" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &rhs)
{
	this->_name = rhs._name;
	this->_h_points = rhs._h_points;
	this->_e_points = rhs._e_points;
	this->_a_damage = rhs._a_damage;
	return (*this);
}
