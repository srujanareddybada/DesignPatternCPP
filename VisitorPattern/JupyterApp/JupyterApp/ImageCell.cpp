#include "ImageCell.h"

ImageCell::ImageCell()
{
	cout << "Image Cell constructed" << endl;
}

ImageCell::~ImageCell()
{
}

void ImageCell::exporte(NodeExporter* ptrExport)
{
	ptrExport->exportImageCell(this);
}
