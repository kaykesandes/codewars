/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DigitalRoot.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayke <kayke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 11:24:53 by kayke             #+#    #+#             */
/*   Updated: 2023/06/25 12:12:10 by kayke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <sys/types.h>

int digital_root(int n)
{
    if (sizeof(n) != sizeof(int))
        return 0;

    char num[100];
    sprintf(num,"%d", n);

    int result = 0;
    int index = 0;
    while (num[index] != '\0')
    {
        result =  (num[index] - '0') + result;
        index++;
    }
    // printf(" %d", result);
    sprintf(num,"%d", result);
    if (result < 10)
        return result;
    if (num[1] != '\0')
        return (digital_root(result));

    return result;
}

int main(void)
{
    int test = digital_root(555);
    
    printf("return: %d", test);
}