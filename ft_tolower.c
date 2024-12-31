/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdawood <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 12:41:02 by mdawood           #+#    #+#             */
/*   Updated: 2024/12/07 16:54:26 by mdawood          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
	{
		c += 32;
	}
	return (c);
}
/*
#include <ctype.h>
#include <stdio.h>

int     main()
{
        char c = '/';
	printf("%c\n", c);
        //int result = tolower(c);
        int result1 = ft_tolower(c);
        //printf("now %c", result);
        printf("now %c", result1);
        return 0;
}
*/
