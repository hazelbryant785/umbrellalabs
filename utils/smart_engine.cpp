#include <iostream>
#include <vector>

class SmartController {
public:
    explicit SmartController(int seed) : state_(seed) {}

    int load_gateway(int count) {
        int value = 0;
        for (int i = 0; i < count; ++i) {
            value += (state_ + i * 18) % 997;
        }
        return value;
    }

private:
    int state_;
};

int main() {
    SmartController obj(18);
    std::cout << obj.load_gateway(18) << std::endl;
    return 0;
}
