/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: clora-ro <clora-ro@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/25 13:47:27 by clora-ro          #+#    #+#             */
/*   Updated: 2023/01/25 14:43:42 by clora-ro         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

class	Fixed {

public:

	Fixed(void);
	Fixed(Fixed const& cpy);
	~Fixed(void);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	
	Fixed	&operator=(Fixed const& obj);

private:

	int					_n;
	int static const	_bits = 8;

};
