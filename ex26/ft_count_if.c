/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 13:19:05 by lumedeir          #+#    #+#             */
/*   Updated: 2023/04/28 14:39:09 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_count_if(char **tab, int (*f)(char *))
{
	int	returns;
	int	count;

	count = 0;
	returns = 0;
	while (tab[count] != 0)
	{
		if (f(tab[count]) == 1)
			returns++;
		count++;
	}
	return (returns);
}
