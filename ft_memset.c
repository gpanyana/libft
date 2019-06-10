/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 15:45:13 by gpanyana          #+#    #+#             */
/*   Updated: 2019/06/10 18:54:48 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			counter;
	unsigned char	value;
	unsigned char	*beta;

	counter = 0;
	value = c;
	beta = b;
	while (counter < len)
	{
		beta[counter] = value;
		counter++;
	}
	return (b);
}
