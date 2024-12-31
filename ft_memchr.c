/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdawood <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 18:02:22 by mdawood           #+#    #+#             */
/*   Updated: 2024/12/07 16:55:29 by mdawood          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char		*word;
	unsigned char			uc;
	size_t					i;

	word = s;
	uc = c;
	i = 0;
	while (i < n)
	{
		if (*word == uc)
		{
			return ((void *)word);
		}
		word++;
		i++;
	}
	return (NULL);
}
