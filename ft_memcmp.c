/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdawood <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 12:52:06 by mdawood           #+#    #+#             */
/*   Updated: 2024/12/12 12:53:45 by mdawood          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ft_s1;
	const unsigned char	*ft_s2;
	size_t				i;

	ft_s1 = s1;
	ft_s2 = s2;
	i = 0;
	if (n == 0)
		return (0);
	while (i < n)
	{
		if (ft_s1[i] != ft_s2[i])
			return (ft_s1[i] - ft_s2[i]);
		i++;
	}
	return (0);
}
