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

void ft_swap(int *a, int *b){
    int c = *b;
    *b = *a;
    *a = c;
    ft_putnbr(*a);
    write(1, "; ", 2);
    ft_putnbr(*b);
}

int main(){
    int a = 42;
    int b = 21;
    ft_swap(&a, &b);
    return 0;
}