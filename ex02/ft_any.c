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

#include <stdio.h>

int f(char *c){
    if(*c==' '){
        return 1;
    }else{
        return 0;
    }
}

#include <stdio.h>
int main(){
    char *tab[2] = {" ", "ab"};
    printf("%d\n", ft_any(tab, f));
}
