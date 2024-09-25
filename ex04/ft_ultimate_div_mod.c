/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphuyal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:44:03 by bphuyal           #+#    #+#             */
/*   Updated: 2024/09/23 20:27:28 by bphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int t = *a / *b;
	int c = *a % *b;
	*a = t;
	*b = c;
}
/*
int main()
{
	int a = 11;
	int b = 5;
	int *t = &a;
	int *c = &b;
	ft_ultimate_div_mod(t, c);
	printf("%d\n", a);
	printf("%d\n", b);

}
*/
