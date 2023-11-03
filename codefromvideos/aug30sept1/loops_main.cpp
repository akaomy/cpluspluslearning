#include <iostream>
#include <vector>
using namespace std;

int main(void)
{
	cout << "Welcome to loops!" << endl; 
	//for loop; while loop; do-while loop

	const int num = 5;
	int count = 0;

	//two infinite loops; with terminating conditions
	cout << "Infinite while loop with a terminating condition." << endl;
	count = 0;
	while (true)
	{
		cout << "count = " << count << endl;
		count++; // count = count + 1;
		if (count > num)
			break; //exit the inner loop
	}
	
	cout << "Infinite for loop with a terminating condition." << endl;
	count = 0; //reset counter
	for (;;)
	{
		cout << "count = " << count << endl;
		count++; // count = count + 1;
		if (count > num)
			break; //exit the inner loop
	}

	//for any loop, we have: start; stop; increment
	//initial, final, change

	//up==========================================
	//for loop - going up by 1 
	cout << "for loop - going up by 1" << endl;
	//(start; stop; increment)
	for (int count = 0; count <= num; count++)
	{
		cout << "count = " << count << endl;
	}
	cout << endl;

	//while loop - going up by 1 
	cout << "while loop - going up by 1" << endl;
	count = 0; //start
	while (count <= num) //stop
	{
		cout << "count = " << count << endl;
		count++; //increment
	}
	cout << endl;

	//do-while loop - going up by 1 
	cout << "do-while loop - going up by 1" << endl;
	count = 0; //start
	do
	{
		cout << "count = " << count << endl;
		count++; //increment
	} while (count <= num); //stop
	cout << endl;

	//down==========================================
	//for loop - going down by 1 
	cout << "for loop - going down by 1" << endl;
	//(start; stop; decrement)
	for (int count = num; count >= 0; count--)
	{
		cout << "count = " << count << endl;
	}
	cout << endl;

	//while loop - going down by 1 
	cout << "while loop - going down by 1" << endl;
	count = num; //start
	while (count >= 0) //stop
	{
		cout << "count = " << count << endl;
		count--; //decrement
	}
	cout << endl;

	//do-while loop - going down by 1 
	cout << "do-while loop - going down by 1" << endl;
	count = num; //start
	do
	{
		cout << "count = " << count << endl;
		count--; //decrement
	} while (count >= 0); //stop
	cout << endl;

	//up==========================================
	//for loop - going up by 2 
	cout << "for loop - going up by 2" << endl;
	//(start; stop; increment)
	for (int count = 0; count <= num; count += 2) //count = count + 2;
	{
		cout << "count = " << count << endl;
	}
	cout << endl;

	//while loop - going up by 2 
	cout << "while loop - going up by 2" << endl;
	count = 0; //start
	while (count <= num) //stop
	{
		cout << "count = " << count << endl;
		count += 2; //increment
	}
	cout << endl;

	//do-while loop - going up by 2 
	cout << "do-while loop - going up by 2" << endl;
	count = 0; //start
	do
	{
		cout << "count = " << count << endl;
		count += 2; //increment
	} while (count <= num); //stop
	cout << endl;

	//use two variables ============================
	//simple for loop - 2 variables
	cout << "for loop - 2 variables" << endl;
	//(start; stop; inc/dec)
	for (int i = 2, j = 3; i < 25 && j < 25; i += 2, j += 3)
	{
		cout << "i = " << i << ", j= " << j << endl;
	}
	cout << endl;

	//simple while loop - 2 variables
	cout << "while loop - 2 variables" << endl;
	//(start; stop; inc/dec)
	int i = 2, j = 3;
	while (i < 25 && j < 25)
	{
		cout << "i = " << i << ", j= " << j << endl;
		i += 2;
		j += 3;
	}
	cout << endl;

	//simple while loop - 2 variables
	cout << "do-while loop - 2 variables" << endl;
	//(start; stop; inc/dec)
	i = 2;
	j = 3;
	do
	{
		cout << "i = " << i << ", j= " << j << endl;
		i += 2;
		j += 3;
	} while (i < 25 && j < 25);
	cout << endl;

	//looping in containers; vector is an example
	vector<int> a;
	for (int i = 0; i <= num; i++)
	{
		a.push_back(i*2);
	}

	//loop like in an array
	for (int i = 0; i <= num; i++) //i is the index
	{
		cout << "a[" << i << "] = " << a[i] << endl;
	}
	cout << endl;

	for (auto i : a) //for every element in the container a
		//auto means the compiler will decide the type
	{
		cout << "i = " << i << endl; //i is the element
	}

	return 0;


}