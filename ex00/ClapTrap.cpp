/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:29:46 by bebuber           #+#    #+#             */
/*   Updated: 2024/12/04 21:44:32 by bebuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Orthodox Canonical Form
ClapTrap::ClapTrap(std::string name) : name(name), hitPoint(10), energyPoints(10), attackDamage(0) {
		std::cout << "Constructor called." << std::endl;
}
ClapTrap::ClapTrap(const ClapTrap& other) {
	std::cout << "Copy constructor called." << std::endl;
	name = other.name;
	hitPoint = other.hitPoint;
	energyPoints = other.energyPoints;
	attackDamage = other.attackDamage;
}
ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	std::cout << "Copy assignment operator called." << std::endl;
	if (this != &other)
		this->name = other.name;
		this->hitPoint = other.hitPoint;
		this->energyPoints = other.energyPoints;
		this->attackDamage = other.attackDamage;
	return *this;
}
ClapTrap::~ClapTrap() {
		std::cout << "Destructor called." << std::endl;
}

// Accessories
const std::string& ClapTrap::getName() {return name;}
int ClapTrap::getHitPoints() {return hitPoint;}
int ClapTrap::getEnergyPoints() {return energyPoints;}
int ClapTrap::getAttackDamage() {return attackDamage;}

// Functions 
void ClapTrap::attack(const std::string& target) {
	if (hitPoint > 0 && energyPoints > 0)
	{
		std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!\n" << std::endl;
		energyPoints--;
	}
	else 
		std::cout << "ClapTrap " << name << " can not attack because it has no hit points or energy points left!\n" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (hitPoint > 0) {
		hitPoint -= amount;
		if (hitPoint < 0) hitPoint = 0;
		std::cout << "ClapTrap " << name << " gets " << amount << " points of damage!\n" << std::endl;
	}
	else 
		std::cout << "ClapTrap " << name << " is already destroyed.\n" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (hitPoint > 0 && energyPoints > 0) {
		hitPoint += amount;
		energyPoints--;
		std::cout << "ClapTrap " << name << " repairs itself.\n" << std::endl;
	}
	else
		std::cout << "ClapTrap " << name << " can not be repaired because it has no hit points or energy points left!\n" << std::endl;
}