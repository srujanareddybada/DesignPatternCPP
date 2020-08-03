#pragma once
#include "INode.h"
#include "Cell.h"
#include "ImageCell.h"
#include "SrcCodeCell.h"
#include "TextCell.h"
#include "NodeExporter.h"

class Page :
    public INode
{
public:
    Page(string pageName);
    virtual ~Page();

    void addCell(ImageCell* ptrICell);
    void addCell(SrcCodeCell* ptrSCCell);
    void addCell(TextCell* ptrTCell);

    void exporte(NodeExporter* ptrExport);
};

