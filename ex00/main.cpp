/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bebuber <bebuber@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 14:29:50 by bebuber           #+#    #+#             */
/*   Updated: 2024/12/04 21:00:17 by bebuber          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {

	ClapTrap a("Madman");
	ClapTrap b("Witch");

	std::cout << std::endl;
	
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	a.attack(b.getName());
	b.takeDamage(a.getAttackDamage());
	
	
	std::cout << a.getName() << " has got;\n" << a.getHitPoints() << " ->Hit points\n" \
	<< a.getEnergyPoints() << " ->Energy points\n" << a.getAttackDamage() << " ->Attack damage\n" << std::endl;

	std::cout << b.getName() << " has got;\n" << b.getHitPoints() << " ->Hit points\n" \
	<< b.getEnergyPoints() << " ->Energy points\n" << b.getAttackDamage() << " ->Attack damage\n" << std::endl;
	
	b.beRepaired(3);
	
	std::cout << b.getName() << " has got;\n" << b.getHitPoints() << " ->Hit points\n" \
	<< b.getEnergyPoints() << " ->Energy points\n" << b.getAttackDamage() << " ->Attack damage\n" << std::endl;

	
	return 0;
}