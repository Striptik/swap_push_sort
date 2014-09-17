/*
** ope.c for ope in /home/loisel_k/taff/C/C-Prog-Elem/pushswap/src
** 
** Made by Kevin LOISELEUR
** Login   <loisel_k@epitech.net>
** 
** Started on  Thu Jan  2 17:05:05 2014 Kevin LOISELEUR
** Last update Thu Jan  2 17:37:41 2014 Kevin LOISELEUR
*/

#include <stdlib.h>
#include "../include/my.h"
#include "pushswap.h"

void			sa(t_listp *l_a)
{
  if (swap(l_a->beg, l_a->beg->next) == -1)
    {
      my_rprintf("fail to do sa.\n");
      exit(1);
    }
  my_printf(" sa");
  return ;
}

void			sb(t_listp *l_b)
{
  if (swap(l_b->beg, l_b->beg->next) == -1)
    {
      my_rprintf("fail to do sb.\n");
      exit(1);
    }
  my_printf(" sb");
  return ;
}

void			pa(t_listp *l_a, t_listp *l_b)
{
  if (push(l_a, l_b) == -1)
    {
      my_rprintf("fail to do pa.\n");
      exit(1);
    }
  my_printf(" pa");
  return ;
}

void			pb(t_listp *l_a, t_listp *l_b)
{
  if (push(l_b, l_a) == -1)
    {
      my_rprintf("fail to do pb.\n");
      exit(1);
    }
  my_printf(" pb");
  return ;
}
