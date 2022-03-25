#include<iostream>
#include<thread>

using namespace std;

void print()
{
	for (int i = 1; i <= 20; i++)
	{
		if (i % 2 != 0)
		{
			cout << i << "odd" << endl;
			this_thread::sleep_for(chrono::milliseconds(1000));
		}
		else if(i % 2 == 0)
		{
			cout << i << "even" << endl;
			this_thread::sleep_for(chrono::milliseconds(2500));
		}
	}
	cout << "finished" << endl;
}

int main()
{
	thread th(print);
	
	th.join();
	
	return 0;
}

