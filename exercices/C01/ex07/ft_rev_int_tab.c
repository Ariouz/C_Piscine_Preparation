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
}

void ft_rev_int_tab(int *tab, int size){
    int i = 0;
    while(i < size/2){
        ft_swap(&tab[i], &tab[size-i-1]);
        i++;
    }
}

int main(){
    int t[] = {9, 8, 7, 6, 5, 4, 3, 2, 1}; 
    int size = 9;
    ft_rev_int_tab(t, size);
    
    ft_putchar(' ');

    int i = 0;
    while(i < size){
        ft_putnbr(t[i]);
        i++;
    }

    return 0;
}