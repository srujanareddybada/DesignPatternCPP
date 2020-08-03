#include "Notebook.h"
#include "Page.h"

Notebook::Notebook(string bookName):
	ptrPage(nullptr),
	m_bookName(bookName)
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
	ptrExport->exportNotebook(this);
}

string Notebook::GetBookName()
{
	return m_bookName;
}
