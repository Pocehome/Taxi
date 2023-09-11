#pragma once
#include <string>
#include <iostream>
#include "Driver.h"
#include "Engine.h"

class Car {
public:
	Engine engine;
	Driver driver;
	std::string color;
	std::string car_mark;
	bool is_on_parking = true;

	bool check_status();
	void send_on_way();
	void send_on_parking();
};
