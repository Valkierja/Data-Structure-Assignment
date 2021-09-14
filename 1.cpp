#include<iostream>
#include <string>
#include<vector>
using namespace std;
vector<vector<int>> x;
void SumTable(vector<vector<int>> a) {
	int result=0;
	for (auto i = a.begin(); i !=a.end() ; i++)
	{
		for (auto j = i->begin(); j != i->end(); j++)
		{
			result += *j;
		}
	}
}

void TriSort() {
	int input1, input2, input3;
	cin >> input1 >> input2 >> input3;
	int sum = input1 + input2 + input3;
	int sorted1, sorted2, sorted3;//sorted1 min
	sorted1 = input1 < input2 ? (input1 < input3 ? input1 : input3) : (input2 < input3 ? input2 : input3);//min
	sorted3 = input1 > input2 ? (input1 > input3 ? input1 : input3) : (input2 > input3 ? input2 : input3);
	sorted2 = sum - sorted1 - sorted3;
	cout << sorted1 <<endl<< sorted2 << endl << sorted3 << endl;
}

void NumSort() {
	vector<int> x;
	int temp;
	while (cin >> temp) x.push_back(temp);
	int max, min;
	min = x[0] < x[1] ? x[0] : x[1];
	max = x[0] > x[1] ? x[0] : x[1];
	
	for (size_t i = 2; i < x.size(); i++)
	{
		if (min>x[i])
		{
			min = x[i];
			continue;
		}
		if(max<x[i])
		{
			max = x[i];
			continue;
		}
	}
	system("pause");
}

int main() {
	TriSort();
	return 0;
}