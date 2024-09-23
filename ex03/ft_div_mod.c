/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphuyal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 10:37:54 by bphuyal           #+#    #+#             */
/*   Updated: 2024/09/23 10:48:54 by bphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int r;
	int m;
	int *div = &r;
	int *mod = &m;
}

int main()
{
	int a = 4;
	int b = 3;
	int *r = a / b;
	int *m = a % b;
	ft_div_mod(a, b, r, m);

}
