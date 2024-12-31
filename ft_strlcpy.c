/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdawood <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 17:22:54 by mdawood           #+#    #+#             */
/*   Updated: 2024/12/07 16:53:52 by mdawood          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	ft_size_t;
	size_t	i;
	size_t	total;

	ft_size_t = size;
	i = 0;
	total = 0;
	if (ft_size_t > 0)
	{
		while (i < ft_size_t - 1 && src[i] != '\0')
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (src[total] != '\0')
	{
		total++;
	}
	return (total);
}
/*
#include <stdio.h>
int	main()
{
	const char *src = "hello world";
	char dst[30];
	size_t result = ft_strlcpy(dst, src, sizeof(dst));
	printf("%s", dst);
	printf("%zu", result);
}*/
