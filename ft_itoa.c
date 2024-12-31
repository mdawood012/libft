/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdawood <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 16:56:22 by mdawood           #+#    #+#             */
/*   Updated: 2024/12/16 17:52:09 by mdawood          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	count_digits(int n)
{
	int	count;

	count = 0;
	if (n == 0)
	{
		return (1);
	}
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

char	*check(int n)
{
	int		i;
	char	*ptr;

	i = 0;
	if (n == -2147483648)
	{
		ptr = malloc(12);
		if (ptr == NULL)
			return (NULL);
		while (i < 11)
		{
			ptr[i] = "-2147483648"[i];
			i++;
		}
		ptr[i] = '\0';
		return (ptr);
	}
	return (NULL);
}

char	*ft_itoa(int n)
{
	int		negative;
	int		i;
	char	*ptr;

	if (n == -2147483648)
		return (check(n));
	negative = n < 0;
	if (negative)
		n = -n;
	ptr = malloc(count_digits(n)+ negative + 1);
	if (ptr == NULL)
		return (NULL);
	ptr[count_digits(n)+ negative] = '\0';
	i = count_digits(n) + negative - 1;
	if (n == 0)
		ptr[0] = '0';
	while (n > 0)
	{
		ptr[i--] = (n % 10) + '0';
		n /= 10;
	}
	if (negative)
		ptr[i] = '-';
	return (ptr);
}
