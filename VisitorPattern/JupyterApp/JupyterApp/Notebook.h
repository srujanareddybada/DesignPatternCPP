#pragma once
#include "INode.h"
using namespace std;
class Page;
class NodeExporter;

class Notebook :
    public INode
{
public:
    Notebook(string bookName);
    virtual ~Notebook();

    Page* CreatePage(string pageName);
    void exporte(NodeExporter* ptrExport);
    string GetBookName();

    Page* ptrPage;
private:
    string m_bookName;

};

