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

char *ft_strupcase(char *str){
    int i = 0;
    while(str[i]){
        if(str[i] >= 97 && str[i] <= 122){
            str[i]-=32;
        }
        i++;
    }
    return str;
}

int main(){
    char s[] = "hello world";
    char *f = ft_strupcase(s);
    ft_putstr(f);

    return 0;
}