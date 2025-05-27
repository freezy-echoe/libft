/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkarimov <bkarimov@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 11:37:29 by bkarimov          #+#    #+#             */
/*   Updated: 2025/05/27 13:07:20 by bkarimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_calloc(unsigned int nmeb, unsigned int size)
{
	unsigned char	*ptr;
	unsigned int	n;
	unsigned int	t;

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
