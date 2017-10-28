#ifndef PILHA_H
#define PILHA_H
#include<QMessageBox>
#include<QString>

namespace ED1{

class Stack
{
private:
    int *array;
    int size;
    int topo;
public:
    Stack(int size);
    ~Stack(){delete[] array;}
    void push(int element);
    void pop();
    int top()const;
    QString get_stack() const;
    QString get_pos_stack() const;
    int used()const { return (topo+1);}
    bool empty()const;

};
}
#endif // PILHA_H
