#include "Notebook.h"

Notebook::Notebook():
	ptrPage(nullptr)
{
}

Notebook::~Notebook()
{
}

Page* Notebook::CreatePage(string pageName)
{
	ptrPage = new Page(pageName);
	return ptrPage;
}

void Notebook::exporte(NodeExporter* ptrExport)
{
	ptrExport->exportNotebook();
}
