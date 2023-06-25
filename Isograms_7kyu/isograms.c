/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isograms.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kayke <kayke@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 12:34:41 by kayke             #+#    #+#             */
/*   Updated: 2023/06/25 13:36:59 by kayke            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <strings.h>
#include <stdio.h>

char ft_everyoneLowCase(char str)
{
    if (str >= 'a' && str <= 'z')
        return str;
    else if(str >= 'A' && str <= 'Z')   
		str += 32;
    else
        return str;
}


bool IsIsogram (const char *string) 
{
    int cont = 0;
    int index_str;
    const char *test = "";
    
    if (string == test)
    {        
        return true;
    }   
    while (string[cont] != '\0')
    {   
        index_str = 0;
        while (string[index_str] != '\0')
        {   
            if (ft_everyoneLowCase(string[cont]) == ft_everyoneLowCase(string[index_str]) && index_str != cont ) 
            {   
                return false;
                break;
            }
            index_str++;
        }
        cont++;
    }
    return true;
}

int main(void)
{
    printf("%b\n", IsIsogram("DISmXvJ")); 
    printf("%b\n", IsIsogram("")); 
    printf("%b\n", IsIsogram("a"));
    printf("%b\n", IsIsogram("aa"));
    printf("%b\n", IsIsogram("aba"));
    printf("%b\n", IsIsogram("aA"));
    printf("%b\n", IsIsogram("aba"));
    printf("%b\n", IsIsogram("abcdefghijklmnopqrstuvwxyzA"));
    
}

/*
	do_test("abcde", true); 1
	do_test("", true); 1
	do_test("a", true); 1
	do_test("aa", false); 0 
	do_test("aba", false); 0 
	do_test("aA", false); 0
	do_test("abcdefghijklmnopqrstuvwxyzA", false); 0
*/