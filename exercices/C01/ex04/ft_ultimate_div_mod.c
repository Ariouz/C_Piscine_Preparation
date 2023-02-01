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

void ft_ultimate_div_mod(int *a, int *b){
    int temp = *a / *b;
    *b = *a % *b;
    *a = temp;
}

int main(){
    int a = 7;
    int b = 2;
    ft_ultimate_div_mod(&a, &b);
    ft_putnbr(a);
    ft_putchar(' ');
    ft_putnbr(b);
    return 0;
}