/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niboukha <niboukha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 15:14:54 by niboukha          #+#    #+#             */
/*   Updated: 2023/11/27 16:27:11 by niboukha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class	FragTrap : public ClapTrap
{
	public :
		FragTrap(void);
		FragTrap(const FragTrap &FragTrap);
		FragTrap&	operator=(const FragTrap &fragtrap);
		~FragTrap(void);

		FragTrap(std::string name);

		void			highFivesGuys(void);
};

#endif
