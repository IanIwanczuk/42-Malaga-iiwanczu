#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int main(void)
{
  char str1[] = "abcdQQZZ", str2[] = "abCdQQzz", str3[] = "abcdqqZZ";
  int result;
  unsigned int size;

	size = 4;

	// comparing strings str1 and str2 (1)
	result = ft_strncmp(str1, str2, size);
	printf("ft_strncmp(str1, str2, size) = %d\n", result);

	// comparing strings str1 and str3 (0)
	result = ft_strncmp(str1, str3, size);
	printf("ft_strncmp(str1, str3, size) = %d\n", result);

	// // comparing strings str2 and str3 (-1)
	result = ft_strncmp(str2, str3, size);
	printf("ft_strncmp(str2, str3, size) = %d\n", result);

  return (0);
}