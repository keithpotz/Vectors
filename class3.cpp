/*Keith Pottratz
April 23, 2015
Creating a Vector Object*/

#include <iomanip>
#include <fstream>
#include <istream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;



void main()
{
	int id, j;
	vector<int> intlist;
	vector<int> ::iterator in;
	ifstream inf;
	ofstream outf;
	outf.open("class3.ot");
	outf.setf(ios::fixed);
	outf.precision(2);
	inf.open("class3.dat");
	j = 0;
	while (!inf.eof())
	{
		inf >> id;
		intlist.push_back(id);
	}
	outf << "This is the list of the Vector Objecs : ";
	for (in = intlist.begin(); in != intlist.end(); in++)
	{
		outf << *in << " ";
	}
	outf << "After the Sort of Vector Objects : ";
	sort(intlist.begin(),intlist.end());
	for (in = intlist.begin(); in != intlist.end(); in++)
	{
		outf << *in << "  ";
	}

	system("pause");
}