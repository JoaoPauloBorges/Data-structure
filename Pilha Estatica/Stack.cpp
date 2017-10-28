#include "Stack.h"
namespace ED1 {


Stack::Stack(int size):
    topo(-1)
{
    try {
        if (size <=0) throw QString("Valor para pilha deve ser maior que 0");
        array=new int[size];
        this->size=size;
    }catch (std::bad_alloc) {throw QString("Bad_Alloc");}
}


void Stack::push(int element)
{
    if(topo+1 == size) throw QString("Pilha cheia");
    topo++;
    array[topo]=element;
}

void Stack::pop()
{
    if(empty()== true) throw QString("Pilha vazia");
    topo--;

}

int Stack::top() const
{
    if(empty() == true) throw QString("Pilha vazia");
    return array[topo];
}

QString Stack::get_stack() const
{
    QString output;
    if (size){
    for (int i =0; i <=topo; i++)
        output += QString::number(array[i])+"   ";}
    else output = "";
    return output;
}

QString Stack::get_pos_stack() const
{
    QString output;
    if (size){
        for (int i =0; i <=topo; i++)
            output += QString::number(i)+"   ";}
    else output = "";
    return output;
}


bool Stack::empty() const
{
    if(topo == -1) return true;
    return false;

}
}
