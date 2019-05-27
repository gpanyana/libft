/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gpanyana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:34:44 by gpanyana          #+#    #+#             */
/*   Updated: 2019/05/27 18:34:38 by gpanyana         ###   ########.fr       */
/*   Updated: 2019/05/24 18:07:30 by gpanyana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <ctype.h>
# include <stdlib.h>
# include <string.h>

void	ft_putchar(char c);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *s1);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strncat(char *restrict s1, const char *restrict s2, size_t n);

//int		ft_isalpha(int c);
//int		ft_isdigit(int c);
//int		ft_isalnum(int c);
//int		ft_isascii(int c);
//int		ft_isprint(int c);

int		ft_tolower(int c);
int		ft_toupper(int c);

void	ft_putstr(char *s);
#endif
