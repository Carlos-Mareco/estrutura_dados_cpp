#include <iostream>
#include "../source/pilha.hpp"

using namespace std;

int main(){
    pilha<int> myPilha;

    myPilha.empilhar(10);
    myPilha.empilhar(20);
    myPilha.empilhar(30);
    myPilha.empilhar(40);
    myPilha.exibir();
    cout << "Tamanho pilha: " << myPilha.tam() << endl;
    cout << "Desempilhando: " << myPilha.desempilhar() << endl;
    cout << "Desempilhando: " << myPilha.desempilhar() << endl;
    cout << "Desempilhando: " << myPilha.desempilhar() << endl;
    cout << "Desempilhando: " << myPilha.desempilhar() << endl;
    myPilha.exibir();
    return 0;
}