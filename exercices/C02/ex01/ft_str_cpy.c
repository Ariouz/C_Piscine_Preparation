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

char *ft_strcpy(char *dest, char *src)
{
	int	i = 0;
    
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}

int main(){
    char *hey = "Hey";
    char t;
    ft_strcpy(&t, hey);
    ft_putstr(&t);
    return 0;
}