#pragma once
#include "INode.h"
#include "Page.h"
class Notebook :
    public INode
{

public:
    Notebook();
    virtual ~Notebook();

    Page* CreatePage(string pageName);
    void exporte(NodeExporter* ptrExport);

    Page* ptrPage;


};

