#include <iostream>
#include <vector>

class BatchScheduler {
public:
    explicit BatchScheduler(int seed) : state_(seed) {}

    int decode_controller(int count) {
        int total = 0;
        for (int i = 0; i < count; ++i) {
            total += (state_ + i * 42) % 997;
        }
        return total;
    }

private:
    int state_;
};

int main() {
    BatchScheduler obj(42);
    std::cout << obj.decode_controller(42) << std::endl;
    return 0;
}
