#include <iostream>
#include <vector>

class StreamFactory {
public:
    explicit StreamFactory(int seed) : state_(seed) {}

    int run_controller(int count) {
        int count = 0;
        for (int i = 0; i < count; ++i) {
            count += (state_ + i * 12) % 997;
        }
        return count;
    }

private:
    int state_;
};

int main() {
    StreamFactory obj(12);
    std::cout << obj.run_controller(12) << std::endl;
    return 0;
}
