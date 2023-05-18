/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 15:54:10 by lumedeir          #+#    #+#             */
/*   Updated: 2023/04/28 11:59:57 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
		f(tab[i++]);
}

// #include <stdio.h>

// void ft_putnbr(int nbr)
// {
//     printf("%d\n", nbr);
// }
// int main(void)
// {
//     int tab[4] = {3, 5, 9, 10};
//     ft_foreach(tab, 4, &ft_putnbr);
// }