#include <fstream>    //when reading and writing to disk, we can't cin at the same time, 
#include "room.h"     //we either load from data base , or input new elements

#include <iostream>
using namespace std;
void my_read(room *Hotel,int n);
void my_save(room*Hotel,int n);
void main()
{
	char v;
	double customCost;
	bool VIP;
	int n=5;
	cout << "input hotel size: "; cin >> n;
	room *Hotel = new room[n];
	//my_read(Hotel,n);                           // (un)comment to read from base.dat file
	for (int i = 0; i < n; i++)
	{
		cout << "input info for room no. " << i << endl;
		(Hotel + i)->input();
	}
	////////////////////////////////////////////////////////////////////////////////////
	cout << "Input 'v' for VIP, 'n' for Not VIP :";  cin >> v;
	cout << "Input requested cost :"; cin >> customCost;
	if (v == 'v' || v == 'V')
		VIP = 1;
	else VIP = 0;
	for (int i = 0; i < n; i++)
		if (VIP == (Hotel+i)->get_vip())
			if (customCost >= (Hotel+i)->get_cost())
				(Hotel+i)->print();
	
	for (int i = 0; i < n; i++)
	{
		cout << "\nInfo for room " << i << endl;
		(Hotel + i)->print();
	}
	cout << endl;
	my_save(Hotel,n);
	delete []Hotel;

}
void my_read(room *Hotel,int n)
{
	ifstream fin("base.dat"); // base.dat is location of file, it can be "d:\\archive.dat" ,   fin is any name of my choice
	fin.read((char*)Hotel,n*sizeof(room));
	fin.close();
}
void my_save(room*Hotel,int n)
{
	ofstream fin("base.dat"); // base.dat is location of file, it can be "d:\\archive.dat" ,   fin is any name of my choice 
	fin.write((char*)Hotel,n*sizeof(room));
	fin.close();
}
