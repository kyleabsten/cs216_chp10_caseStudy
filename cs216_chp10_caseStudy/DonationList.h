#pragma once
class DonationList
{
private:
	int numbDonations;
	double* donations;
	double** arrPtr;
	void selectSort();

public:
	DonationList(int num, double gifts[]);
	~DonationList();
	void show();
	void showSorted();
};

