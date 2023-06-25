/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Gradebook.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoncalv <kaykegy@proton.me>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 15:46:39 by kgoncalv          #+#    #+#             */
/*   Updated: 2023/06/23 15:59:19 by kgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char get_grade(int a, int b, int c) {

    int resul = (a + b + c) / 3;
    if (resul >= 90)
      return ('A');
    else if (resul >= 80)
      return ('B');
    else if (resul >= 70)
      return ('C');
    else if (resul > 60)
      return ('D');
    else
      return ('F');
}
