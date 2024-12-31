/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdawood <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 13:11:45 by mdawood           #+#    #+#             */
/*   Updated: 2024/12/16 13:45:12 by mdawood          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	front_check(const char *temp, const char *set, int i)
{
	int	front;

	front = 0;
	while (temp[i] != '\0')
	{
		if (ft_strchr(set, temp[i]))
			front++;
		else
			break ;
		i++;
	}
	return (front);
}

int	back_check(const char *temp, const char *set, int i)
{
	int	back;

	back = 0;
	while (i > 0)
	{
		if (ft_strchr(set, temp[i - 1]))
			back++;
		else
			break ;
		i--;
	}
	return (back);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	int		front;
	int		total;
	int		len;
	char	*ptr;
	char	*result;

	len = ft_strlen(s1);
	front = front_check(s1, set, 0);
	if (front == len)
		return (ft_strdup(""));
	total = len - front - back_check(s1, set, len);
	ptr = malloc(total + 1);
	if (ptr == NULL)
		return (NULL);
	result = ptr;
	while (total > 0)
	{
		*ptr = s1[front];
		ptr++;
		front++;
		total--;
	}
	*ptr = '\0';
	return (result);
}
/*
int main()
{
    char s1[] = "-/+-+/+/-";       // Input string
    char set[] = "+-/"; 
    char *ptr = ft_strtrim(s1, set);
    printf("%s", ptr);

}*/
