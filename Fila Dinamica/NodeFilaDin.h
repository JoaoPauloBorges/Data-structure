#ifndef NODEFILADIN_H
#define NODEFILADIN_H
#include<iostream>
namespace ED1 {
template <class tipo>
class NodeFilaDin
{
private:
    tipo data;
    NodeFilaDin *pre_link;
    NodeFilaDin *post_link;


public:
    NodeFilaDin();
    NodeFilaDin(tipo data, NodeFilaDin * const pre_link, NodeFilaDin * const post_link );
    NodeFilaDin(tipo data):data(data),pre_link(NULL),post_link(NULL){}
    tipo getData() const{return data;}
    void setData(const tipo data){this->data=data;}
    NodeFilaDin *getPreLink() const{return pre_link;}
    NodeFilaDin *getPostLink() const{return post_link;}
    void setPreLink(NodeFilaDin *const pre_link){this->pre_link=pre_link;}
    void setPostLink(NodeFilaDin *const post_link){this->post_link=post_link;}
};
template <class tipo>
NodeFilaDin<tipo>::NodeFilaDin():
    pre_link(NULL),
    post_link(NULL)
{

}
template <class tipo>
NodeFilaDin<tipo>::NodeFilaDin(tipo data, NodeFilaDin * const pre_link, NodeFilaDin * const post_link):
    data(data),
    pre_link(pre_link),
    post_link(post_link)

{

}


}//fim namespace

#endif // NODEFILADIN_H
