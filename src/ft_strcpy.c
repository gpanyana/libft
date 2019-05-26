/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 09:49:10 by gpanyana          #+#    #+#             */
/*   Updated: 2019/05/23 10:24:46 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include "libft.h"*/

char	*ft_strcpy(char *dst, const char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0' && dst[i] != '\0')
	{
		dst[i] = src[i];
			i++;
	}
	/*dst[i] = '\0';*/
	return (dst);
}

int		main()
{
	char *s = "Hello";
	char *t = "bye-bye";
	
	t = ft_strcpy(t,s);
	return (0);
}
