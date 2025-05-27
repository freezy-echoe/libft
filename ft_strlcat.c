/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkarimov <bkarimov@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 11:56:34 by bkarimov          #+#    #+#             */
/*   Updated: 2025/05/26 12:24:43 by bkarimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
unsigned int	ft_strlen(char *ch);

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	d_len;
	unsigned int	s_len;
	unsigned int	d_len2;
	unsigned int	count;

	d_len = ft_strlen(dest);
	s_len = ft_strlen((char *)src);
	count = 0;
	d_len2 = d_len;
	if (size <= d_len)
	{
		return (size + s_len);
	}
	while (src[count] && d_len < size - 1)
	{
		dest[d_len] = src[count];
		count++;
		d_len++;
	}
	dest[d_len] = '\0';
	return (d_len2 + s_len);
}
