#pragma once
#include "Cell.h"
class TextCell :
    public Cell
{

public:
    TextCell();
    virtual ~TextCell();
    void exporte(NodeExporter* ptrExport);
};

