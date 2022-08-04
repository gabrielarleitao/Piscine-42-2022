/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleitao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 14:26:52 by gleitao           #+#    #+#             */
/*   Updated: 2022/07/31 14:26:54 by gleitao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • If min value is greater or equal to max’s value,
//a null pointer should be returned.

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int		range;
	int		index;
	int		*buffer;

	if (min >= max)
		return (NULL);
	range = max - min;
	buffer = (int *)malloc(range * sizeof(int));
	if (!buffer)
		return (NULL);
	index = 0;
	while (index < range)
	{
		buffer[index] = min + index;
		index++;
	}
	return (buffer);
}

int		main(void)
{
	int	min;
	int	max;
	int	*tab;
	int	i = 0;
	int	size;

	min = 8;
	max = 15;
	size = max - min;
	tab = ft_range(min, max);
	while(i < size)
	{
		printf("%d, ", tab[i]);
		i++;
	}
}