/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gleitao <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 11:32:46 by gleitao           #+#    #+#             */
/*   Updated: 2022/07/26 11:32:52 by gleitao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && (s1[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// he  strcmp()  function compares the two strings s1 and s2.  
// //The locale is  not taken into account (for  a  locale-aware
// comparison,  see  str‐coll(3)).   
// It  returns an integer less than, equal to, or greater than
//  zero if s1 is found, respectively, to be less than,  to  match,  
//  or  be greater than s2.
