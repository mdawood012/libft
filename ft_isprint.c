/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdawood <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 16:50:23 by mdawood           #+#    #+#             */
/*   Updated: 2024/12/07 16:52:21 by mdawood          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}
/*
int	main()
{
	char c;
	c = 'x';
	printf("normal isprint %d\n", isprint(c));
	printf("my isprint %d\n", ft_isprint(c));

	c = ' ';
	printf("normal isprint %d\n", isprint(c));
        printf("my isprint %d\n", ft_isprint(c));

	c = '\t';
        printf("normal isprint %d\n", isprint(c));
        printf("my isprint %d\n", ft_isprint(c));
}*/	
