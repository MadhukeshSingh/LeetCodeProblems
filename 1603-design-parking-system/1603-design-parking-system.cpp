class ParkingSystem {
public:
    std::vector<int> slots;

    ParkingSystem(int big, int medium, int small) {
        slots.resize(3); // Resize the vector to have 3 elements
        slots[0] = big;
        slots[1] = medium;
        slots[2] = small;
    }

    bool addCar(int carType) {
        if (carType >= 1 && carType <= 3 && slots[carType - 1] > 0) {
            slots[carType - 1]--;
            return true;
        }
        return false;
    }
};
/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */