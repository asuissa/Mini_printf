/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_int.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asuissa <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/13 19:11:19 by asuissa           #+#    #+#             */
/*   Updated: 2018/01/31 19:54:30 by asuissa          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi_int(const char *str)
{
    long long out;

    out = 0;
    if (!str)
        return (0);
    if (ft_strlen((char *)str) > 11)
        return (0);
    else if ((out = ft_atoi(str)) > INT_MAX || out < INT_MIN)
        return (0);
    return ((int)out);
}