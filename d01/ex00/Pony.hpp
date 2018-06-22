/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 12:49:16 by sjones            #+#    #+#             */
/*   Updated: 2018/01/09 10:46:47 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP
# include <iostream>
# include <cstring>
# include <string>

class		Pony {
	public:
		std::string		name;
		Pony(std::string str);
		~Pony(); };

void ponyOnTheHeap(std::string name);
void ponyOnTheStack(std::string name);


#endif
