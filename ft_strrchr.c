/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkarimov <bkarimov@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 14:06:15 by bkarimov          #+#    #+#             */
/*   Updated: 2025/05/26 14:13:09 by bkarimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	count;

	count = ft_strlen((char *)s);
	while (count >= 0)
	{
		if (s[count] == (char)c)
		{
			return ((char *) &s[count]);
		}
		count--;
	}
	return (0);
}
