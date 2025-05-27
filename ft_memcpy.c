/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkarimov <bkarimov@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 12:11:46 by bkarimov          #+#    #+#             */
/*   Updated: 2025/05/21 12:42:10 by bkarimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	*ft_memcpy(void *dest, const void *src, unsigned int count)
{
	unsigned char	*dest2;
	unsigned char	*src2;
	int				c;

	dest2 = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	c = 0;
	while (c < count)
	{
		dest2[c] = src2[c];
		c++;
	}
	return (dest2);
}
