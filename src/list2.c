
/*
** list2.c for list2 in /home/loisel_k/taff/C/C-Prog-Elem/pushswap/src
** 
** Made by Kevin LOISELEUR
** Login   <loisel_k@epitech.net>
** 
** Started on  Wed Jan  1 23:42:33 2014 Kevin LOISELEUR
** Last update Thu Jan  2 17:17:53 2014 Kevin LOISELEUR
*/

#include <stdlib.h>
#include "../include/my.h"
#include "pushswap.h"

t_listp			*reverse_list(t_listp *list)
{
  t_listp		*reverse;
  t_list		*current;

  if (!list || !list->size)
    {
      my_rprintf("List is empty !\n");
      return (NULL);
    }
  reverse = init_list();
  current = list->beg;
  while (current)
    {
      ins_elem(reverse, current->nb);
      current = current->next;
    }
  return (reverse);
}

int			swap(t_list *elem1, t_list *elem2)
{
  int			nb;

  if (!elem1 || !elem2)
    {
      my_rprintf("Elem1 or Elem2 is/are NULL !\n");
      return (-1);
    }
  nb = elem1->nb;
  elem1->nb = elem2->nb;
  elem2->nb = nb;
  return (0);
}

int			push(t_listp *l_a, t_listp *l_b)
{
  t_list		*tmp;
  t_list		*tmp2;

  if (!l_a || !l_b || (l_b->size == 0))
    {
      my_rprintf("List l_a or l_b is/are empty(ies) !\n");
      return (-1);
    }
  ins_elem(l_a, l_b->beg->nb);
  del_elem(l_b, 0);
  return (0);
}


int			disp_list(t_listp *list)
{
  t_list		*current;


  if (!list || !list->size)
    {
      my_rprintf("List is empty (disp_list) !\n");
      return (-1);
    }
  current = list->beg;
  my_printf("%d", current->nb);
  current = current->next;
  while (current)
    {
      my_printf(" %d", current->nb);
      current = current->next;
    }
  my_printf("%c",'\n');
  return (0);
}

int			rev_disp_list(t_listp *list)
{
  t_list		*current;

  if (!list || !list->size)
    {
      my_rprintf("List is empty (rev_disp_list) !\n");
      return (-1);
    }
  current = list->end;
  while (current)
    {
      my_printf("%d", current->nb);
      current = current->prev;
    }
  return (0);
}
