/*************************************************************************

Julio Arita 23/06/2023

I used a simple 'for' loop. I just look at the quotient, if it is equal
to zero, then the number is a multiple.

**************************************************************************/
#include <iostream>

int main(){
    for(int i = 1; i <=100; i++){
        if(i%3 == 0 && i%5 == 0){
            std::cout << "FooBaa\n";
        }
        else if(i%3 == 0){
            std::cout << "Foo\n";
        }
        else if(i%5 == 0){
            std::cout << "Baa\n";
        }
        else 
            std::cout << i << "\n";
    }
    return 0;
}
