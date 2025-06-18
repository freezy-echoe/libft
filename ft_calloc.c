/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkarimov <bkarimov@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 11:37:29 by bkarimov          #+#    #+#             */
/*   Updated: 2025/06/16 10:55:20 by bkarimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmeb, size_t size)
{
	unsigned char	*ptr;
	size_t			n;
	size_t			t;

	if (nmeb == 0 || size == 0)
	{
		return (malloc(1));
	}
	t = nmeb * size;
	n = 0;
	ptr = (unsigned char *)malloc(t);
	if (!ptr)
	{
		return (NULL);
	}
	while (n < t)
	{
		ptr[n] = 0;
		n++;
	}
	return ((void *)ptr);
}
