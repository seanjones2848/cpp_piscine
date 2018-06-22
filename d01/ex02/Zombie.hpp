/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 14:28:26 by sjones            #+#    #+#             */
/*   Updated: 2018/01/09 10:51:29 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <cstring>
# include <iostream>
# include <cstdlib>

class		Zombie {
	public:
		void			setZombie(std::string str1, std::string str2);
		std::string*	getName();
		std::string*	getType();
		void			announce();
		Zombie();
		Zombie(std::string str1, std::string str2);
		~Zombie();
	private:
		std::string		_name;
		std::string		_type;
};

#endif
