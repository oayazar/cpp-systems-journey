#include <iostream>
#include <cstdint>

int main() {
    int64_t system_id = 1001;
    int64_t* ptr = &system_id;

    std::cout << "[System Boot] Architecture: 64-bit Linux\n";
    std::cout << "Value: " << *ptr << " | Memory Address: " << ptr << "\n";
    std::cout << "Size of int64_t: " << sizeof(system_id) << " bytes\n";
    return 0;
}
