/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkarimov <bkarimov@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 12:57:27 by bkarimov          #+#    #+#             */
/*   Updated: 2025/06/16 11:20:33 by bkarimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	count;

	count = 0;
	while ((s1[count] != '\0' || s2[count] != '\0') && count < n)
	{
		if ((unsigned char)s1[count] > (unsigned char)s2[count])
		{
			return (1);
		}
		else if ((unsigned char)s1[count] < (unsigned char)s2[count])
		{
			return (-1);
		}
		count++;
	}
	return (0);
}
