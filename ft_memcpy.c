/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdawood <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 13:03:58 by mdawood           #+#    #+#             */
/*   Updated: 2024/12/07 16:53:17 by mdawood          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*ft_dest;
	const char	*ft_src;
	size_t		i;

	i = 0;
	ft_dest = dest;
	ft_src = src;
	while (i < n)
	{
		ft_dest[i] = ft_src[i];
		i++;
	}
	return (dest);
}
/*
//#include <stdio.h>
//#include <string.h>

int	main()
{
	//char src[30] = "hello world";
	//char dest[30];

	int src[] = {1, 3, 4, 5, 6};
	int dest[5];

	ft_memcpy(dest, src, sizeof(src));

	for (int i = 0; i < 5; i++){
		printf("%d", src[i]);
	}

	for (int i = 0; i < 3; i++){
		printf("%d", dest[i]);
	}


	//printf("%s\n", src);
	//printf("%s\n", dest);

	//memcpy(dest, src, 3);
        //printf("%s\n", src);
        //printf("%s\n", dest);

	return 0;
}*/
