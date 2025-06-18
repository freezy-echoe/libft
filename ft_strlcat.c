/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkarimov <bkarimov@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 11:56:34 by bkarimov          #+#    #+#             */
/*   Updated: 2025/06/07 12:05:40 by bkarimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;
	size_t	d_len2;
	size_t	count;

	if ((dest == NULL || src == NULL) && size == 0)
		return (0);
	d_len = ft_strlen(dest);
	s_len = ft_strlen((char *)src);
	count = 0;
	d_len2 = d_len;
	if (size <= d_len)
		return (size + s_len);
	if (!src)
		return (0);
	while (src[count] && d_len < size - 1)
	{
		dest[d_len] = src[count];
		count++;
		d_len++;
	}
	dest[d_len] = '\0';
	return (d_len2 + s_len);
}
