/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niboukha <niboukha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 15:13:41 by niboukha          #+#    #+#             */
/*   Updated: 2023/11/30 16:55:01 by niboukha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
		private:
			AMateria *maSource[4];
			
		public:
			MateriaSource();
			MateriaSource(MateriaSource& MateriaSource);
			MateriaSource&   operator=(const MateriaSource& MateriaSource);   
			~MateriaSource();


			void		learnMateria(AMateria* materia);
			AMateria*	createMateria(std::string const & type);

};

#endif
