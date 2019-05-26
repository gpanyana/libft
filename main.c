/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/26 16:57:38 by gpanyana          #+#    #+#             */
/*   Updated: 2019/05/26 17:16:07 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char	*s;
	char	*w;

	w = strdup("good");
	ft_putstr(w);

	ft_putchar('\n');
	s = ft_strdup("hello");
	ft_putstr(s);
	return (0);
}
