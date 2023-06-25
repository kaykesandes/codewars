/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RockPaperScissors.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgoncalv <kaykegy@proton.me>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 16:26:15 by kgoncalv          #+#    #+#             */
/*   Updated: 2023/06/23 16:43:13 by kgoncalv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

enum tool {ROCK, PAPER, SCISSORS};
enum outcome {P1_WON, P2_WON, DRAW};

enum outcome rps (enum tool p1, enum tool p2)
{
	if (p1 == ROCK)
  {
    if (p2 == PAPER)
      return (P2_WON);
    else if (p2 == SCISSORS)
      return (P1_WON);
    else (p2 == ROCK);
      return (DRAW);
  }
  else if (p1 == PAPER)
  {
    if (p2 == PAPER)
      return (DRAW);
    else if (p2 == SCISSORS)
      return (P2_WON);
    else (p2 == ROCK);
      return (P1_WON);
  }
  else if (p1 == SCISSORS)
  {
    if (p2 == PAPER)
      return (P1_WON);
    else if (p2 == SCISSORS)
      return (DRAW);
    else (p2 == ROCK);
      return (P2_WON);
  }
  return DRAW;
}
