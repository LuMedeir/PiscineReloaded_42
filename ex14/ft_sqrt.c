/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 10:49:06 by lumedeir          #+#    #+#             */
/*   Updated: 2023/04/28 11:30:02 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	mult;
	int	total;

	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	mult = 0;
	total = 0;
	while (total <= nb)
	{
		mult++;
		total = mult * mult;
	}
	mult--;
	total = mult * mult;
	if (total == nb)
		return (mult);
	return (0);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("expected:5          result: %i\n", ft_sqrt(25));
// }