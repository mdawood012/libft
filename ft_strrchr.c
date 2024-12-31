/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdawood <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 16:18:39 by mdawood           #+#    #+#             */
/*   Updated: 2024/12/07 16:54:56 by mdawood          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	while (len >= 0)
	{
		if (s[len] == (char)c)
		{
			return ((char *)&s[len]);
		}
		len--;
	}
	if (c == '\0')
	{
		return ((char *)&s[len]);
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
int main()
{
    const char *s = "hello world";
    int c = 'l';

    char *result = ft_strrchr(s, c);
    char *result1 = strrchr(s, c);
    if (result != NULL)
	{
		printf("%s\n", result);
	}
	else
	{
		printf("Character not in string %s", result);
	}

    if (result1 != NULL)
	{
		printf("%s", result1);
	}
	else
	{
		printf("Character not in string %s", result1);
	}
	return 0;
}*/
