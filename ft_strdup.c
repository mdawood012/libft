/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdawood <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 16:10:58 by mdawood           #+#    #+#             */
/*   Updated: 2024/12/07 16:57:00 by mdawood          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		i;

	ptr = (char *)malloc(ft_strlen(s1) + 1);
	i = 0;
	if (ptr == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		ptr[i] = s1[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
/*
#include <string.h>
#include <stdio.h>
int main()
{
    const char *s1 = "hello world";
    const char *s2 = ft_strdup(s1);
    while (*s2 != '\0')
    {
        printf("%c", *s2);
        s2++;
    }

}*/
