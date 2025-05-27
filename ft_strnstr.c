/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkarimov <bkarimov@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 13:08:40 by bkarimov          #+#    #+#             */
/*   Updated: 2025/05/26 13:47:51 by bkarimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strnstr(const char *big, const char *little, unsigned int len)
{
	unsigned int	count;
	unsigned int	i;

	count = 0;
	if (little[0] == '\0')
	{
		return ((char *)big);
	}
	while (big[count] != '\0' && count < len)
	{
		if (big[count] == little[0])
		{
			i = 1;
			while (little[i] && big[count + i] == little[i] && count + i < len)
			{
				i++;
			}
			if (little[i] == '\0')
			{
				return ((char *) &big[count]);
			}
		}
		++count;
	}
	return (0);
}
