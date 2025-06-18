/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkarimov <bkarimov@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 13:08:40 by bkarimov          #+#    #+#             */
/*   Updated: 2025/06/07 12:05:02 by bkarimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *b, const char *l, size_t len)
{
	size_t	count;
	size_t	i;

	count = 0;
	if ((b == NULL || l == NULL) && len == 0)
		return (0);
	if (l[0] == '\0')
		return ((char *)b);
	while (b[count] != '\0' && count < len)
	{
		if (b[count] == l[0])
		{
			i = 1;
			while (l[i] && b[count + i] == l[i] && count + i < len)
				i++;
			if (l[i] == '\0')
				return ((char *) &b[count]);
		}
		++count;
	}
	return (0);
}
