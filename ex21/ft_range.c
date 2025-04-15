/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarias-d <aarias-d@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 04:05:18 by aarias-d          #+#    #+#             */
/*   Updated: 2025/04/15 18:55:09 by aarias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	count;

	count = 0;
	if (min >= max)
	{
		arr = NULL;
		return (arr);
	}
	arr = (int *)malloc((max - min) * (sizeof(int)));
	if (arr == NULL)
		return (NULL);
	while (min != max)
	{
		arr[count] = min;
		count++;
		min++;
	}
	return (arr);
}
