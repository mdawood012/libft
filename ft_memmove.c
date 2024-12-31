/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdawood <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/12 11:56:35 by mdawood           #+#    #+#             */
/*   Updated: 2024/12/12 11:59:34 by mdawood          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*ft_dest;
	const char	*ft_src;
	size_t		i;

	ft_dest = dest;
	ft_src = src;
	i = 0;
	if (ft_src > ft_dest)
	{
		while (i < n)
		{
			ft_dest[i] = ft_src[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			ft_dest[i - 1] = ft_src[i - 1];
			i--;
		}
	}
	return (ft_dest);
}
/*
int main() {
   char buffer[10] = "newstring";  // Remove const to allow modification
   printf("Before memmove dest = %s, src = %s\n", buffer, buffer);
   memmove(buffer+2, buffer, 5);  // Safe operation on writable memory
   printf("After memmove dest = %s, src = %s\n", buffer, buffer);
   return 0;
}
*/
