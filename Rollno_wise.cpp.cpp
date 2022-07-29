/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
	int s1,s2,s3,s4,s5,c1a,c1b,c1c,c1d,c1e,c2a,c2b,c2c,c2d,c2e,c3a,c3b,c3c,c3d,c3e,c4a,c4b,c4c,c4d,c4e,c5a,c5b,c5c,c5d,c5e;

	cout << "ener the marks of each studends";
	cin >> s1 >> c1a >> c1b >> c1c >> c1d >> c1e;
	cin >> s2 >> c2a >> c2b >> c2c >> c2d >> c2e;
	cin >> s3>> c3a >> c3b >> c3c >> c3d >> c3e;
	cin >> s4 >> c4a >> c4b >> c4c >> c4d >> c4e;
	cin >> s5 >> c5a >> c5b >> c5c >> c5d >> c5e;

	int results1 = c1a+c1b+c1c+c1d+c1e;
	int results2 = c2a+c2b+c2c+c2d+c2e;
	int results3 = c3a+c3b+c3c+c3d+c3e;
	int results4 = c4a+c4b+c4c+c4d+c4e;
	int results5 = c5a+c5b+c5c+c5d+c5e;

	int maximumGrades = 0;
	int maxRollNumber = 0;

	if(results1>results2)
	{ maximumgrades = results1; maxs=s1; }
	else if(results2>results1)
	{ maximumgrades = results2; maxs=s2;}

	if(results3>maximumGrades)
	{ maximumgrades = results3; maxs=s3;}
	if(results4>maximumGrades)
	{ maximumgrades = results4; maxs=s4;}
	if(results5>maximumGrades)
	{ maximumgrades = results5; maxs=s5;}

	cout << maxRollNumber << " HAS greatest  Aggregate of " << maximumgrades <<endl;

	cout<<"invalid input";
	return 0;

}