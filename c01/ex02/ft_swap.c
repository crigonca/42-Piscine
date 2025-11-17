/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:00:14 by crigonca          #+#    #+#             */
/*   Updated: 2025/11/13 20:41:37 by crigonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int n1;
	n1 = 10;
	int n2;
	n2 = 20;

	printf("Antes: %d, %d\n", n1, n2);
	ft_swap(&n1, &n2);
	printf("Despues: %d, %d\n", n1, n2);
	return (0);
}
*/
