/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PrimeFactors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayke <kayke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 14:34:58 by kayke             #+#    #+#             */
/*   Updated: 2023/06/24 19:07:50 by kayke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int is_prime(unsigned long long num){
  unsigned long long count = 2;

  if (num < 2)
    return 0;

  while(count < num){
    if (num % count == 0)
      return 0;

    count++;
  }
  return 1;
}

int prime_factors(unsigned long long n, unsigned long long factors[]) {
    unsigned long long count = 2;
    size_t factorIndex = 0; 
    
    while (count <= n) {
        if (n % count == 0 && is_prime(count)) {
            n = n / count;
            factors[factorIndex] = count; 
            printf("count: %llu\n", count);
            count = 2;
            factorIndex++; 
            continue;
        }
        count++;
    }
    factors[factorIndex] = 0;
    return 0;
}

int main() {
    unsigned long long factors[10]; 
    prime_factors(220, factors);
    
    unsigned long long i = 0;
    printf("Fatores: ");
    while (i < 5) {
        if (factors[i] != 0) {
            printf("%llu ", factors[i]);
        }
        i++;
    }
    printf("\n");

    return 0;
}