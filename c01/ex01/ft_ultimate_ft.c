/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 17:42:43 by marvin            #+#    #+#             */
/*   Updated: 2020/07/06 17:42:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr =42;
}

void	main(void)
{
	int num;
	int *point1;
	int **point2;
	int ***point3;
	int ****point4;
	int *****point5;
	int ******point6;
	int *******point7;
	int ********point8;
	int *********point9;
	point1 = &num;
	point2 = &point1;
	point3 = &point2;
	point4 = &point3;
	point5 = &point4;
	point6 = &point5;
	point7 = &point6;
	point8 = &point7;
	point9 = &point8;
	ft_ultimate_ft(point9);
	printf("%d", *********point9);
}
