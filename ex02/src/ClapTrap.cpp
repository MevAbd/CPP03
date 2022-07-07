/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malbrand <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 13:14:23 by malbrand          #+#    #+#             */
/*   Updated: 2022/07/07 16:29:55 by malbrand         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.class.hpp"

ClapTrap::ClapTrap(void) : _name("")
{
	std::cout << "CLAPTRAP : Constructor" << std::endl;
	_h_points = 10;
	_e_points = 10;
	_a_damage = 0;
	return ;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _h_points(10), _e_points(10), _a_damage(0)
{
	std::cout << "CLAPTRAP : " <<  _name << " Constructor" << std::endl;
	return ;
}

ClapTrap::ClapTrap(const ClapTrap &rhs)
{
	*this = rhs;
	if (_name == "")
		std::cout << "CLAPTRAP : Copy constructor" << std::endl;
	else
		std::cout << "CLAPTRAP : " << _name << " Copy constructor" << std::endl;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	if (_name == "")
		std::cout << "CLAPTRAP : Destructor called" << std::endl;
	else 
		std::cout << "CLAPTRAP : " << _name << " Destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (_h_points > 0 && _e_points > 0)
	{
		std::cout << "CLAPTRAP : " << _name << " attacks " << target << ", causing " << _a_damage << " points of damage !" << std::endl;
		_e_points = _e_points - 1;
	}
	else
		std::cout << "CLAPTRAP : " << _name << " cant attack" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "CLAPTRAP " << _name << " take damage of " << amount << " points" << std::endl;
	_h_points = _h_points - amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_e_points > 0 && _h_points > 0)
	{
		_h_points = _h_points + amount;
		_e_points = _e_points - 1;
		std::cout << "CLAPTRAP : " << _name << " be repaired of " << amount << " points" << std::endl;
	}
	else
		std::cout << "CLAPTRAP : " << _name << " cant be repaired" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &rhs)
{
	this->_name = rhs._name;
	this->_h_points = rhs._h_points;
	this->_e_points = rhs._e_points;
	this->_a_damage = rhs._a_damage;
	return (*this);
}
