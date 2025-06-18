/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkarimov <bkarimov@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 09:27:42 by bkarimov          #+#    #+#             */
/*   Updated: 2025/06/16 11:00:38 by bkarimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(size_t, char))
{
	size_t	i;
	size_t	len_s;
	char	*new_s;

	if (!s || !f)
		return (NULL);
	i = 0;
	len_s = ft_strlen(s);
	new_s = malloc(len_s + 1);
	if (!new_s)
		return (NULL);
	while (s[i])
	{
		new_s[i] = (*f)(i, s[i]);
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
