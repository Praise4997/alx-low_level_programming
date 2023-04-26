#include <stdio.h>
#include "holberton.h"

/**
 * _islower - checks for lowercase character.
 * @c: The character to be checked.
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int _islower(int c)
{
  if (c >= 'a' && c <= 'z')
    return (1);
  else
    return (0);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
  char c;

  c = 'a';
  printf("%c: %d\n", c, _islower(c));
  c = 'A';
  printf("%c: %d\n", c, _islower(c));
  c = 'z';
  printf("%c: %d\n", c, _islower(c));
  c = 'Z';
  printf("%c: %d\n", c, _islower(c));
  c = '!';
  printf("%c: %d\n", c, _islower(c));

  return (0);
}

