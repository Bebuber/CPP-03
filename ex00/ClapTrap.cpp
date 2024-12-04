/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:29:46 by bebuber           #+#    #+#             */
/*   Updated: 2024/12/04 20:59:48 by bebuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Orthodox Canonical Form
ClapTrap::ClapTrap() : name("unnamed") {
		std::cout << "Default constructor called." << std::endl;
}
ClapTrap::ClapTrap(std::string name) : name(name) {
		std::cout << "String constructor called." << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap& other) : name(other.name) {
	std::cout << "Copy constructor called." << std::endl;
}
ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	std::cout << "Copy assignment operator called." << std::endl;
	if (this != &other)
		this->name = other.name;
	return *this;
}
ClapTrap::~ClapTrap() {
		std::cout << "Destructor called." << std::endl;
}

// --------------Accessories
const std::string& ClapTrap::getName() {return name;}
int ClapTrap::getHitPoints() {return hitPoint;}
int ClapTrap::getEnergyPoints() {return energyPoints;}
int ClapTrap::getAttackDamage() {return attackDamage;}

//---------------Functions 
void ClapTrap::attack(const std::string& target) {
	if (hitPoint > 0 && energyPoints > 0)
	{
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " \
		<< attackDamage << " points of damage!\n" << std::endl;
		energyPoints--;
	}
	else if (hitPoint == 0)
		std::cout << "ClapTrap " << name << " can not attack, no hit point.\n" << std::endl;
	else if (energyPoints == 0)
		std::cout << "ClapTrap " << name << " can not attack, no energy points.\n" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "ClapTrap " << name << " gets " << amount << " points of damage!\n" << std::endl;
	hitPoint -= amount;
}

void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "ClapTrap " << name << " repairs itself.\n" << std::endl;
	hitPoint += amount;
}