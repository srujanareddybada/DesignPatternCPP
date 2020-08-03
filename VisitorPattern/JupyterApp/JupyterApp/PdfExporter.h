#pragma once
#include "NodeExporter.h"
class PdfExporter :
    public NodeExporter
{

public:
	void exportNotebook();
	void exportPage();
	void exportCell();
};

