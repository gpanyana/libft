<<<<<<< HEAD
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 09:07:40 by gpanyana          #+#    #+#             */
/*   Updated: 2019/05/26 18:06:18 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
=======

#include <string.h>
#include <stdlib.h>
#include <unistd.h>
>>>>>>> 36276063ea1ff2675efb963ae724fef20b4e3693

char	*ft_strdup(const char *s1)
{
	char	*w;
	int		i;

	i = 0;
<<<<<<< HEAD
	if (!(w = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1))))
		return (NULL);
	while (s1[i])
=======
	if (!(w = (char *) malloc(sizeof(char) * (strlen(s1) + 1))))
		return (NULL);
	while (w[i])
>>>>>>> 36276063ea1ff2675efb963ae724fef20b4e3693
	{
		w[i] = s1[i];
		i++;
	}
<<<<<<< HEAD
	w[i] = '\0';
   	return (w);
=======
	return (w);
}

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(1, &s[i], 1);
		i++;
	}
}

int		main(void)
{
	char	*m;

	m = ft_strdup("hello");
	ft_putstr(m);
	return (0);
>>>>>>> 36276063ea1ff2675efb963ae724fef20b4e3693
}
