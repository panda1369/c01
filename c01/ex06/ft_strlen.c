/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 23:40:38 by marvin            #+#    #+#             */
/*   Updated: 2020/07/06 23:40:38 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	printf("%d\n", strlen(str));
}

int main ()
{
	char a[6] = "hello";
	ft_strlen(a);
}
