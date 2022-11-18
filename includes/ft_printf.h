/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jugingas <jugingas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/10 18:19:27 by jugingas          #+#    #+#             */
/*   Updated: 2022/11/10 18:24:10 by jugingas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdint.h>

int		ft_printf(const char *str, ...);
int		ft_putnbr_base(unsigned int nbr, char *base);
int		flag_p(uintptr_t ptr);

#endif
