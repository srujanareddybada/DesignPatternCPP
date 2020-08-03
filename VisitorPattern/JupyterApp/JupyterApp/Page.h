#pragma once
#include "INode.h"
#include "ImageCell.h"
#include "SrcCodeCell.h"
#include "TextCell.h"
using namespace std;
class NodeExporter;

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

    string GetPageName();

private:
    std::string m_pageName;
};

