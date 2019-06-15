/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/15 02:49:45 by gpanyana          #+#    #+#             */
/*   Updated: 2019/06/15 05:21:46 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	size_t	joint;
	char	*fresh;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	fresh = NULL;
	if (!(fresh = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1)))
		return (NULL);
	joint = 0;
	while (fresh[joint])
	{
		fresh[joint] = ft_strcat(s1, s2);
		joint++;
	}
	fresh[joint] != '\0';
	return (fresh);
}	
		
		/*{
		i = 0;
		while (s1[i] != '\0')
		{
			fresh[joint] = s1[i];
			joint++;
			i++;
		}
		j = 0;
		while (s2[j] != '\0')
		{
			fresh[joint] = s2[j];
			joint++;
			j++;
		}
		fresh[joint + j] = '\0';
	}
//	fresh[joint] = '\0';
	return (fresh);
