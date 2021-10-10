#ifndef PILHA_HPP
#define PILHA_HPP

template <typename T>
class pilhaNo {
private:
    T conteudo;
    pilhaNo *prox;
public:
    pilhaNo(T conteudo){
        this->conteudo = conteudo;
        this->prox = NULL;
    }
    T getConteudo(){
        return this->conteudo;
    }
    pilhaNo* getProx(){
        return this->prox;
    }
    void setProx(pilhaNo* prox){
        this->prox = prox;
    }
};
template <typename T>
class pilha{
private:
    pilhaNo<T> *pilhaTopo;
    int size;
public:
    pilha(){
        this->pilhaTopo = NULL;
        this->size = 0;
    }
    void empilhar(T conteudo){
        pilhaNo<T> *aux = new pilhaNo<T>(conteudo);
        if (aux == NULL){
            cout << "ERRO: Nao foi possivel empilhar!\n";
        } else {
            aux->setProx(pilhaTopo);
            pilhaTopo = aux;
            this->size++;
        }
    }
    T desempilhar(){
        if(this->pilhaTopo == NULL){
            cout << "Pilha vazia!\n";
            return (T)NULL;
        } else {
            T aux = pilhaTopo->getConteudo();
            pilhaNo<T> *temp = pilhaTopo;
            pilhaTopo = pilhaTopo->getProx();
            delete temp;
            this->size--;
            return aux;
        }
    }
    void exibir(){
        if(this->pilhaTopo == NULL){
            cout << "Pilha vazia!\n";
        } else {
            pilhaNo<T> *aux = pilhaTopo;
            cout << "Pilha (do topo ate a base): ";
            while(aux != NULL){
                cout << aux->getConteudo() << " ";
                aux = aux->getProx();
            }
            cout << endl;
        }
    }
    int tam(){
        return this->size;
    }
};

#endif