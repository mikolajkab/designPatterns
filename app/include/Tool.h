#pragma once

class Tool
{
  public:
    Tool();
    virtual ~Tool();

    virtual void use() = 0;
};