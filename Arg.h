#ifndef __ARG_H_
#define __ARG_H_

#include "Element.h"
#include <iostream>
using namespace std;

class Feeder;
class Environment;

class Arg : public Element
{
public:
	Arg(Feeder *f,Environment *env);
	virtual ~Arg();
	virtual void print(int indent_level = 0);
	const char *getOriginalString(void){return m_text.c_str();}
	const char *getEvaledString(void){return m_evaled_text.c_str();}

	virtual bool eval(void);
	virtual int exec(void);
	virtual bool parse(void);

	void printOriginalString(void);
protected:
	string m_text;
	string m_evaled_text;

	bool m_is_variable;

};
#endif
