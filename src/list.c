/*
** list.c for list.c in /home/loisel_k/taff/C/C-Prog-Elem/pushswap/src
** 
** Made by Kevin LOISELEUR
** Login   <loisel_k@epitech.net>
** 
** Started on  Wed Jan  1 23:06:02 2014 Kevin LOISELEUR
** Last update Thu Jan  2 02:07:16 2014 Kevin LOISELEUR
*/

#include <stdlib.h>
#include "../include/my.h"
#include "pushswap.h"

t_listp			*init_list(void)
{
  t_listp		*list;

  if (!(list = malloc(sizeof(*list))))
    {
      my_rprintf("Error on Malloc (init_list) !\n");
      return (NULL);
    }
  list->beg = NULL;
  list->end = NULL;
  list->size = 0;
}

int			ins_elem(t_listp *list, int nb)
{
  t_list		*elem;

  if (!(elem = malloc(sizeof(*elem))))
    {
      my_rprintf("Error on Malloc (ins_elem) !\n");
      return (-1);
    }
  elem->nb = nb;
  if (!(list->size))
    {
      ins_elem_new_list(elem, list);
      return (0);
    }
  elem->next = list->beg;
  elem->prev = NULL;
  list->beg->prev = elem;
  list->beg = elem;
  list->size++;
  return (0);
}

void			ins_elem_new_list(t_list *elem, t_listp *list)
{
  elem->next = list->beg;
  elem->prev = list->end;
  list->beg = elem;
  list->end = elem;
  list->size++;
  return ;
}

int			del_elem(t_listp *list, int interrupt)
{
  t_list		*elem;

  if (!list || !list->size)
    {
      my_rprintf("List is empty MOFCK (del_elem)!\n");
      return (-1);
    }
  if (!interrupt)
    {
      elem = list->beg;
      list->beg = list->beg->next;
      if (!list->beg->prev)
	list->end = NULL;
      else
	list->beg->prev = NULL;
      list->size--;
      free(elem);
      return (0);
    }
  elem = list->end;
  list->end = list->end->prev;
  list->end->prev->next = NULL;
  list->size--;
  free(elem);
  return (0);
}

int			del_list(t_listp *list)
{
  while (list->size > 1)
    del_elem(list, 0);
  free(list->beg);
  free(list);
  return (0);
}
