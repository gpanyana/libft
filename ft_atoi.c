/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/24 12:43:15 by gpanyana          #+#    #+#             */
/*   Updated: 2019/06/24 13:21:06 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int i;
	long int nbr;
	int sign;

	i = 0;
	nbr = 0;
	sign = 1;
	if (!str)
		return (0);
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
		if (str[i++] == '-')
			sign = -1;
	while (str[i] >= 48 && str[i] <= 57)
	{
		nbr = (nbr * 10) + (str[i++] - 48);
//		if (nbr < 2147483648 && sign == -1)
//			return (0);
//		if (nbr > 2147483647 && sign == 1)
//			return (-1);
	}
	return (nbr * sign);
}
