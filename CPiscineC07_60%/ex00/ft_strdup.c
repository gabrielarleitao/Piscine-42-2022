/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleitao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 14:26:12 by gleitao           #+#    #+#             */
/*   Updated: 2022/07/31 14:26:14 by gleitao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int	ft_str_length(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

char	*ft_strdup(char *src)
{
	int		index;
	char	*dest;
	char	*d;

	index = 0;
	d = ((dest = (char *)malloc(ft_str_length(src) * sizeof(char) + 1)));
	if (!d)
	{
		return (0);
	}
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

// int		main(void)
// {
// 	char	*str;
// 	char	*allocated;

// 	str = "ola avaliador, sou a Gabi";

// 	printf("original  : base  : $%s$ @ %p\n", str, str);
// 	allocated = strdup(str);
// 	printf("copied    : alloc : $%s$ @ %p\n", allocated, allocated);
// 	allocated = ft_strdup(str);
// 	printf("ft_copied : alloc : $%s$ @ %p\n", allocated, allocated);
// }