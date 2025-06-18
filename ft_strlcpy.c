/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkarimov <bkarimov@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 11:32:19 by bkarimov          #+#    #+#             */
/*   Updated: 2025/06/07 11:53:52 by bkarimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	size_s;
	size_t	count;

	size_s = 0;
	count = 0;
	while (src[size_s] != '\0')
	{
		size_s++;
	}
	if (size == 0)
		return (size_s);
	while (count < size - 1 && src[count])
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (size_s);
}
