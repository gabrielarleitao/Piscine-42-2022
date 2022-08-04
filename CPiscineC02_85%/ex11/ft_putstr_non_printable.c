/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleitao <gabrielarleitao@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:34:26 by gleitao           #+#    #+#             */
/*   Updated: 2022/07/19 15:35:18 by gleitao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	k;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
		{
			ft_putchar('\\');
			if (str[i] < 0)


			else
			{
				k = str[i];
				ft_putchar("0123456789abcdef"[k / 16]);
				ft_putchar("0123456789abcdef"[k % 16]);
				i++;
				continue ;
			}
		}
		ft_putchar(str[i]);
		i++;
	}
}

int main(void)
{
	char font[] = "Coucou\ttu vas bien ?";
	char *str;
	printf("input: %s\n", font);
	ft_putchar('\n');
	ft_putstr_non_printable(font);
}

//https://www.programiz.com/c-programming/c-break-continue-statement
