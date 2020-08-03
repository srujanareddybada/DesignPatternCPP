#pragma once
#include "Cell.h"
class SrcCodeCell :
    public Cell
{

public:
    SrcCodeCell();
    virtual ~SrcCodeCell();
    void exporte(NodeExporter* ptrExport);
};

