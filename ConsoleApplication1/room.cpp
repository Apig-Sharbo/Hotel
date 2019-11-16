
#include "room.h"
#include <iostream>
using namespace std;

room::room()
{
	cost = 0;
	vip = 0;
	avail = 0;
	NumberOfRooms = 0;
}
void room::input()
{
	cout << "\tVIP or NO? "; cin >> vip;   // input 1 for VIP, 0 for NO
	cout << "\tInput cost: "; cin >> cost;
	cout << "\tInput number of rooms: "; cin >> NumberOfRooms;
}

bool room::get_vip()
{
	return vip;
}
bool room::get_avail()
{
	return avail;
}
double room::get_cost()
{
	return cost;
}
void room::print()
{
	cout << "\tVIP or NO? "<<vip;
	cout << "\tcost: "<<cost;
	cout << "\tnumber of rooms: "<<NumberOfRooms;
	cout << "\troom availability: " << avail;
}

room::~room()
{
}
