#include <stdio.h>
#include <string.h>

char *ft_strdup(char *src);

int main(void) {
   char *str = "Hello world";
   char *result;
   char *result2;

   result = strdup(str);
   result2 = ft_strdup(str);
   printf("String: %s\n", result);
   printf("String: %s\n", result2);

   return (0);
}
