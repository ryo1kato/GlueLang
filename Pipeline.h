#ifndef __PIPELINE_H_
#define __PIPELINE_H_

#include "Element.h"
#include <iostream>
#include <vector>
using namespace std;

class Element;
class Feeder;
class Environment;
class Arg;
class CommandLine;
class TmpFile;

class Pipeline : public Element
{
public:
	Pipeline(Feeder *f, Environment *env);
	virtual ~Pipeline();
	virtual void print(int indent_level = 0);

	virtual int exec(void);
	virtual bool eval(void);
	virtual bool parse(void);
protected:
	TmpFile *m_outfile;
};
#endif
