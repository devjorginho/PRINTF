/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 12:49:52 by devjorginho       #+#    #+#             */
/*   Updated: 2025/04/25 20:57:13 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdbool.h>

int		ft_printf(const char *s, ...);
int		fstring(char *s);
int		fnumber(int n);
int		funsignednumber(unsigned int n);
int		fhexnumber(unsigned int n, bool format);
int		fpoint(void *p, bool address);

#endif