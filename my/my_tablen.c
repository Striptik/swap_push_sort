/*
** my_tablen.c for my_tablen in /home/loisel_k/taff/C/Systeme-Unix/minishell1/src
** 
** Made by Kevin LOISELEUR
** Login   <loisel_k@epitech.net>
** 
** Started on  Wed Dec 18 19:50:08 2013 Kevin LOISELEUR
** Last update Wed Dec 18 19:51:54 2013 Kevin LOISELEUR
*/

int			my_tablen(char **tab)
{
  int			i;

  i = 0;
  while (tab && tab[i])
    i++;
}
