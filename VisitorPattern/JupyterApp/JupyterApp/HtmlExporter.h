#pragma once
#include "NodeExporter.h"
class Notebook;
class Page;

class HtmlExporter :
    public NodeExporter
{
public:
	HtmlExporter();
	virtual ~HtmlExporter();

	void exportNotebook(Notebook* ptrNotebook);
	void exportPage(Page* ptrPage);
	void exportImageCell(ImageCell* ptrImageCell);
	void exportSrcCodeCell(SrcCodeCell* ptrSrcCodeCell);
	void exportTextCell(TextCell* ptrTextcell);
};

