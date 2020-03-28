#include <iostream>
#include "donlist.h"
using namespace std;

int main()
{
	double funds[] = { 5, 100, 5, 25, 10, 5, 25, 5, 5, 100, 10, 15, 10, 5, 10 };

	DonationList ckGrphics(15, funds);
	cout << "The donations sorted in ascending order are: \n";
	ckGrphics.showSorted();
	cout << "The donations in their original order are: \n";
	ckGrphics.show();

	return 0;
}