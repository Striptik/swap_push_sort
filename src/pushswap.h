/*
** pushswap.h for pushswap.h in /home/loisel_k/taff/C/C-Prog-Elem/pushswap/src
** 
** Made by Kevin LOISELEUR
** Login   <loisel_k@epitech.net>
** 
** Started on  Sun Dec 29 01:08:38 2013 Kevin LOISELEUR
** Last update Thu Jan  2 02:37:20 2014 Kevin LOISELEUR
*/

#ifndef _PUSHSWAP_H_
# define _PUSHSWAP_H_

typedef struct		s_list
{
  int			nb;
  struct s_list		*next;
  struct s_list		*prev;
}			t_list;

typedef struct		s_listp
{
  int			size;
  t_list		*beg;
  t_list		*end;
}			t_listp;

/*
** Gestion liste
*/

t_listp			*init_list(void);
int			ins_elem(t_listp *list, int nb);
void			ins_elem_new_list(t_list *elem, t_listp *list);
int			del_elem(t_listp *list, int interrupt);
int			del_list(t_listp *list);
t_listp			*reverse_list(t_listp *list);
int			swap_elem(t_list *elem1, t_list *elem2);
int			disp_list(t_listp *list);
int			rev_disp_list(t_listp *list);

int			pushswap_main(char **av);
t_listp			*fullfil_list(char **av, t_listp *tmp);

#endif /* _PUSHSWAP_H_ */
