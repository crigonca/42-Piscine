/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: crigonca <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:44:14 by crigonca          #+#    #+#             */
/*   Updated: 2025/11/17 12:22:42 by crigonca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	char	*pp;

	pp = str;
	while (*pp)
	{
		pp++;
	}
	return (pp - str);
}
/*
int	main(void)
{
	char txt[]= "Resultados";
	int	longitud;

	longitud = ft_strlen(txt);
	printf("longitud  = %d\n", longitud);
	return (0);
}
*/
