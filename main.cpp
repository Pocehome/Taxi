#include "Car.h"
#include "Driver.h"
#include "Engine.h"
#include "Lorry.h"
#include "Sportcar.h"

int main() {
	// sportcar
	Driver driver_1;
	driver_1.name = "Vitalic";
	driver_1.driving_exp = 12;

	Engine engine_1;
	engine_1.power = 200;
	engine_1.date_of_manufacture = 2010;

	Sportcar sportcar_1;
	sportcar_1.engine = engine_1;
	sportcar_1.driver = driver_1;
	sportcar_1.max_speed = 200;
	sportcar_1.color = "yellow";
	sportcar_1.car_mark = "Mercedes";

	sportcar_1.check_status();
	sportcar_1.send_on_way();
	sportcar_1.check_status();
	sportcar_1.send_on_parking();
	sportcar_1.check_status();

	// lorry
	Driver driver_2;
	driver_1.name = "Gena";
	driver_1.driving_exp = 25;

	Engine engine_2;
	engine_1.power = 300;
	engine_1.date_of_manufacture = 2000;

	Lorry lorry_1;
	lorry_1.engine = engine_2;
	lorry_1.driver = driver_2;
	lorry_1.lifting_capacity = 3000;
	lorry_1.color = "orange";
	lorry_1.car_mark = "Kamaz";

	lorry_1.check_status();
	lorry_1.send_on_way();
	lorry_1.check_status();
	lorry_1.send_on_parking();
	lorry_1.check_status();
}
