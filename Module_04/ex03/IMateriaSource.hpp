/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrun <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 13:37:14 by abrun             #+#    #+#             */
/*   Updated: 2021/12/02 14:05:25 by abrun            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP
# include "AMateria.hpp"

class IMateriaSource
{
       public:
              virtual ~IMateriaSource() {}
              virtual void learnMateria(AMateria*) = 0;
              virtual AMateria* createMateria(std::string const & type) = 0;
};
#endif
