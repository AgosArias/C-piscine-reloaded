/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarias-d <aarias-d@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/12 23:16:04 by aarias-d          #+#    #+#             */
/*   Updated: 2025/04/15 19:56:07 by aarias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *c)
{
	while (*c)
		ft_putchar(*c++);
	ft_putchar('\n');
}

void	ft_swap(char **a, char **b)
{
	char	*x;

	x = *a;
	*a = *b;
	*b = x;
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	if (s2[i] == '\0')
		return (0);
	else if (s1[i] < s2[i])
		return (-1);
	else
		return (1);
}

void	ft_quicksort(char **arg, int init, int final)
{
	int	i;
	int	temp;

	temp = -1;	
	i = init;
	if (init == final) return ;
	while (i < final)
	{
		if (ft_strcmp(arg[final], arg[i]) == -1 && temp == -1)
			temp = i;
		if (ft_strcmp(arg[final], arg[i]) == 1 && temp != -1)
		{
			ft_swap(&arg[temp], &arg[i]);
			temp = -1;
			i = temp;
		}
		i++;
	}
	if (temp != -1)
	{
		ft_swap(&arg[temp], &arg[final]);
		ft_quicksort(arg, init, temp - i);
		ft_quicksort(arg, temp + 1, final);
	}
	else
		ft_quicksort(arg, init, final - 1);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc < 2)
		return (0);
	ft_quicksort(argv, 1, argc - 1);
	i = 1;
	while (i < argc)
		ft_putstr(argv[i++]);
	return (0);
}
