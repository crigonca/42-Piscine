/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 19:38:43 by crigonca          #+#    #+#             */
/*   Updated: 2025/11/13 20:44:00 by crigonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	n1;

	n1 = *a;
	*a = *a / *b;
	*b = n1 % *b;
}
/*
int main(void)
{
	int valor1 = 98;
	int valor2 = 52;

	ft_ultimate_div_mod(&valor1, &valor2);
	printf("El resultado es: %d\n", valor1);
	printf("El resto es: %d\n", valor2);
	return(0);
}
*/
