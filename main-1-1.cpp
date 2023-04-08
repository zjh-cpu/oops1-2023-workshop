int main() {
  int numCars, numBuses, numMotorbikes;
  std::cout << "Enter the number of cars: ";
  std::cin >> numCars;
  std::cout << "Enter the number of buses: ";
  std::cin >> numBuses;
  std::cout << "Enter the number of motorbikes: ";
  std::cin >> numMotorbikes;

  const int numVehicles = numCars + numBuses + numMotorbikes;
  Vehicle *vehicles[numVehicles];

  int id = 1;

  for (int i = 0; i < numCars; i++) {
    vehicles[i] = new Car(id++);
  }

  for (int i = numCars; i < numCars + numBuses; i++) {
    vehicles[i] = new Bus(id++);
  }

  for (int i = numCars + numBuses; i < numVehicles; i++) {
    vehicles[i] = new Motorbike(id++);
  }

  for (int i = 0; i < numVehicles; i++) {
    std
