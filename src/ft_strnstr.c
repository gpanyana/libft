/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 13:37:50 by gpanyana          #+#    #+#             */
/*   Updated: 2019/06/03 18:29:34 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t i;
	size_t j;

	i = 0;
	while (haystack[i] != '\0' && len)
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			return ((char *)haystack[i++];
		}
			while (haystack[i] == needle[j] && haystack[i] < len - 1)
			{
				if (haystack[i] != needle[j]
				i++;
				j++;
			}
			return ((char *)haystack[i]);
		}
		i++;
		j++;
	}



		return (NULL); //if needle doesn't occur in haystack
	if (needle == '\0') //if the string needle is empty 
	   return ((char *)haystack);	//return string haystack
}
