#ifndef NODESTACKSIMP_H
#define NODESTACKSIMP_H

namespace ED1 {
class NodeStackSimp{
private:
    NodeStackSimp *link;
    int data;
public:
    NodeStackSimp();
    NodeStackSimp(int data, NodeStackSimp *const link):link(link), data(data){}
    int getData() const {return data;}
    void setData(int data){this->data=data;}
    NodeStackSimp *getLink() const{return link;}
    void setLink(NodeStackSimp *link){this->link=link;}
};

}
#endif // NODESTACKSIMP_H
