#include "Hammer.h"
#include "Saw.h"
#include "ToolBox.h"

int main()
{
    Hammer hammer1;
    Hammer hammer2;
    Hammer hammer3;
    Hammer hammer4;
    Hammer hammer5;
    Hammer hammer6;
    Hammer hammer7;

    Saw saw1;
    Saw saw2;
    Saw saw3;
    Saw saw4;
    Saw saw5;

    ToolBox toolBox1;
    ToolBox toolBox2;
    ToolBox toolBox3;

    toolBox1.add(&hammer1);
    toolBox1.add(&saw1);
    toolBox1.add(&toolBox2);
    toolBox1.add(&toolBox3);

    toolBox2.add(&hammer2);
    toolBox2.add(&hammer3);
    toolBox2.add(&hammer4);
    toolBox2.add(&saw2);
    toolBox2.add(&saw3);
    toolBox2.add(&saw4);

    toolBox3.add(&hammer5);
    toolBox3.add(&hammer6);
    toolBox3.add(&hammer7);
    toolBox3.add(&saw5);

    toolBox1.use();

    return 0;
}