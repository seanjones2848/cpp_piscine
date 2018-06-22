/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 19:47:12 by sjones            #+#    #+#             */
/*   Updated: 2018/01/09 11:13:15 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
# include "Zombie.hpp"

class				ZombieHorde {
	public:
		void		announce();
		Zombie**	getHorde();
		ZombieHorde(int N);
		~ZombieHorde();
	private:
		int			_N;
		Zombie**	_horde;
};

#endif
