#include <iostream>
#include "INode.h"
#include "Notebook.h"
#include "Page.h"
#include "NodeExporter.h"
#include "HtmlExporter.h"

int main()
{
    Notebook* ptrNote1 = new Notebook();
    INode* ptrPage1 = ptrNote1->CreatePage("First Page");

	 dynamic_cast<Page*>(ptrPage1)->addCell(new ImageCell());
	 dynamic_cast<Page*>(ptrPage1)->addCell(new SrcCodeCell());
	 dynamic_cast<Page*>(ptrPage1)->addCell(new TextCell());

    NodeExporter* ptr = new HtmlExporter();
    ptrPage1->exporte(ptr);
    // Notebook* ptrNote2 = new Notebook();
    Page* ptrPage2 = ptrNote1->CreatePage("Second Page");
    ptrPage2->addCell(new ImageCell());
}