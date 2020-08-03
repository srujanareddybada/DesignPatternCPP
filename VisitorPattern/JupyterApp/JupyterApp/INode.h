#pragma once
#include <string>
#include <iostream>
#include "NodeExporter.h"
using namespace std;

class INode
{
public:
	virtual void exporte(NodeExporter* ptrExport) = 0;
};
