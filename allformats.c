/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allformats.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jde-carv <jde-carv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 13:09:19 by devjorginho       #+#    #+#             */
/*   Updated: 2025/04/26 17:43:09 by jde-carv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	fstring(char *s)
{
	int	count;

	count = 0;
	if (!s)
		return (write(1, "(null)", 6));
	if (!*s)
		return (0);
	while (*s)
		count += write(1, s++, 1);
	return (count);
}

int	fnumber(int n)
{
	long	nb;
	int		count;
	char	c;

	count = 0;
	nb = n;
	if (nb < 0)
	{
		count += write(1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		count += fnumber(nb / 10);
	c = nb % 10 + '0';
	return (count += write(1, &c, 1));
}

int	funsignednumber(unsigned int n)
{
	int		count;
	char	c;

	count = 0;
	if (n >= 10)
		count += funsignednumber(n / 10);
	c = n % 10 + '0';
	return (count += write(1, &c, 1));
}

int	fhexnumber(unsigned int n, bool X)
{
	int		count;
	char	*base;

	count = 0;
	if (X)
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n >= 16)
		count += fhexnumber(n / 16, X);
	return (count += write(1, &base[n % 16], 1));
}

int	fpoint(void *p, bool address)
{
	char			*base;
	unsigned long	n;
	int				count;

	if (!p)
		return (write(1, "(nil)", 5));
	count = 0;
	n = (unsigned long)p;
	base = "0123456789abcdef";
	if (address)
		count += write(1, "0x", 2);
	if (n == 0)
	{
		count += write(1, "0", 1);
		return (0);
	}
	if (n >= 16)
		count += fpoint((void *)(n / 16), 0);
	return (count += write(1, &base[n % 16], 1));
}
