#include "ToolBox.h"

ToolBox::ToolBox() {}

ToolBox::~ToolBox() {}

void ToolBox::add(Tool *tool)
{
    tools.push_back(tool);
}

void ToolBox::remove()
{
    tools.pop_back();
}

void ToolBox::use()
{
    for (Tool *tool : tools)
        tool->use();
}