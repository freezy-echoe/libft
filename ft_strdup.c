/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkarimov <bkarimov@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 10:54:08 by bkarimov          #+#    #+#             */
/*   Updated: 2025/05/27 13:42:17 by bkarimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

unsigned int	ft_strlen(char *str);

char	*ft_strdup(const char *s)
{
	unsigned int	size;
	unsigned int	n;
	char			*s_dub;

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
