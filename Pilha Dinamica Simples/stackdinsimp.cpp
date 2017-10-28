#include "StackDinSimp.h"

namespace ED1 {

void StackDinSimp::push(int data)
{ try{
    if(!size)
        link = new NodeStackSimp(data,NULL);
    else{
        NodeStackSimp *aux = link;
        while(aux->getLink()!=NULL)
            aux=aux->getLink();
        aux->setLink(new NodeStackSimp(data,NULL));
    }
    size++;
    }catch(std::bad_alloc){
        throw QString("Erro na alocação de memória");}

}

int StackDinSimp::pop()
{   int output;

    if(!size) throw QString("Pilha Vazia");
    if(size==1){
        output = link->getData();
        delete link;
        link=NULL;
        size=0;
        return output;
    }
    NodeStackSimp *aux = link;
    while(aux->getLink()->getLink()!=NULL)
        aux=aux->getLink();
    output = aux->getLink()->getData();
    delete aux->getLink();
    aux->setLink(NULL);
    size--;
    return output;

}

int StackDinSimp::top() const
{
    NodeStackSimp *aux = link;
    while(aux->getLink()!=NULL)
        aux=aux->getLink();
    return aux->getData();

}

bool StackDinSimp::empty() const
{
    if(!size) return true;
    return false;
}





}//fim namespace
