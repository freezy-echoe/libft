/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkarimov <bkarimov@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 13:07:36 by bkarimov          #+#    #+#             */
/*   Updated: 2025/06/16 10:57:26 by bkarimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t count)
{
	unsigned char	*dest2;
	unsigned char	*src2;
	size_t			c;

	if (count == 0)
		return (dest);
	if (dest == NULL && src == NULL)
		return (NULL);
	src2 = (unsigned char *)src;
	dest2 = (unsigned char *) dest;
	if (dest2 < src2)
	{
		c = 0;
		while (c < count)
		{
			dest2[c] = src2[c];
			c++;
		}
	}
	else
	{
		while (count--)
			dest2[count] = src2[count];
	}
	return (dest);
}
