// Majority element.
#include <iostream>
#include <cmath>
using namespace std;


int findMajority(int arr[], int n)
{
	for(int i = 0; i < n; i++)
	{
		int count = 1;

		for(int j = i + 1; j < n; j++)
		{
			if(arr[i] == arr[j])
				count++;
		}

		if(count > n / 2)
			return i;
	}

	return -1;
}



int main() {

     int arr[] = {3,7,4,7,7,5}, n = 6;

     cout<<findMajority(arr, n);

}
