/*
** algo.c for pushswap in /home/loisel_k/taff/C/C-Prog-Elem/pushswap/src
** 
** Made by Kevin LOISELEUR
** Login   <loisel_k@epitech.net>
** 
** Started on  Thu Jan  2 16:11:47 2014 Kevin LOISELEUR
** Last update Thu Jan  2 17:43:13 2014 Kevin LOISELEUR
*/

#include <stdlib.h>
#include "../include/my.h"
#include "pushswap.h"

int			bubble_sort(t_listp *l_a, t_listp *l_b)
{
  int			yes;

  yes = 0;
  while (!yes)
    {
      yes = bubble_sort_l_a(l_a, l_b);
      if (yes == 1)
	return (0);
      bubble_sort_l_b(l_a, l_b);
    }
  return (-1);
}

int			bubble_sort_l_a(t_listp *l_a, t_listp *l_b)
{
  int			yes;

  yes = 1;
  while (l_a->beg->next != NULL)
    {
      if (l_a->beg->nb < l_a->beg->next->nb)
	pb(l_a, l_b);
      else
	{
	  sa(l_a);
	  pb(l_a, l_b);
	  yes = 0;
	}
    }
  return (yes);
}

int			bubble_sort_l_b(t_listp *l_a, t_listp *l_b)
{
  int			yes;

  yes = 1;
  while (l_b->beg->next != NULL)
    {
      if (l_b->beg->nb < l_b->beg->next->nb)
	pa(l_a, l_b);
      else
	{
	  sb(l_b);
	  pa(l_a, l_b);
	  yes = 0;
	}
    }
  return (yes);
}
