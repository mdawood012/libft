/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdawood <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 13:56:41 by mdawood           #+#    #+#             */
/*   Updated: 2024/12/19 15:14:48 by mdawood          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	count_words(const char *s, char c)
{
	int	count;
	int	flag;

	count = 0;
	flag = 0;
	while (*s != '\0')
	{
		if (*s == c)
			flag = 0;
		if (*s != c && !flag)
		{
			flag = 1;
			count++;
		}
		s++;
	}
	return (count);
}

int	count_len(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			break ;
		i++;
	}
	return (i);
}

void	ft_free(char **ptr, int i)
{
	while (i > 0)
	{
		free(ptr[i - 1]);
		i--;
	}
	free(ptr);
}

char	**temp(char const *s, char c, char **ptr)
{
	int	i;
	int	word_len;

	i = 0;
	while (*s != '\0')
	{
		word_len = count_len(s, c);
		while (*s == c)
			s++;
		if (word_len > 0)
		{
			ptr[i] = malloc(word_len + 1);
			if (ptr[i] == NULL)
			{
				ft_free(ptr, i);
				return (NULL);
			}
			ft_strlcpy(ptr[i], s, word_len + 1);
			s += word_len;
			i++;
		}
	}
	ptr[i] = NULL;
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		word_count;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	ptr = malloc((word_count + 1) * sizeof(char *));
	if (ptr == NULL)
		return (NULL);
	ptr = temp(s, c, ptr);
	return (ptr);
}
