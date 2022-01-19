#include "graphnode.h"
#include "graphedge.h"
#include <iostream>
GraphEdge::GraphEdge(int id)
{
    _id = id;
}

void GraphEdge::SetChildNode(GraphNode *childNode)
{
    _childNode = childNode;
}

void GraphEdge::SetParentNode(GraphNode *parentNode)
{
    _parentNode = parentNode;
}

void GraphEdge::AddToken(std::string token)
{
    std::cout << "Before: " << token <<std::endl;
    _keywords.push_back(token);
    std::cout << "After : " << token <<std::endl;
}