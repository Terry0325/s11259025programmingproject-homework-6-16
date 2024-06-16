#include<iostream>
#include"unerviaitystaff.h"
#include"student.h"

using namespace std;
int
main(void)
{
	ScienceStudent a, b("Tinan", 2, "bob", "good", "math");

	cout << a;
	cin >> a;
	cout << a;
	cout << b;
	ScienceStudent c = b;
	cout << c;


}