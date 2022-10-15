#include <iostream>
#include "barchartanimate.h"
using namespace std;


bool testBarDefaultConstructor() {
	Bar b;
    if (b.getName() != "") {
    	cout << "testBarDefaultConstructor: getName failed" << endl;
    	return false;
    } else if (b.getValue() != 0) {
    	cout << "testBarDefaultConstructor: getValue failed" << endl;
    	return false;
    } else if (b.getCategory() != "") {
    	cout << "testBarDefaultConstructor: getCategory failed" << endl;
    	return false;
    }
    cout << "testBarDefaultConstructor: all passed!" << endl;
    return true;
}

bool testBarParamConstructor() {
	Bar b("Chicago", 9234324, "US");
    if (b.getName() != "Chicago") {
    	cout << "testBarParamConstructor: getName failed" << endl;
    	return false;
    } else if (b.getValue() != 9234324) {
    	cout << "testBarParamConstructor: getValue failed" << endl;
    	return false;
    } else if (b.getCategory() != "US") {
    	cout << "testBarParamConstructor: getCategory failed" << endl;
    	return false;
    }
    cout << "testBarParamConstructor: all passed!" << endl;
    return true;
}

void testDefualtBarChart(){
	
}
void testGraph() {
	BarChart bc(10);
	bc.addBar("Chicago", 1020,"US");
	bc.addBar("Paris", 1200,"France");
	bc.addBar("NYC", 1300,"US");

	string red("\033[1;36m");
	string blue("\033[1;33m");
	map<string, string> colorMap;
	colorMap["US"] = red;
	colorMap["France"] = blue;
	bc.graph(cout, colorMap, 4);
}

int main() {
	testBarDefaultConstructor();
	testBarParamConstructor();
	testGraph();
	
    return 0;
}