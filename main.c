/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 16:57:38 by gpanyana          #+#    #+#             */
/*   Updated: 2019/05/27 10:41:41 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char	*s;
	char	*w;

	w = strcpy("good");
	ft_putstr(w);

	ft_putchar('\n');
	s = ft_strcpy("hello");
	ft_putstr(s);
	return (0);
}
