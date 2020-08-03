#pragma once
class NodeExporter
{
public:
	virtual void exportNotebook() = 0;
	virtual void exportPage() = 0;
	virtual void exportCell() = 0;
};

