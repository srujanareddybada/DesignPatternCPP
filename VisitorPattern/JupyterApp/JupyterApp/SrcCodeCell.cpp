#include "SrcCodeCell.h"

SrcCodeCell::SrcCodeCell()
{
	cout << "Src Code Cell constructed" << endl;
}

SrcCodeCell::~SrcCodeCell()
{
}

void SrcCodeCell::exporte(NodeExporter* ptrExport)
{
	ptrExport->exportNotebook();
}
