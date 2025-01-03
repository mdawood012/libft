/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdawood <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 14:17:34 by mdawood           #+#    #+#             */
/*   Updated: 2024/12/19 15:13:45 by mdawood          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*ptr;
	unsigned int	i;
	unsigned int	s_len;

	s_len = ft_strlen(s);
	if (s_len <= start)
		len = 0;
	if (len >= s_len - start)
		len = s_len - start;
	ptr = malloc(len + 1);
	if (!ptr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		ptr[i] = s[start + i];
		i ++;
	}
	ptr[i] = '\0';
	return (ptr);
}
// }
// #include <stdio.h>
// int	main(void)
// {
// 	char *ptr = ft_substr("trip", 100, 1);
// 	printf("%c", ptr[1]);
// 	return (0);
// }
