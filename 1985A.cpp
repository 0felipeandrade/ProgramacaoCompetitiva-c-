#include <bits/stdc++.h>

using namespace std;


int main(void){

    int flag;
    int contador = 0;

    std:: cin >> flag;

    std:: string nome1;
    std:: string nome2;  
    char troca1;

    while(contador < flag){

        std::cin >> nome1 >> nome2;

        troca1 = nome2[0];
        nome2[0] = nome1[0];
        nome1[0] = troca1;

        std::cout<< nome1 << " " <<nome2 << endl;

        contador++;
    }




    return 0;
}
