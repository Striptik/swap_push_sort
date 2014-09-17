/*
** list.c for list in /home/loisel_k/taff/C/C-Prog-Elem/pushswap/src
** 
** Made by Kevin LOISELEUR
** Login   <loisel_k@epitech.net>
** 
** Started on  Sun Dec 29 01:22:47 2013 Kevin LOISELEUR
** Last update Wed Jan  1 23:03:20 2014 Kevin LOISELEUR
*/

#include <stdlib.h>
#include "../include/my.h"
#include "pushswap.h"

t_listp			*init_list(void)
{
  t_listp		*list;

  if (!(list = malloc(sizeof(*list))))
    {
      my_rprintf("Error on malloc (init_list).\n");
      return (NULL);
    }
  list->beg = NULL;
  list->end = NULL;
  list->size = 0;
}

int			put_elem(t_listp *list, int nb)
{
  t_list		*elem;

  if (!list->size)
    {
      if (put_elem_new_list(list, nb) == -1)
	return (-1);
      return (0);
    }
  if (!(elem = malloc(sizeof(*elem))) && !list)
    {
      my_rprintf("Error on malloc or list not init (put_elem).\n");
      return (-1);
    }
  elem->nb = nb;
  elem->prev = NULL;
  elem->next = list->beg;
  list->beg->prev = elem;
  list->beg = elem;
  list->size++;
  return (0);
}

int			put_elem_new_list(t_listp *list, int nb)
{
  t_list		*elem;

  if (!(elem = malloc(sizeof(*elem))))
    {
      my_rprintf("Error Malloc (put_elem_new_list).\n");
      return (-1);
    }
  elem->nb = nb;
  elem->prev = list->end;
  elem->next = list->beg;
  list->beg = elem;
  list->end = elem;
  list->size++;
  return (0);
}

t_listp			*reverse_list(t_listp *list)
{
  t_listp		*new;
  t_list		*current;

  if (!list)
    {
      my_rprintf("List is empty (reverse_list) !\n");
      return (NULL);
    }
  current = list->end;
  new = init_list();
  while (current)
    {
      put_elem(new, current->nb);
      current = current->prev;
      pos++;
    }
  return (new);
}

int			swap_elem(t_list *elem1, t_list *elem2)
{
  t_list		*tmp;

  if (!(tmp = malloc(sizeof(*tmp))))
    {
      my_rprintf("Error on malloc(swap_elem).\n");
      return (-1);
    }
  tmp->nb = elem1->nb;
  tmp->prev = elem1->prev;
  tmp->next = elem1->next;
  elem1->nb = elem2->nb;
  elem1->prev = elem2->prev;
  elem1->next = elem2->next;
  elem2->nb = tmp->nb;
  elem2->prev = tmp->prev;
  elem2->next = tmp->next;
  free(tmp);
  return (0);
}
