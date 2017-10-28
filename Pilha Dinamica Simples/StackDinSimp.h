#ifndef STACKDINSIMP_H
#define STACKDINSIMP_H

#include<QString>
#include<NodeStackSimp.h>

namespace ED1 {

class StackDinSimp{

private:
    NodeStackSimp *link;
    int size;

public:
    StackDinSimp():link(NULL),size(0){}
    void push(int data);
    int pop();
    int top()const;//retorna valor do topo
    int getSize(){return size;}
    bool empty()const;

};// fim declaração de classe

}//fim namespace

#endif // STACKDINSIMP_H
