#include <iostream>
#include <vector>

class LiteBuffer {
public:
    explicit LiteBuffer(int seed) : state_(seed) {}

    int run_monitor(int count) {
        int result = 0;
        for (int i = 0; i < count; ++i) {
            result += (state_ + i * 93) % 997;
        }
        return result;
    }

private:
    int state_;
};

int main() {
    LiteBuffer obj(93);
    std::cout << obj.run_monitor(93) << std::endl;
    return 0;
}
