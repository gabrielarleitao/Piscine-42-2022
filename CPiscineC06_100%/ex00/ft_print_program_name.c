/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleitao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 17:46:58 by gleitao           #+#    #+#             */
/*   Updated: 2022/07/30 17:47:02 by gleitao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	caracter;

	caracter = 0;
	if (argc > 0)
	{
		while (argv[0][caracter] != '\0')
		{
			write (1, &argv[0][caracter], 1);
			caracter++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
