#include "Fila.h"

namespace ED1 {


Fila::Fila(int size):
    front(-1),
    back(-1),
    used(0)
{
    try {
        if (size <=0) throw QString("Valor para fila deve ser maior que 0");
        array=new int[size];
        this->size=size;
    }catch (std::bad_alloc) {throw QString("Bad_Alloc");}

}

void Fila::push_back(int element)
{
    if (used == size) throw QString ("Inserção não executada (Fila cheia)");
    if (!used)
    {   front++;
        back++;
        used++;
        array[back] = element;
    }else{
        if (back == size-1)
        {   back = 0;
            array[back] = element;
            used++;
        }
        else
        {   back++;
            array[back] = element;
            used++;
        }
    }
}

void Fila::pop_front()
{   if (!used) throw QString ("Remoção não executada (Fila Vazia)");

    if(front == back)
    {   front = -1;
        back = -1;
        used = 0;
    }
    else
    {   if (front == size-1)
        {   front = 0;
            used --;
        }

        else
        { front++;
            used--; }
    }
}

bool Fila::empty() const
{
    if(!used) return true;
    else return false;
}

QString Fila::get_fila() const
{   QString output;
    for (int i=front;i!=back;i++){
        output += QString::number(array[i]) + " ";
        if(i==size-1)
            i=-1;}
    if(back!=-1)
        output += QString::number(array[back]);
    return output;

}

QString Fila::get_posFila() const
{   QString output;
    for (int i=front;i!=back;i++){
        output += QString::number (i) + " ";
        if(i==size-1)
            i=-1;}
    if(back!=-1)
        output += QString::number(back);
    return output;

}

}//fim namespace
