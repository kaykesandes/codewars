/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sum_arrays.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayke <kayke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 11:49:00 by kayke             #+#    #+#             */
/*   Updated: 2024/03/29 13:10:34 by kayke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int sum_array(const int *values, size_t count) {
    int sum;
    size_t i;

    i = 0;
    sum = 0;
    if (count == 0) {
        return 0;
    }
    while (i < count) {
        sum += values[i];
        i++;
    }
    return sum;
}