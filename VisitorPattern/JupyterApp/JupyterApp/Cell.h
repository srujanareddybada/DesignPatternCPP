#pragma once
#include "INode.h"

class Cell :
    public INode
{
public:
    void exporte(NodeExporter* ptrExport) = 0;
};

