#ifndef PiggyPLUGIN_H
#define PiggyPLUGIN_H

#include "Plugin.h"
#include "PluginProxy.h"
#include "Tool.h"
#include <string>

class PiggyPlugin : public Plugin, public Tool
{
public: 
 std::string toString() {return "Piggy";}
 void input(std::string file);
 void run();
 void output(std::string file);

private: 
 std::string inputfile;
 std::string outputfile;
};

#endif
