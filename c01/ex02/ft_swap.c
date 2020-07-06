/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/06 18:46:57 by marvin            #+#    #+#             */
/*   Updated: 2020/07/06 18:46:57 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b) //포인터 a,b를 매개변수로 받겠다(선언)
{
	int temp;

	temp = *a; //temp에 포인터a의 역참조값(num) 넣음
	*a = *b; //포인터a의 역참조값에 포인터b의 역참조값(num2)넣음
	*b = temp;//포인터b의 역참조자리에 temp에 저장됐던 포인터a의 역참조값(&num) 넣음

}
/////
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void printNum(int num)
{
	ft_putchar(num + '0');
}
/////
void	main(void)
{
	int num = 1;
	int num2 = 2;
	int *a; //a를 포인터변수로 선언
	int *b; //b를 포인터변수로 선언

	a = &num;
	b = &num2;
	printNum(num);
	ft_swap(a, b);
	printNum(num);
}
