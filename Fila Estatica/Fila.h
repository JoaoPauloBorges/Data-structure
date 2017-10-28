#ifndef FILA_H
#define FILA_H
#include <QString>

namespace ED1 {
class Fila
{
private:
    int front;
    int back;
    int used;
    int size;
    int *array;

public:
    Fila(int size);
    ~Fila(){ if (array) delete[]array;}
    void push_back(int element);
    void pop_front();
    bool empty() const;
    int max_size() const {return size;}
    int size_used()const { return used;}
    int access(){ return array[front];}
    QString get_fila()const;
    QString get_posFila()const;



};

}//fim namespace

#endif // FILA_H
