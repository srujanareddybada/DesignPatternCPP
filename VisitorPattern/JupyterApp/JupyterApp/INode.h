#pragma once
#include <string>
#include <iostream>
using namespace std;
class NodeExporter;

class INode
{
public:
	virtual void exporte(NodeExporter* ptrExport) = 0;
};
