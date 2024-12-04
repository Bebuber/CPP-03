/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 23:30:03 by bebuber           #+#    #+#             */
/*   Updated: 2024/12/05 00:00:32 by bebuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
	hitPoint = 100;
	energyPoints = 100;
	attackDamage = 30;
	std::cout << "FragTrap " << name << " contructed." << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->name << " destructed." << std::endl;
}

void FragTrap::highFivesGuys() {
	std::cout << "FragTrap " << this->name << " requests a high five!" << std::endl;
}