#include <stdlib.h>

int ft_any(char **tab, int(*f)(char*))
{
    while (*tab != NULL)
    {
        if (f(*tab) != 0)
            return 1;
        tab++;
    }
    return 0;
}

int ft_count_if(char **tab, int(*f)(char*))
{
	int count;

	count = 0;
	while (*tab)
	{
		if (f(*tab) != 0)
			count++;
		tab++;
	}
	return count;
}

int f(char *c){
    if(*c==' '){
        return 1;
    }else{
        return 0;
    }
}

#include <stdio.h>
int main(){
    char *tab[2] = {"ab","ab"};
	    printf("%d\n", ft_any(tab, f));
    // printf("%d\n", ft_count_if(tab, f));

}