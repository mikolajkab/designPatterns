#pragma once

#include "Tool.h"

#include <vector>

using namespace std;

class ToolBox
    : public Tool
{
  public:
    ToolBox();
    virtual ~ToolBox();

    void add(Tool *tool);
    void remove();
    void use() override;

  private:
    vector<Tool *> tools;
};
