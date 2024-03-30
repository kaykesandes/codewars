/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayke <kayke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 15:07:31 by kayke             #+#    #+#             */
/*   Updated: 2024/03/29 15:31:07 by kayke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void remove_exclamation_marks(char *str_in, char *str_out) {
    int size_str_in;
    int size_str_out;

    size_str_in = strlen(str_in);
    size_str_out = strlen(str_out);

    char * point = strstr(str_in, str_out);

    if (point) {
        int position = (point - str_in);
        point =  point + size_str_out;
        
        unsigned long int i;
        i = 0;
        while (i < strlen(point)) {
            str_in[position + i] = point[i];
            i++;
        }
        str_in[position + i] = 0;
    }
}


int main(){
    char * frase = (char*)malloc(sizeof(char) * 100);
    char * palavra = (char*)malloc(sizeof(char) * 20);
    
    //Frase de onde queremos remover a palavra
    strcpy(frase  , "Hello World!"); 

    //palavra que queremos remover da frase
    strcpy(palavra, "!"); 

    printf ("Remover a palavra'%s' da frase: '%s'\n\n", palavra, frase);

    remove_exclamation_marks(frase, palavra);
    
    printf ("Frase sem a palavra:'%s'\n", frase);
}