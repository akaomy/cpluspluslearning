#include <iostream>
#include <vector>

using namespace std;

void vector1(void);
void vector2(void);
void vector3(void);


int main(void)
{
	cout << "Welcome to vectors" << endl;
	int n = 5;
	vector<int> a1(n, 10); //initialize all elements to 0

	cout << "a1 = ";
	//for (int val : a1)
	for (auto val : a1)
	{
		cout << val << " ";
	}
	cout << endl;
	cout << endl;

	cout << "a1 = ";
	for (int i = 0; i < a1.size(); i++)
		cout << a1[i] << " ";
	cout << endl;
	cout << endl;

	cout << "a1 = ";
	for (auto val = a1.begin(); val != a1.end(); val++)
		cout << *val << " ";
	cout << endl;
	cout << endl;

	vector<int> a2 = { 5, 10, 15, 20, 25 };
	cout << "a2 = ";
	for (int val : a2)
		cout << val << " ";
	cout << endl;
	cout << endl;

	cout << "a2 = ";
	for (int i = 0; i < a2.size(); i++)
		cout << a2[i] << " ";
	cout << endl;
	cout << endl;

	cout << "a2 = ";
	for (auto val = a2.begin(); val != a2.end(); val++)
		cout << *val << " ";
	cout << endl;
	cout << endl;

	//https://en.cppreference.com/w/cpp/algorithm
	std::reverse(a2.begin(), a2.end());
	cout << "a2 = ";
	for (int val : a2)
		cout << val << " ";
	cout << endl;
	cout << endl;


	vector<int> a3;
	a3.push_back(10);
	a3.push_back(20);
	a3.push_back(30);
	a3.push_back(40);

	cout << "a3 = ";
	for (int val : a3)
		cout << val << " ";
	cout << endl;
	cout << endl;

	vector1();
	vector2();
	vector3();

	return 0;
}

void vector1(void)
{
	cout << "main1()" << endl;
	vector<int> g1;

	for (int i = 1; i <= 5; i++)
		g1.push_back(i);

	cout << "Output of begin and end: ";
	for (auto i = g1.begin(); i != g1.end(); ++i)
		cout << *i << " ";

	cout << "\nOutput of cbegin and cend: ";
	for (auto i = g1.cbegin(); i != g1.cend(); ++i)
		cout << *i << " ";

	cout << "\nOutput of rbegin and rend: ";
	for (auto ir = g1.rbegin(); ir != g1.rend(); ++ir)
		cout << *ir << " ";

	cout << "\nOutput of crbegin and crend : ";
	for (auto ir = g1.crbegin(); ir != g1.crend(); ++ir)
		cout << *ir << " ";
	cout << endl;

	return;
}

void vector2(void)
{
	cout << "vector2()" << endl;

	cout << "vector2()" << endl;
	vector<int> myvector{ 1, 2, 3, 4, 5 };
	vector<int>::iterator it;

	it = myvector.begin();
	myvector.erase(it);

	myvector.emplace(myvector.begin(), 10);
	myvector.emplace_back(20);

	// Printing the Vector 
	for (auto it = myvector.begin(); it != myvector.end(); ++it)
		cout << ' ' << *it;
	cout << endl;
}

void vector3(void)
{
	cout << "vector3()" << endl;
	// Assign vector 
	vector<int> v;
	// fill the array with 10 five times 
	v.assign(5, 10);
	cout << "The vector elements are: ";
	for (unsigned int i = 0; i < v.size(); i++)
		cout << v[i] << " ";

	// inserts 15 to the last position 
	v.push_back(15);
	size_t n = v.size();
	cout << "\nThe last element is: " << v[n - 1];

	// removes last element 
	v.pop_back();

	// prints the vector 
	cout << "\nThe vector elements are: ";
	for (size_t i = 0; i < v.size(); i++)
		cout << v[i] << " ";

	// inserts 5 at the beginning 
	v.insert(v.begin(), 5);
	cout << "\nThe first element is: " << v[0];
	// removes the first element 
	v.erase(v.begin());
	cout << "\nThe first element is: " << v[0];

	// inserts at the beginning 
	v.emplace(v.begin(), 5);
	cout << "\nThe first element is: " << v[0];

	// Inserts 20 at the end 
	v.emplace_back(20);
	n = v.size();
	cout << "\nThe last element is: " << v[n - 1];

}