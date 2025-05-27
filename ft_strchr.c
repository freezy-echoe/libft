/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkarimov <bkarimov@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 13:56:09 by bkarimov          #+#    #+#             */
/*   Updated: 2025/05/26 14:05:42 by bkarimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strchr(const char *s, int c)
{
	int	count;

	count = 0;
	while (s[count])
	{
		if (s[count] == (char)c)
		{
			return ((char *) &s[count]);
		}
		++count;
	}
	if (s[count] == (char)c)
	{
		return ((char *) &s[count]);
	}
	return (0);
}
