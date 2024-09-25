/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bphuyal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 20:28:05 by bphuyal           #+#    #+#             */
/*   Updated: 2024/09/25 10:58:23 by bphuyal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_putstr(char *str)
{
        int i = 0;

        while(str[i] != '\0')
        {
                i++;
        }
	return (i);
}

int     main()
{
        char str[] = "good";
        int i = ft_putstr(str);
	printf("%d", i);
}
