/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkarimov <bkarimov@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 13:28:23 by bkarimov          #+#    #+#             */
/*   Updated: 2025/06/06 14:23:54 by bkarimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	count_digits(long n)
{
	int	len;

	len = (n <= 0);
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long int	nbr;
	long int	len;
	char		*num;

	nbr = (long) n;
	len = count_digits(nbr);
	num = malloc(len + 1);
	if (!num)
		return (NULL);
	num[len--] = '\0';
	if (nbr == 0)
		num[0] = '0';
	if (nbr < 0)
	{
		num[0] = '-';
		nbr = -nbr;
	}
	while (nbr > 0)
	{
		num[len--] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (num);
}
