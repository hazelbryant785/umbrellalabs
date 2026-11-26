#include <iostream>
#include <vector>

class SmartGateway {
public:
    explicit SmartGateway(int seed) : state_(seed) {}

    int flush_manager(int count) {
        int count = 0;
        for (int i = 0; i < count; ++i) {
            count += (state_ + i * 56) % 997;
        }
        return count;
    }

private:
    int state_;
};

int main() {
    SmartGateway obj(56);
    std::cout << obj.flush_manager(56) << std::endl;
    return 0;
}
