int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 != 0 && *s2 != 0 && n > 0)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
		n--;
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char s1[] = "abcde";
// 	char s2[] = "Abcde";
// 	char s3[] = "aBcde";
// 	char s4[] = "abCde";
// 	char s5[] = "abcDe";
// 	char s6[] = "abcdE";

// 	unsigned int n = 3;

// 	printf("s1 diff s2: %d ", ft_strncmp(s1, s2, n));
// 	printf("%d\n", strncmp(s1, s2, n));
// 	printf("s1 diff s3: %d ", ft_strncmp(s1, s3, n));
// 	printf("%d\n", strncmp(s1, s3, n));
// 	printf("s1 diff s4: %d ", ft_strncmp(s1, s4, n));
// 	printf("%d\n", strncmp(s1, s4, n));
// 	printf("s1 diff s5: %d ", ft_strncmp(s1, s5, n));
// 	printf("%d\n", strncmp(s1, s5, n));
// 	printf("s1 diff s6: %d ", ft_strncmp(s1, s6, n));
// 	printf("%d\n", strncmp(s1, s6, n));
// }