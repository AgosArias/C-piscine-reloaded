/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarias-d <aarias-d@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 20:20:53 by aarias-d          #+#    #+#             */
/*   Updated: 2025/04/10 21:14:28 by aarias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putstr(char *str)
{
    	while(*str == '\0')
        	write(1,str++,1);
	write(1,'\0',1);
}

int	main(void)
{
	ft_putstr("Hola");
	return (0);
}
