#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Item
{
public:
	int value, weight;
	Item(int val, int wei) {
		value = val;
		weight = wei;
	}
};

bool Compare(Item a, Item b) {
	double r1 = (double)a.value / a.weight;
	double r2 = (double)a.value / a.weight;

	return r1 > r2;
}

double FractionalKnapsack(int W, Item arr[], int n) {
	sort(arr, arr + n, Compare);

	int curWeight = 0;
	double finalValue = 0.0;

	for (int i = 0; i < n; ++i)
	{
		if (curWeight + arr[i].weight <= W)
		{
			curWeight += arr[i].weight;
			finalValue += arr[i].value;
		}

		else {
			int remain = W - curWeight;
			finalValue += arr[i].value * ((double)remain) / arr[i].weight;
			break;
		}
	}
	return finalValue;
}

int main(){
	int W = 50;

	Item arr[] = {{60, 10}, {100, 20}, {120, 30},{10,40},{60,70}}; 

	int n = sizeof(arr)/sizeof(arr[0]);

	int MaxRes = FractionalKnapsack(W,arr,n);

	cout << "Maximum Value That Can Be Obtained = " << MaxRes;

	return 0;
}


