/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sjones <sjones@student.42.us.org>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 15:41:57 by sjones            #+#    #+#             */
/*   Updated: 2018/01/09 10:24:43 by sjones           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int	main()
{
	Human	Bob;
	Human	Jim;

	Bob.action("intimidatingShout", "Jim");
	Bob.action("meleeAttack", "Jim");
	Jim.action("rangedAttack", "Bob");
}
