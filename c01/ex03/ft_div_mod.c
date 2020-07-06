/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 22:39:45 by marvin            #+#    #+#             */
/*   Updated: 2020/07/06 22:39:45 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void 	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

void ft_putchar(char c)
{
	write(1, &c, 1);
}
void printNum(int num)
{
	ft_putchar(num + '0');
}

int	main()
{
	int num;
	int *div;
	int *mod;
	div = &num;

	ft_div_mod(10, 3, div, mod);

	printNum(*div);
	printNum(*mod);

	return 0;
}
