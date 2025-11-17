/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 19:04:10 by crigonca          #+#    #+#             */
/*   Updated: 2025/11/13 20:42:42 by crigonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int valor1 = 98;
	int valor2 = 52;
	int division;
	int resto;

	ft_div_mod(valor1, valor2, &division, &resto);
	printf("Si dividimos %d entre %d:\n", valor1, valor2);
    printf("El resultado es: %d\n", division);
    printf("El resto es: %d\n", resto);

	return(0);
}
*/
