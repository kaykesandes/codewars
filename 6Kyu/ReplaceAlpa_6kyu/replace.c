/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayke <kayke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 13:59:33 by kayke             #+#    #+#             */
/*   Updated: 2023/06/25 15:40:04 by kayke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>


char *ft_ConvertIntToCharArray(int *array) {
    int cont = 0;
    int cont_array_char = 0;
    char temp_memory;

    int total_digits = 0;
    while (array[cont] != 0) 
    {
        int num = array[cont];
        int num_digits = 0;
        int temp_num = num;
    
        while (temp_num > 0)
        {
            num_digits++;
            temp_num /= 10;
        }
        
        total_digits += num_digits;
        cont++;
    }
    int total_spaces = cont - 1;
    int total_chars = total_digits + total_spaces;
    char *array_return = malloc((total_chars + 1) * sizeof(char));
    cont = 0;
    cont_array_char = 0;

    while (array[cont] != 0) {
        int num = array[cont];
        int num_digits = 0;
        int temp_num = num;

        while (temp_num > 0)
        {
            num_digits++;
            temp_num /= 10;
        }
        
        temp_num = num;
        int i = 0;
        while (i < num_digits) 
        {
            temp_memory = '0' + (temp_num % 10);
            array_return[cont_array_char + num_digits - 1 - i] = temp_memory;
            temp_num /= 10;
            i++;
        }
        cont_array_char += num_digits;
        
        if (array[cont + 1] != 0) 
        {
            array_return[cont_array_char] = ' ';
            cont_array_char++;
        }
        cont++;
    }
    array_return[cont_array_char] = '\0';

    return array_return;
}


int	ft_isalpha(char str)
{
	if (!((str > 96 && str < 123) || (str > 64 && str < 91)))
		return (0);
	return (1);
}

char ft_strlowcase(char str)
{
	if (str >= 'A' && str <= 'Z')
		str += 32;
	return (str);
}

char *alphabet_position(char *text)
{
    int cont = 0;
    int array[1000];
    int cont_array= 0;
    
    while (text[cont] != '\0')
    {   
        if (ft_isalpha(text[cont]))
        {
            char lowercase = ft_strlowcase(text[cont]);
            int position = lowercase - 'a' + 1;
            array[cont_array] = position;
            printf("%d ", position);
            cont_array++;
        }
        cont++;
    }
    array[cont_array] = '\0';
    return ft_ConvertIntToCharArray(array);
}

int main(void)
{
    alphabet_position("The sunset sets at twelve o' clock."); 
}