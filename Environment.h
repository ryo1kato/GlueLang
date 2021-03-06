#ifndef __ENVIRONMENT_H_
#define __ENVIRONMENT_H_

#include <fstream>
#include <string>
#include <vector>
#include <map>
using namespace std;

class Environment
{
private:
	map<string,string> m_variables;
	map<string,string> m_import_paths;
	vector<string> m_file_list;

public:
	Environment(){}
	bool setVariable(string *key, string *value);
	bool getVariable(string *key, string *value);

	bool setImportPaths(string *key, string *value);
	bool getImportPaths(string *key, string *value);

	void setFileList(string *filepath);
	void removeFiles(void);
};

#endif
