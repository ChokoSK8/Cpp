/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 18:06:43 by abrun             #+#    #+#             */
/*   Updated: 2022/02/16 13:43:21 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main()
{
	Harl	K;

	K.complain(std::string("DEBUG"));
	K.complain(std::string("DEBUG"));
	K.complain(std::string("DEB"));
	K.complain(std::string("WARNING"));
	K.complain(std::string("INFO"));
	K.complain(std::string("ERROR"));
	K.complain(std::string(""));
	return (0);
}
