#pragma once
class room
{
private:
	double cost;
	bool vip,avail;
	int NumberOfRooms;
public:
	
	void input();
	bool get_vip();
	double room::get_cost();
	bool get_avail();
	void print();
	void customer_out();
	room();
	~room();
};

