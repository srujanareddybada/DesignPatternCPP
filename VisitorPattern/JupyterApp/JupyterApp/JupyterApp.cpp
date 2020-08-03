#include <iostream>
#include "Notebook.h"
#include "Page.h"
#include "HtmlExporter.h"

int main()
{
    Notebook* ptrNote1 = new Notebook("My Notebook");
    //INode* ptrPage1 = ptrNote1->CreatePage("First Page");

	// dynamic_cast<Page*>(ptrPage1)->addCell(new ImageCell());
	// dynamic_cast<Page*>(ptrPage1)->addCell(new SrcCodeCell());
	// dynamic_cast<Page*>(ptrPage1)->addCell(new TextCell());

    NodeExporter* ptr = new HtmlExporter();
    ptrNote1->exporte(ptr);
    Page* ptrPage2 = ptrNote1->CreatePage("Second Page full Page type");
    //dynamic_cast<Page*>(ptrPage1)->exporte(ptr);
    ptrPage2->exporte(ptr);

    // Notebook* ptrNote2 = new Notebook();
    Page* ptrPage3 = ptrNote1->CreatePage("Second Page");
    ptrPage3->addCell(new ImageCell());
}