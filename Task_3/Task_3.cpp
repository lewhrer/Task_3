#include <iostream>
#include "CounterOfCode.h"
using namespace std;

int main()
{
	string path("C://SoftSerw//TEST1");
	//string path("C:/boost_1_72_0/boost");
	
	
	/*string path("C://SoftSerw//example");
	string pathOutput("C:/SoftSerw/example/output.txt");
	try
	{
		counter(path, pathOutput);

	}
	catch (exception & exc)
	{
		cout << exc.what() << endl;
	}*/
	//string path("C://Test");
	string pathOutput("C:/Test/output.txt");
	counter(path, pathOutput);
	ifstream output(pathOutput);
	
}