// BubbleSort.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>
using namespace std;
void bsort(int* mass,int s) {
	int f, i, j;
	clock_t start;
	double duration;

	start =clock();
	for (i = 0; i < s; i++) {		
		for (j = 0; j < s; j++) {
			if (mass[j] > mass[j + 1])
			{
				swap(mass[j], mass[j + 1]);
				
			}
		}		
	}
	duration = (clock() - start) / (double)CLOCKS_PER_SEC;

	cout << "time: " << duration <<" sec" <<'\n';
}void bsort_mod1(int* mass, int s) {
	int f, i, j;
	clock_t start;
	double duration;

	start = clock();
	for (i = 0; i < s; i++) {
		for (j = 0; j < s-1; j++) {
			if (mass[j] > mass[j + 1])
			{
				swap(mass[j], mass[j + 1]);

			}
		}
	}
	duration = (clock() - start) / (double)CLOCKS_PER_SEC;

	cout << "time: " << duration << " sec" << '\n';
}
int main()
{
	int n;
	cin >> n;
	int *myarry = new int[n]; // Выделение памяти для массива
	int *myarry1 = new int[n];
	
	for (int i = 0; i < n; i++)
	{
		myarry[i] = rand()% 100;
	}
	memcpy(myarry1, myarry, n);

	bsort(myarry,n-1);
	bsort_mod1(myarry1, n - 1);


	
	cout << endl;
	system("pause");
    return 0;
}

