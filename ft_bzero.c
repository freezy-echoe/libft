/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkarimov <bkarimov@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 11:50:10 by bkarimov          #+#    #+#             */
/*   Updated: 2025/05/21 13:15:07 by bkarimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_bzero(void *s, unsigned int n)
{
	unsigned char	*str;
	int				c;

	str = (unsigned char *)s;
	c = 0;
	while (c < n)
	{
		str[c] = '\0';
		c++;
	}
}
