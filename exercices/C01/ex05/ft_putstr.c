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

int main(){
    char *str = "Hello World!";
    ft_putstr(str);
    return 0;
}