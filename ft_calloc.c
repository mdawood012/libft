/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdawood <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/07 14:09:57 by mdawood           #+#    #+#             */
/*   Updated: 2024/12/19 15:16:54 by mdawood          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (size && nmemb > ((size_t) - 1 / size))
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (nmemb * size));
	return (ptr);
}
// int main(void)
// {
// 	char *ptr = calloc(-5, 0);
//     printf("Values of allocated_with_calloc: ");
//     for (size_t i = 0; i < 5; ++i) 
// 	{
//         printf("%d ", ptr[i]);
//     }
// }
