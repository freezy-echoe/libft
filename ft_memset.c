/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkarimov <bkarimov@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 11:23:36 by bkarimov          #+#    #+#             */
/*   Updated: 2025/05/21 11:37:39 by bkarimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	*ft_memset(void *dest, int ch, unsigned int count)
{
	char	*str;
	int		c;

	str = dest;
	c = 0;
	while (c < count)
	{
		str[c] = ch;
		c++;
	}
	return (str);
}
