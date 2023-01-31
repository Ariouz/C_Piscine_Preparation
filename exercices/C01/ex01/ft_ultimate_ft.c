#include <unistd.h>
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

void ft_ultimate_ft(int *********nbr){
    *********nbr = 42;
    ft_putnbr(*********nbr);
}

int main(){
    int z = 4;
    int *a = &z;
    int **b = &a;
    int ***c = &b;
    int ****d = &c;
    int *****e = &d;
    int ******f = &e;
    int *******g = &f;
    int ********h = &g;
    int *********i = &h;
    ft_ultimate_ft(i);
    return 0;
}