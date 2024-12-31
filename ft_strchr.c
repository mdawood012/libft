/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdawood <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/04 12:51:03 by mdawood           #+#    #+#             */
/*   Updated: 2024/12/17 13:11:51 by mdawood          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	ui;
	int				i;

	ui = c;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ui)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (ui == '\0')
	{
		return ((char *)&s[i]);
	}
	return (0);
}
