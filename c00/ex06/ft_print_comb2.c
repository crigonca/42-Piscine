/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 15:03:49 by crigonca          #+#    #+#             */
/*   Updated: 2025/11/13 15:28:51 by crigonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void ft_print_comb2(void)
{
	int n1;

	n1 = 0;
	while (n1 <= 99)
	{
		int n2;

		n2 = 99;
		while (n2 >= 0)
		{
			write(1, &n1, 2);
			write(1, &n2, 2);
			n2++;
		}
		n1++;
	}
}

int main(void)
{
	ft_print_comb2();
	return(0);
}
