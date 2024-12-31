/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdawood <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 14:49:09 by mdawood           #+#    #+#             */
/*   Updated: 2024/12/11 14:56:46 by mdawood          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total_len;
	char	*temp;
	int		i;

	total_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	temp = malloc(total_len);
	if (temp == NULL)
		return (NULL);
	i = 0;
	ft_strlcpy(temp, s1, total_len);
	ft_strlcat(temp, s2, total_len);
	return (temp);
}
