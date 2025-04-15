/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aarias-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/13 05:41:04 by aarias-d          #+#    #+#             */
/*   Updated: 2025/04/13 06:02:42 by aarias-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int *mayor(char* c)
{
	if (c == 'a')
		return 1;
	return 0;
}
int ft_count_if(char **tab, int (*f)(char*))
{
	int i;

	i = 0;
	while(*tab)
	{
		if (f(*tab++) == 1)
			i++; 
	}		

}

int main(int argc, char **argv)
{
	ft_count_if(argv, mayor);
	return(0);
}
