#pragma once
#include "Cell.h"
#include "NodeExporter.h"

class TextCell :
    public Cell
{

public:
    TextCell();
    virtual ~TextCell();
    void exporte(NodeExporter* ptrExport);
};

