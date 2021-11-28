/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/28 18:06:43 by abrun             #+#    #+#             */
/*   Updated: 2021/11/28 18:20:37 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int	main()
{
	Karen	K;

	K.complain(std::string("DEBUG"));
	K.complain(std::string("DEBUG"));
	K.complain(std::string("DEB"));
	K.complain(std::string("WARNING"));
	K.complain(std::string("INFO"));
	K.complain(std::string("ERROR"));
	return (0);
}
