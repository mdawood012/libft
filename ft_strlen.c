/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdawood <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 18:22:45 by mdawood           #+#    #+#             */
/*   Updated: 2024/12/16 13:53:38 by mdawood          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char str[] = "hello";
	int length = ft_strlen(str);
	int length2 = strlen(str);
	printf("%d", length);
	printf("%d", length2);
}
*/	
