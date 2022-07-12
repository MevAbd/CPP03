/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:01:48 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/12 12:05:41 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.class.hpp"

FragTrap::FragTrap(void) : ClapTrap("")
{
	std::cout << "FRAGTRAP : Constructor" << std::endl;
	this->_h_points = 100;
	this->_e_points = 100;
	this->_a_damage = 30;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "FRAGTRAP : " << _name << " Constructor" << std::endl;
	this->_h_points = 100;
	this->_e_points = 100;
	this->_a_damage = 30;
	return ;
}

FragTrap::FragTrap(const FragTrap &rhs)
{
	*this = rhs;
	if (_name == "")
		std::cout << "FRAGTRAP copy constructor" << std::endl;
	else
		std::cout << "FRAGTRAP : " << _name << " Copy constructor" << std::endl;
	return ;
}

FragTrap::~FragTrap(void)
{
	if (_name == "")
		std::cout << "FRAGTRAP Destructor called" << std::endl;
	else 
		std::cout << "FRAGTRAP : " << _name << " Destructor called" << std::endl;
}

void	FragTrap::highFivesGuys(void) const
{
	std::cout << _name << " FRAGTRAP HIGH FIVES GUYS ??" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &rhs)
{
	this->_name = rhs._name;
	this->_h_points = rhs._h_points;
	this->_e_points = rhs._e_points;
	this->_a_damage = rhs._a_damage;
	return (*this);
}

void	FragTrap::attack(const std::string &target)
{
	if (_h_points > 0 && _e_points > 0)
	{
		std::cout << "FRAGTRAP : " << _name << " attacks " << target << ", causing " << _a_damage << " points of damage !" << std::endl;
		_e_points = _e_points - 1;
	}
	else
		std::cout << "FRAGTRAP : " << _name << " cant attack" << std::endl;
}
