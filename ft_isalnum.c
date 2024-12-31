/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdawood <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 16:18:53 by mdawood           #+#    #+#             */
/*   Updated: 2024/12/16 17:17:00 by mdawood          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>
int	main()
{
	char c;
	c = 'A';
	printf("actual function %d\n", isalnum(c));
	printf("my function %d\n", ft_isalnum(c));
	
	c = 'a';
	printf("actual function %d\n", isalnum(c));
	printf("my function %d\n", ft_isalnum(c));

	c = '0';
	printf("actual function %d\n", isalnum(c));
	printf("my function %d\n", ft_isalnum(c));

	c = '/';
	printf("actual function %d\n", isalnum(c));
	printf("my function %d\n", ft_isalnum(c));
}*/
