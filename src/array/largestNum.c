#include <stdio.h>
int main()
{
  int array[100], n, c, location = 0;


  scanf("%d", &n);

  printf("Enter %d integers\n", n);

  for (c = 0; c < n; c++)
    scanf("%d", &array[c]);

  for (c = 1; c < n; c++)
    if (array[c] > array[location])
      location = c;

  printf("%d", array[location]);
  return 0;
}
