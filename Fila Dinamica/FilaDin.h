#ifndef FILADIN_H
#define FILADIN_H

#include<QString>
#include<NodeFilaDin.h>

namespace ED1 {
template <class tipo>
class FilaDin
{
    //FILADIN Fila dinâmica duplamente encadeada circular,
    //com ponteiro para o primeiro elemento da Fila

private:
    NodeFilaDin<tipo> *linkBegin;//ponteiro para início Fila dinâmica
    int size;


public:
    FilaDin();
    ~FilaDin();
    void push_front(tipo data);
    tipo pop_back();
    int getSize() const{return size;}
    tipo top()const{ return linkBegin->getPreLink()->getData();}//retorna dados do elemento do topo
    bool empty()const;




};// fim declaração de classe


template <class tipo>
FilaDin<tipo>::FilaDin():
    linkBegin(NULL),
    size(0)
{
}
template <class tipo>
FilaDin<tipo>::~FilaDin()
{
    while (size) {
        this->pop_back();
    }
}

template <class tipo>
void FilaDin<tipo>::push_front(tipo data)
{
    if(!size){
        linkBegin = new NodeFilaDin<tipo>(data,NULL,NULL);
        linkBegin->setPreLink(linkBegin);
        linkBegin->setPostLink(linkBegin);
        size++;
    }else{
        NodeFilaDin<tipo> *aux = new NodeFilaDin<tipo>(data,linkBegin->getPreLink(),linkBegin);
        linkBegin->setPreLink(aux);
        linkBegin=aux;
        size++;
    }
}

template <class tipo>
tipo FilaDin<tipo>::pop_back()
{
    if(!size) throw QString("Fila Vazia");
    NodeFilaDin<tipo> *aux = linkBegin->getPreLink();
    tipo output = aux->getData();
    if(aux==linkBegin){
        delete linkBegin;
        linkBegin=NULL;
        size=0;
    }else{
    aux->getPreLink()->setPostLink(linkBegin);
    linkBegin->setPreLink(aux->getPreLink());
    delete aux;
    size--;
    }
    return output;

}

template <class tipo>
bool FilaDin<tipo>::empty() const
{
    if(!size) return true;
        return false;
}


}//fim namespace

#endif // FILADIN_H
