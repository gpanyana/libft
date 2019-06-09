/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 12:35:43 by gpanyana          #+#    #+#             */
/*   Updated: 2019/06/07 15:51:46 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strequ(char const *s1, char const *s2)
{
	size_t i;
	int		k;

	i = 0;
	if (!(s1 && s2))
		return (0);
	if (*s1 == '\0' || *s2 == '\0')
		return (0);
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	while (*s1 != '\0' && *s2 != '\0')
	{
		k = ft_strcmp((char *)s1, (char *)s2);
		if (k == 0)
			return (1);
		else
			return (0);
	}
	return (0);
}
