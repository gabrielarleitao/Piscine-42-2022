/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleitao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 14:27:24 by gleitao           #+#    #+#             */
/*   Updated: 2022/07/31 14:27:29 by gleitao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_aditional(int min, int max)
{
	if (min >= max)
		return (0);
	return (1);
}

int	ft_ultimate_range(int **range, int min, int max)
{
	int		intervalo;
	int		index;
	int		*bufa;

	if (ft_aditional(min, max) == 0)
		return (0);
	intervalo = max - min;
	bufa = (int *)malloc(intervalo * sizeof(int));
	if (!bufa)
	{
		*range = 0;
		return (-1);
	}
	*range = bufa;
	index = 0;
	while (index < intervalo)
	{
		bufa[index] = min + index;
		index++;
	}
	return (intervalo);
}

// int		main(void)
// {
// 	int	min;
// 	int	max;
// 	int	*tab;
// 	int	size;
// 	int	i = 0;

// 	min = 50;
// 	max = 10;
// 	size = ft_ultimate_range(&tab, min, max);
// 	printf("%d\n", size);
// 	while(i < size)
// 	{
// 		printf("%d,", tab[i]);
// 		i++;
// 	}
// }