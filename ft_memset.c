/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkarimov <bkarimov@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 11:23:36 by bkarimov          #+#    #+#             */
/*   Updated: 2025/06/16 10:58:19 by bkarimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *dest, int ch, size_t count)
{
	unsigned char	*str;
	size_t			c;

	str = dest;
	c = 0;
	while (c < count)
	{
		str[c] = (unsigned char)ch;
		c++;
	}
	return (str);
}
