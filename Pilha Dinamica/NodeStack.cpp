#include "NodeStack.h"

NodeStack::NodeStack()
{

}

tipo NodeStack::getData() const
{
    return data;
}

void NodeStack::setData(const tipo &value)
{
    data = value;
}

NodeStack *NodeStack::getLink() const
{
    return link;
}

void NodeStack::setLink(NodeStack *value)
{
    link = value;
}
