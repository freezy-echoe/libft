/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkarimov <bkarimov@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 14:17:44 by bkarimov          #+#    #+#             */
/*   Updated: 2025/06/16 10:56:18 by bkarimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char		*ptr;
	size_t				count;

	ptr = (unsigned char *)s;
	count = 0;
	while (count < n)
	{
		if (ptr[count] == (unsigned char)c)
		{
			return ((void *) &ptr[count]);
		}
		count++;
	}
	return (0);
}
