/*
** my_square_root.c for my_square_root in /home/loisel_k/rendu/Piscine-C-lib/my
** 
** Made by loisel_k
** Login   <loisel_k@epitech.net>
** 
** Started on  Wed Oct  9 10:33:05 2013 loisel_k
** Last update Sun Nov 17 21:02:11 2013 kevin loiseleur
*/

int		my_square_root(int nb)
{
  int		i;

  i = 0;
  if (nb == 1)
    return (1);
  while (i <= (nb / 2))
    {
      if ((i * i) == nb)
	return (i);
      i++;
    }
  return (0);
}
