/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 13:58:38 by gpanyana          #+#    #+#             */
/*   Updated: 2019/06/07 15:41:18 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t	i;
	int		k;

	i = 0;
	if (!(s1 && s2))
		return (0);
	if (s1[0] == '\0' || s2[0] == '\0')
		return (0);
	while (*s1 != '\0' && *s2 != '\0' && i < n)
	{
		k = ft_strcmp((char *)s1, (char *)s2);
		if (k == 0)
			return (1);
		else
			return (0);
	}
	return (0);
}
