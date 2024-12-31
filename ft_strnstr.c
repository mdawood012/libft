/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdawood <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 13:13:57 by mdawood           #+#    #+#             */
/*   Updated: 2024/12/07 16:56:08 by mdawood          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	len_little;
	size_t	i;
	size_t	j;

	len_little = ft_strlen(little);
	i = 0;
	j = 0;
	if (len_little == 0)
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		if (i + len_little > len)
		{
			break ;
		}
		while (j < len_little && big[i + j] == little[j])
		{
			j++;
		}
		if (j == len_little)
			return ((char *)(big + i));
		j = 0;
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	char *str;
// 	if (!(str = ft_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30)))
// 		printf("NULL");
// 	else
// 		printf("%s", str);
// }
