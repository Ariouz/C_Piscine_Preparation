#include <unistd.h>

void ft_putchar(char a){
    write(1, &a, 1);
}

void ft_putnbr(int nb){
    
    if(nb < 0){
        ft_putchar('-');
        nb = -nb;
    }

    if(nb > 9){
        int d = nb /10;
        ft_putnbr(d);
    }

    int mod = nb%10;
    if(nb > 9){
        ft_putchar(mod+'0');
    }else{
        ft_putchar(nb+'0');
    }
}

int ft_strlen(char *str){
    int i = 0;
    while(str[i]){
        i++;
    }
    return i;
}

int main(){
    char *str = "Hello World 2!";
    ft_putnbr(ft_strlen(str));
    return 0;
}