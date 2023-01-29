#include <unistd.h>
#include "ft_print_alphabet.h"

int main(){
    ft_print_alphabet();
    return 0;
}

void ft_print_alphabet(){
    int i = 'a';

    while(i <= 'z'){
        write(1, &i, 1);
        i++;
    }
}