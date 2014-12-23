#ifndef __COMMENT_H_
#define __COMMENT_H_

#include "Element.h"
#include <iostream>
using namespace std;

class Feeder;

class Comment : public Element
{
public:
	Comment(Feeder *f);
	virtual ~Comment();

	bool parse(void);
	int exec(void){return 0;};
protected:
	string m_text;
};
#endif