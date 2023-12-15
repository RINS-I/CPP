/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niboukha <niboukha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 18:26:38 by niboukha          #+#    #+#             */
/*   Updated: 2023/11/26 10:46:28 by niboukha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	harlLevel;
	if (ac != 2)
	{
		std::cout << "invalide level!!" << std::endl;
		return (1);
	}
	harlLevel.complain(av[1]);	
	return (0);
}
