/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkarimov <bkarimov@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 13:57:21 by bkarimov          #+#    #+#             */
/*   Updated: 2025/06/18 10:15:35 by bkarimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, size_t start, size_t len)
{
	char	*sub;
	size_t	sub_len;

	if (!s)
		return (NULL);
	if (start >= (unsigned int)ft_strlen(s))
		return (ft_strdup(""));
	sub_len = 0;
	sub = malloc(len + 1);
	if (!sub)
	{
		return (NULL);
	}
	while (sub_len < len)
	{
		sub[sub_len] = s[start];
		sub_len++;
		start++;
	}
	sub[sub_len] = '\0';
	return (sub);
}
