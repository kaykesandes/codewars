/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayke <kayke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 00:30:52 by kayke             #+#    #+#             */
/*   Updated: 2023/06/26 13:36:32 by kayke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bits/posix2_lim.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* formatar_cor(char* entrada) {
    char* saida = (char*)malloc(9 * sizeof(char));
    strncpy(saida, entrada + 1, 6);
    saida[6] = '\0';
    for (int i = 2; i < 8; i += 3) {
        memmove(saida + i + 1, saida + i, strlen(saida + i) + 1);
        saida[i] = ' ';
    }
    return saida;
}

char*  hex_str_to_rgb(char *hex_str) 
{
    int i, j, k;
    char ic, jc, kc;
    char* saida_rgb = (char*)malloc(9 * sizeof(char));
    saida_rgb[6] = '\0';
    char  *decColor = formatar_cor(hex_str);
    printf("Valor em HEX: %s \n", decColor);
    sscanf(decColor, "%X %X %X", &i, &j, &k);
    // char ic = {};
    // char jc = {}; 
    // char kc = {};
    
}

int main(void)
{
    hex_str_to_rgb("#FF9933");
}