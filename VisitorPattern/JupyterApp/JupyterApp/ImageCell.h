#pragma once
#include "Cell.h"
class ImageCell :
    public Cell
{

public :
    ImageCell();
    virtual ~ImageCell();
    void exporte(NodeExporter* ptrExport);
};

