#include "app.h"
#include <string>
#include <iostream>

using namespace vsite::oop::v4;

// read animal id's (until 0) and display species name
// display total leg count
int main() {

	int unos;
	leg_counter legCounter;

	while (true) {
		std::cout << "Unesite broj zivotinje: ";
		std::cin >> unos;

		if (unos > 4) {
			continue;
		}

		if (unos == 0) {
			std::cout << legCounter.legs();
			break;
		}

		std::cout << legCounter.add_animal(animal_factory(unos).get()) << std::endl;
	}

}
