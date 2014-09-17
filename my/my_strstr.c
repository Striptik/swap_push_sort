/*
** my_strstr.c for my_strstr in /home/loisel_k/rendu/Piscine-C-lib/my
** 
** Made by loisel_k
** Login   <loisel_k@epitech.net>
** 
** Started on  Wed Oct  9 11:35:59 2013 loisel_k
** Last update Sun Nov 17 21:06:03 2013 kevin loiseleur
*/

#include <stdlib.h>

char		*my_strstr(char *str, char *to_find)
{
  int		i;
  int		n;
  char		*save;

  i = 0;
  n = 0;
  while (str && str[i])
    {
      if (to_find[n] == str[i])
	{
	  n++;
	  save = &str[i];
	}
      else if (n != my_strlen(to_find))
	{
	  n = 0;
	  save = 0;
	}
      i++;
    }
  save = save - n + 1;
  if (n > 0)
    return (save);
  else
    return (NULL);
}
