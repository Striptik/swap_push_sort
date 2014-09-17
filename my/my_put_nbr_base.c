/*
** my_put_nbr_base.c for my_put_nbr_base in /home/loisel_k/travail/Librairie/my
** 
** Made by kevin loiseleur
** Login   <loisel_k@epitech.net>
** 
** Started on  Tue Nov 12 17:28:30 2013 kevin loiseleur
** Last update Sun Nov 17 23:30:14 2013 kevin loiseleur
*/

#include "my.h"

int		my_put_nbr_base(int nb, char *base)
{
  int		i;
  int		len;
  int		nb_len;

  if (nb < 0)
    {
      my_putchar('-');
      nb = -nb;
      nb_len++;
    }
  len = my_strlen(base);
  i = nb % len;
  nb = nb / len;
  if (nb > 0)
    my_put_nbr_base(nb, base);
  my_putchar(base[i]);
  nb_len++;
  return (len);
}

int		my_put_nbr_base_uns(long unsigned int nb, char *base)
{
  int		len;
  int		i;
  int		nb_len;

  nb_len = 0;
  if (nb < 0)
    {
      my_putchar('-');
      nb *= -1;
      nb_len++;
    }
  len = my_strlen(base);
  i = nb % len;
  nb = nb / len;
  if (nb > 0)
    nb_len = nb_len + my_put_nbr_base_uns(nb, base);
  my_putchar(base[i]);
  nb_len++;
  return (nb_len);
}
