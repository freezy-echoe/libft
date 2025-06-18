/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkarimov <bkarimov@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 12:11:46 by bkarimov          #+#    #+#             */
/*   Updated: 2025/06/16 10:56:38 by bkarimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t count)
{
	unsigned char		*dest2;
	const unsigned char	*src2;
	size_t				c;

	if (count == 0)
		return (dest);
	if (dest == NULL && src == NULL)
		return (NULL);
	dest2 = (unsigned char *)dest;
	src2 = (const unsigned char *)src;
	c = 0;
	while (c < count)
	{
		dest2[c] = src2[c];
		c++;
	}
	return (dest2);
}
