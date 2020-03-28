#include "donlist.h"
#include <iostream>
using namespace std;

DonationList::DonationList(int num, double gifts[])
{
	numbDonations = num;
	if (num > 0) {
		//Allocate an array of doubles
		donations = new double[num];
		//Allocate an array of pointers to doubles
		arrPtr = new double* [num];
		//Initilize the arrays
		for (int count = 0; count < numbDonations; count++) {
			donations[count] = gifts[count];
			arrPtr[count] = &donations[count];
		}
		//Call the sort class function
		selectSort();
	}
}
DonationList::~DonationList()
{
	delete donations;
	donations = 0;
	delete arrPtr;
	arrPtr = 0;
}

void DonationList::selectSort()
{
	int minIndex;
	double* minElem;

	for (int scan = 0; scan < (numbDonations - 1); scan++)
	{
		minIndex = scan;
		minElem = arrPtr[scan];

		for (int index = scan + 1; index < numbDonations; index++)
		{
			if (*(arrPtr[index]) < *minElem )
			{
				minIndex = index;
				minElem = (arrPtr[index]);
			}
		}
		arrPtr[minIndex] = arrPtr[scan];
		arrPtr[scan] = minElem;
	}
}

void DonationList::show()
{
	for (int index = 0; index < numbDonations; index++)
	{
		cout << donations[index] << " " << endl;
	}
}

void DonationList::showSorted()
{
	for (int index = 0; index < numbDonations; index++)
	{
		cout << *(arrPtr[index]) << " " << endl;
	}
}
