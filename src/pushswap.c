/*
** pushswap.c for pushswap in /home/loisel_k/taff/C/C-Prog-Elem/pushswap/src
** 
** Made by Kevin LOISELEUR
** Login   <loisel_k@epitech.net>
** 
** Started on  Sun Dec 29 01:02:04 2013 Kevin LOISELEUR
** Last update Thu Jan  2 17:39:56 2014 Kevin LOISELEUR
*/

#include <stdlib.h>
#include "../include/my.h"
#include "pushswap.h"

int			pushswap_main(char **av)
{
  t_listp		*tmp;
  t_listp		*l_a;
  t_listp		*l_b;

  tmp = init_list();
  l_a = fullfil_list(av, tmp);
  l_b = init_list();
  bubble_sort(l_a, l_b);
  my_printf("%c", '\n');
  return (0);
}

t_listp			*fullfil_list(char **av, t_listp *tmp)
{
  t_listp		*l_a;
  int			i;

  i = 1;
  if (!av[1])
    {
      my_rprintf("Error, list is empty (fullfil_list).\n");
      exit(1);
    }
  while (av && av[i])
    {
      ins_elem(tmp, my_getnbr(av[i]));
      i++;
    }
  l_a = init_list();
  l_a = reverse_list(tmp);
  del_list(tmp);
  return (l_a);
}

int			main(int ac, char **av)
{
  pushswap_main(av);
  return (0);
}
