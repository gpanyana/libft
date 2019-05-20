/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 17:13:34 by gpanyana          #+#    #+#             */
/*   Updated: 2019/05/20 18:07:54 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		write(1, &str[i++], 1);
}

void	ft_tolower(int c)
{
	int i;
	char lowercase;

	i = 0;
	if (str[i] >= 'a' && 'z' >= str[i])
	{
		lowercase = 0;
		while (str[i] != '\0')
		{
			if (str[i] >= 'A' && 'Z' >= str[i])
				lowercase = i += 32;
		}
		write(1, &lowercase, 1);
		i += 1;
	}
	write(1, &str[i], 1);
	return (0);
}

int		main(void)
{
	ft_tolower("HELLo");
	return (0);
}
