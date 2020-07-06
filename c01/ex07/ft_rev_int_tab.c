/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 00:02:28 by marvin            #+#    #+#             */
/*   Updated: 2020/07/07 00:02:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void 	ft_rev_int_tab(int *tab, int size)
{	int i;
	int temp;

	i = 0;
	while(i<=size/2)
	{

		temp = tab[i];
		tab[i] = tab[size-i];
		tab[size-i] = temp;
		i++;
	}
}

int	main()
{
	int a[6] = {0, 1, 2, 3, 4};
	for(int i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
		printf("/n");
	ft_rev_int_tab(a, 5);
	for(int i=0;i<5;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
