/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleitao <gabrielarleitao@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:34:26 by gleitao           #+#    #+#             */
/*   Updated: 2022/07/19 15:35:18 by gleitao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 || str[i] <= 126)
			return (0);
		i++;
	}
	return (1);
}


// int main(void)
// {
// 	char *font;
// 	font = "D";
// 	printf("return is %d\n", ft_str_is_printable(font));
// }