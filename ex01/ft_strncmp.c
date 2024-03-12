int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != 0 && s2[i] != 0 && i < n)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
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