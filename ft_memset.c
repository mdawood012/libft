/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdawood <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 18:29:24 by mdawood           #+#    #+#             */
/*   Updated: 2024/12/12 12:59:16 by mdawood          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*word;

	word = s;
	while (n > 0)
	{
		*word = c;
		n--;
		word++;
	}
	return (s);
}
/*
#include <string.h>
#include <stdio.h>

int	main(){
	int num[5] = {0, 3, 4, 5, 6};
	for (int i = 0; i < 5; i++) {
		printf("%d", num[i]);
	}

	ft_memset(num, 0, 3);

	for (int i = 0; i < 5; i++) {
		printf("%d", num[i]);
	}

}*/
