/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 12:57:16 by devjorginho       #+#    #+#             */
/*   Updated: 2025/04/26 16:51:07 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	formathandle(va_list args, char c)
{
	int		count;
	char	f;

	count = 0;
	if (c == 'c')
	{
		f = va_arg(args, int);
		count += write(1, &f, 1);
	}
	if (c == 's')
		count += fstring(va_arg(args, char *));
	if (c == 'd' || c == 'i')
		count += fnumber(va_arg(args, int));
	if (c == 'p')
		count += fpoint(va_arg(args, void *), 1);
	if (c == 'x')
		count += fhexnumber(va_arg(args, unsigned int), 0);
	if (c == 'X')
		count += fhexnumber(va_arg(args, unsigned int), 1);
	if (c == 'u')
		count += funsignednumber(va_arg(args, unsigned int));
	return (count);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		count;

	va_start(args, s);
	count = 0;
	if (!*s)
		return (count);
	while (*s && count >= 0)
	{
		if (*s == '%' && *(s + 1) != '%' && *(s + 1))
			count += formathandle(args, *(++s));
		else if (*s == '%' && *(s + 1) == '%')
			count += write(1, s++, 1);
		else if(*s == '%' && *(s + 1) == 0)
		{
			count = -1;
			break;
		}
		else
			count += write(1, s, 1);
		s++;
	}
	va_end(args);
	if (count < 0)
		return (-1);
	return (count);
}

