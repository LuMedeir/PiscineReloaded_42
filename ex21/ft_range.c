/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lumedeir < lumedeir@student.42sp.org.br    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 14:57:08 by lumedeir          #+#    #+#             */
/*   Updated: 2023/04/28 11:54:38 by lumedeir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	count;
	int	*numbers;
	int	dest;

	dest = max - min;
	count = 0;
	numbers = malloc((max - min) * sizeof(int));
	if (min >= max)
		return (0);
	if (min == 0 && max == 0)
		return (0);
	while (count != dest)
	{
		numbers[count] = min;
		count++;
		min++;
	}
	return (numbers);
}

// #include <stdio.h>
// int    main(void)
// {
//     int *arr;
//     int count2;
//     count2 = 0;
//     arr = ft_range(-2, 10);
//     while (count2 < 12)
//     {
//         printf("%d", arr[count2]);
//         count2++;
//     }
// }