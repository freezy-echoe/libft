/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkarimov <bkarimov@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 11:32:19 by bkarimov          #+#    #+#             */
/*   Updated: 2025/05/26 12:22:00 by bkarimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlcpy(char *dest, const char *src, unsigned int size)
{
	unsigned int	size_s;
	unsigned int	count;

	size_s = 0;
	count = 0;
	if (src[size_s] != '\0')
	{
		size_s++;
	}
	while (count < size - 1 && src[count])
	{
		dest[count] = src[count];
		count++;
	}
	dest[count] = '\0';
	return (size_s);
}
