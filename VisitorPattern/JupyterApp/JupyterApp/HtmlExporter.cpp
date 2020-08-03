#include "HtmlExporter.h"
#include "Notebook.h"
#include "Page.h"

HtmlExporter::HtmlExporter()
{
}

HtmlExporter::~HtmlExporter()
{
}

void HtmlExporter::exportNotebook(Notebook* ptrNotebook)
{
	if (ptrNotebook)
	{
		cout << "<h1>" << ptrNotebook->GetBookName() << "<h1>" <<endl;
	} 
}

void HtmlExporter::exportPage(Page* ptrPage)
{
	if (ptrPage)
	{
		cout << "<h1>" << ptrPage->GetPageName() << "<h1>" << endl;
	}
}

void HtmlExporter::exportImageCell(ImageCell* ptrImageCell)
{
}

void HtmlExporter::exportSrcCodeCell(SrcCodeCell* ptrSrcCodeCell)
{
}

void HtmlExporter::exportTextCell(TextCell* ptrTextcell)
{
}
