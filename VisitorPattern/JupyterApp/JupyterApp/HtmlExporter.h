#pragma once
#include "NodeExporter.h"
class HtmlExporter :
    public NodeExporter
{
public:
	void exportNotebook();
	void exportPage();
	void exportCell();
};

