/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 18:14:00 by gpanyana          #+#    #+#             */
/*   Updated: 2019/06/10 18:52:09 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			counter;
	unsigned char	*str;

	str = s;
	if (n == 0)
		return ;
	counter = 0;
	while (counter < n)
	{
		str[counter] = '0';
		counter++;
	}
	return ;
}
