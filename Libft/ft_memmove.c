/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ memmove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmorneau <jmorneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 16:08:55 by jmorneau          #+#    #+#             */
/*   Updated: 2022/03/31 16:13:57 by jmorneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void *ft_memmove(void *str1, const void *str2, unsigned long n)
{
    int i;
    char *src;
    char *cpy;

    i = 0;
    cpy = str1;
    src = (char *)str2;
	while (src && i < n)
    {
        *cpy++ = *src++;
        i++;
    }
    return (str1);
}