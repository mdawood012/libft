/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdawood <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 12:32:49 by mdawood           #+#    #+#             */
/*   Updated: 2024/12/07 16:54:16 by mdawood          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
	{
		c -= 32;
	}
	return (c);
}
/*
#include <ctype.h>
#include <stdio.h>

int	main()
{
	char c = '/';
	int result = toupper(c);
	int result1 = ft_toupper(c);
	printf("%c", result);
	printf("%c", result1);
	return 0;
}*/
