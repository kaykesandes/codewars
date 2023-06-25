/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AreYouPlayingBanjo.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoncalv <kaykegy@proton.me>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 15:30:11 by kgoncalv          #+#    #+#             */
/*   Updated: 2023/06/23 15:44:00 by kgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

char *are_you_playing_banjo(const char *name)
{
  char *result;
  if (name[0] == 'r' || name[0] == 'R') {
    asprintf(&result, "%s plays banjo", name);
  } else {
    asprintf(&result, "%s does not play banjo", name);
  }
  return result;
}
