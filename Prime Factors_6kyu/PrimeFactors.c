/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Prime_factors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayke <kayke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 14:34:58 by kayke             #+#    #+#             */
/*   Updated: 2023/06/25 01:11:45 by kayke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int prime_factors(unsigned long long n, unsigned long long factors[]) {
    int index = 0;
    int unsigned long long i = 3;
    while (n % 2 == 0) 
    {
        factors[index++] = 2;
        n = n / 2;
    }
    while (i * i <= n) 
    {
        while (n % i == 0) {
            factors[index++] = i;
            n = n / i;
        }
      i = i + 2;
    }
    if (n > 2) {
        factors[index++] = n;
    }
    return index; 
}

int main() {
    unsigned long long n = 12;
    unsigned long long factors[100];
    int i = 0;
    int numFactors = prime_factors(n, factors);

    printf("Prime factors of %llu: ", n);
    while (i < numFactors)
    {
        printf("%llu ", factors[i]);
    i++;
    }
    printf("\n");
    return 0;
}
