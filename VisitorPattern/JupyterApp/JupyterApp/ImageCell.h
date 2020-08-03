#pragma once
#include "Cell.h"
#include "NodeExporter.h"

class ImageCell :
    public Cell
{
public :
    ImageCell();
    virtual ~ImageCell();
    void exporte(NodeExporter* ptrExport);
};

