#include "Page.h"


Page::Page(string pageName):
	m_pageName(pageName)
{
	//cout << m_pageName << endl;
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

string Page::GetPageName()
{
	return m_pageName;
}

