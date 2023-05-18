/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 17:12:05 by lumedeir          #+#    #+#             */
/*   Updated: 2023/04/28 12:35:55 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	f;

	f = nb;
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	while (f > 1)
	{
		nb = nb * (f - 1);
		f--;
	}
	return (nb);
}
