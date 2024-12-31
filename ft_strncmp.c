/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdawood <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 17:31:44 by mdawood           #+#    #+#             */
/*   Updated: 2024/12/07 16:55:12 by mdawood          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
		n--;
	}
	return (0);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
    const char *s1 = "hello world";
    const char *s2 = "hello";
    const char *s3 = "qorld";

    int result = ft_strncmp(s1, s2, 5);
    int result1 = strncmp(s1, s2, 5);
    printf("%d\n", result);
    printf("%d\n", result1);

    result = ft_strncmp(s1, s3, 5);
    result1 = strncmp(s1, s3, 5);
    printf("%d\n", result);
    printf("%d\n", result1);

    result = ft_strncmp(s3, s1, 5);
    result1 = strncmp(s3, s1, 5);
    printf("%d\n", result);
    printf("%d\n", result1);
}*/
