#include "Page.h"


Page::Page(string pageName)
{
	cout << pageName << endl;
}

Page::~Page()
{
}

void Page::addCell(ImageCell* ptrICell)
{
	cout << "image cell added" << endl;
}

void Page::addCell(SrcCodeCell* ptrSCCell)
{
	cout << "source code cell added" << endl;
}

void Page::addCell(TextCell* ptrTCell)
{
	cout << "Text cell added" << endl;
}

void Page::exporte(NodeExporter* ptrExport)
{
	ptrExport->exportPage(this);
}

