#pragma once
#include "NodeExporter.h"
class Notebook;
class PdfExporter :
    public NodeExporter
{

public:
	PdfExporter();
	virtual ~PdfExporter();

	void exportNotebook(Notebook* ptrNotebook);
	void exportPage(Page* ptrPage);
	void exportImageCell(ImageCell* ptrImageCell);
	void exportSrcCodeCell(SrcCodeCell* ptrSrcCodeCell);
	void exportTextCell(TextCell* ptrTextcell);
};

