#include <stdlib.h>
#include "main.h"
/**                                                                                       
 * create_array - function that creates array                                             
 * @size: size of the array                                                               
 * @c: char to be initialized                                                             
 */
char *create_array(unsigned int size, char c)
{
  unsigned int i;
  char *arr;
  if(size == 0)
    return NULL;
  arr = malloc(size);
  if(arr == NULL)
        return NULL;
  for(i = 0; i < size; i++)
    arr[i] = c;
  return arr;
}
