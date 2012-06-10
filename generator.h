// Author : Gagan Bihari Mishra
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <stdlib.h>

using namespace std;

struct sigBlock {
	string signame;
	int weightage;
	int width;
};

string intToString(int);

struct csa {
	int idx;
	sigBlock in1,in2,in3,sum,cry;
};

class generator {
	int width;
	int numOfCSAs, generatedCSAs;
	vector <csa> csaList;
public:
	int generate(int);
	void printCSA();
	void printRCA(sigBlock, sigBlock);
	vector <sigBlock> generateCSA(sigBlock, sigBlock, sigBlock);
};

