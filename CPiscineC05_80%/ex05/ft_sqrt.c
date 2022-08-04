/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleitao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 01:02:29 by gleitao           #+#    #+#             */
/*   Updated: 2022/07/30 17:25:56 by gleitao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	first;
	int	last;
	int	mid;

	first = 0;
	last = 46340;
	while (first <= last)
	{
		mid = (first + last) / 2;
		if (mid * mid < nb)
			first = mid + 1;
		else if (mid * mid == nb)
			return (mid);
		else
			last = mid - 1;
	}
	return (0);
}

// int	main()
// {
// 	printf("%d", ft_sqrt(2147302921));
// }
