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

void ft_sort_int_tab(int *tab, int size){
    int	i;
	int	j;

	i = 0;
    while(i < size){                                   // ALGORITHME DE TRI PAR INSERTION
        int j = i;
        while(j > 0 && tab[j] < tab[j-1]){
            ft_swap(&tab[j], &tab[j-1]);
            j--;
        }

        j=0;
        i++;
    }
	
    i = 0;
    while(i < size){
        ft_putnbr(tab[i]);
        i++;
    }
}

int main(){
    int tab[10] = {5,4,8,2,0,1,3,9,7,6};
    ft_sort_int_tab(tab, 10);
    return 0;
}