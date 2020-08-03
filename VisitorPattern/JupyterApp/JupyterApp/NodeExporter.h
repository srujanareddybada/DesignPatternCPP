#pragma once
class Notebook;
class Page;
class ImageCell;
class SrcCodeCell;
class TextCell;

class NodeExporter
{
public:
	virtual void exportNotebook(Notebook* ptrNotebook) = 0;
	virtual void exportPage(Page* ptrPage) = 0;
	virtual void exportImageCell(ImageCell* ptrImageCell) = 0;
	virtual void exportSrcCodeCell(SrcCodeCell* ptrSrcCodeCell) = 0;
	virtual void exportTextCell(TextCell* ptrTextcell) = 0;
};

