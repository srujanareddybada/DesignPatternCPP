#include "TextCell.h"

TextCell::TextCell()
{
	cout << "Text Cell constructed" << endl;
}

TextCell::~TextCell()
{
}

void TextCell::exporte(NodeExporter* ptrExport)
{
	ptrExport->exportTextCell(this);
}
