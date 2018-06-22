/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 15:19:10 by sjones            #+#    #+#             */
/*   Updated: 2018/01/09 10:53:57 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
# include "Zombie.hpp"
# include <ctime>
# include <unistd.h>

class		ZombieEvent {
	public:
		Zombie*			newZombie(std::string name);
		void			setZombieType(std::string str);
		std::string*	getType();
		void			randomChump();
		ZombieEvent(std::string str);
		~ZombieEvent();
	private:
		std::string	_type;
};
#endif

