/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkarimov <bkarimov@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 10:54:08 by bkarimov          #+#    #+#             */
/*   Updated: 2025/06/16 10:59:49 by bkarimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	size_t	n;
	char	*s_dub;

	n = 0;
	size = ft_strlen((char *)s);
	s_dub = (char *)malloc(size + 1);
	if (!s_dub)
	{
		return (NULL);
	}
	while (n < size)
	{
		s_dub[n] = s[n];
		n++;
	}
	s_dub[n] = '\0';
	return (s_dub);
}
