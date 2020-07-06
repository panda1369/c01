/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/07 00:48:12 by marvin            #+#    #+#             */
/*   Updated: 2020/07/07 00:48:12 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{	int i;
	int j;
	int temp;

	i = 0;
	j = 0;
	while(j < size-1)
	{
		while(i < size)
		{
			if(tab[i-1]>tab[i])
			{
				temp = tab[i-1];
				tab[i-1] = tab[i];
				tab[i] = temp;
			}
			i++;
		}
		i=0;
		j++;
	}
}

int	main()
{
	int a[10] = {5, 1, 6, 9, 4, 2, 6, 15, 8};
	ft_sort_int_tab(a, 9);
	for(int i=0;i<9;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
