/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkarimov <bkarimov@student.42prague.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 11:05:50 by bkarimov          #+#    #+#             */
/*   Updated: 2025/05/27 11:36:45 by bkarimov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_atoi(const char *nptr)
{
	int	count;
	int	sign;
	int	num;

	count = 0;
	sign = 1;
	num = 0;
	while ((nptr[count] == 32) || (nptr[count] >= 9 && nptr[count] <= 13))
	{
		count++;
	}
	if ((nptr[count] == '+') || (nptr[count] == '-'))
	{
		if (nptr[count] == '-')
		{
			sign = -1;
		}
		count++;
	}
	while (nptr[count] != '\0' && nptr[count] >= '0' && nptr[count] <= '9')
	{
		num = num * 10 + (nptr[count] - '0');
		count++;
	}
	return (num * sign);
}
