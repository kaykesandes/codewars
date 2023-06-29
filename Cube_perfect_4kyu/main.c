/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayke <kayke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 18:30:00 by kayke             #+#    #+#             */
/*   Updated: 2023/06/26 00:24:04 by kayke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <math.h>
#include <stdio.h>

int sum_of_squares(int n) {
    while (n % 4 == 0)
        n /= 4;

    if (n % 8 == 7)
        return 4;

    for (int a = 0; a * a <= n; a++) {
        int b = sqrt(n - a * a);
        if (a * a + b * b == n) {
            if (a > 0 && b > 0)
                return 2;
            else
                return 1;
        }
    }

    return 3;
}

/*
O menor número de quadrados perfeitos que soma 17 é: 2
O menor número de quadrados perfeitos que soma 15 é: 4
O menor número de quadrados perfeitos que soma 16 é: 1
*/