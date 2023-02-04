#include <unistd.h>

void ft_putchar(char a){
    write(1, &a, 1);
}

void ft_putstr(char *str){
    int i = 0;
    while(str[i]){
        ft_putchar(str[i]);
        i++;
    }
}

char *ft_strncpy(char *dest, char *src, unsigned int n){
	int	i = 0;
    
	while(i < n){
        if(src[i]) dest[i] = src[i];
        i++;
    }
	dest[i] = '\0';
	return dest;
}

int main(){
    char *hey = "Hello World!";
    char t;
    ft_strncpy(&t, hey, 5);
    ft_putstr(&t);
    return 0;
}