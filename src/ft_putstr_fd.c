/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugingas <jugingas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 13:51:41 by jugingas          #+#    #+#             */
/*   Updated: 2022/11/14 11:53:47 by jugingas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	if (!ft_strlen(s))
		return (0);
	while (s[i])
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	return (i);
}
