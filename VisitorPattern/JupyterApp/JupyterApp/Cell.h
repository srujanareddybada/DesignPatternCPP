#pragma once
#include "INode.h"
class Cell :
    public INode
{

public :
    Cell();
    virtual ~Cell();
    void exporte(NodeExporter* ptrExport);
};

