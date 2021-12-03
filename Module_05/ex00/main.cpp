/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/03 10:28:16 by abrun             #+#    #+#             */
/*   Updated: 2021/12/03 11:21:51 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int		main()
{
	Bureaucrat	*Sheldon = new Bureaucrat("Sheldon", 3);
	Bureaucrat	*Howard = new Bureaucrat("Howard", 152);

	delete Sheldon;
	delete Howard;
	return (0);
}
