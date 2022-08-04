/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleitao <gabrielarleitao@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:34:26 by gleitao           #+#    #+#             */
/*   Updated: 2022/07/19 15:35:18 by gleitao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	temp = 0;
	while (i < (size / 2))
	{
		temp = tab [i];
		tab [i] = tab [size - 1 - i];
		tab [size - 1 - i] = temp;
		i++;
	}
}

// int main()
// {
// 	int tab[7] = {2, 5, 6, 2, 8, 9, 1};

// 	ft_rev_int_tab(&tab[0], 7);

// 	for (int j = 0; j < 7; j++)
// 	{
// 		printf("%d", tab[j]);
// 	}
// }