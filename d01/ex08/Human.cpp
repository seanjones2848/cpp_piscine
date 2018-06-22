/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 15:44:27 by sjones            #+#    #+#             */
/*   Updated: 2018/01/09 15:19:19 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void		Human::meleeAttack(std::string const & target) {
	std::cout << "Punching " << target << " in the face." << std::endl;
};

void		Human::rangedAttack(std::string const & target) {
	std::cout << "Shooting " << target << " in the face." << std::endl;
};

void		Human::intimidatingShout(std::string const & target) {
	std::cout << "FUCK YOU " << target << std::endl;
};

void		Human::action(std::string const & action_name, std::string const & target) {
	std::string actionsStr[] = {"meleeAttack", "rangedAttack", "intimidatingShout"};
	Actions actions[3] = {&Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout};

	for (int i = 0; i <= 2; i++)
		if (actionsStr[i] == action_name)
		{
			(this->*(actions[i]))(target);
			break;
		}
}
