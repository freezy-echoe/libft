/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkarimov <bkarimov@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 12:48:00 by bkarimov          #+#    #+#             */
/*   Updated: 2025/06/18 10:16:03 by bkarimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_word_count(const char *s, char c)
{
	size_t	count;

	if (!s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static void	ft_free_all(char **lst, int n)
{
	while (n--)
		free(lst[n]);
	free(lst);
}

char	**ft_split(char const *s, char c)
{
	char		**lst;
	size_t		len;
	size_t		i;

	i = 0;
	lst = malloc((ft_word_count(s, c) + 1) * sizeof(char *));
	if (!s || !lst)
		return (NULL);
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			len = 0;
			while (s[len] && s[len] != c)
				len++;
			lst[i] = ft_substr(s, 0, len);
			if (!lst[i++])
				return (ft_free_all(lst, i), NULL);
			s += len;
		}
	}
	lst[i] = NULL;
	return (lst);
}
