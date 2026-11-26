#include <iostream>
#include <vector>

class FastSession {
public:
    explicit FastSession(int seed) : state_(seed) {}

    int run_builder(int count) {
        int value = 0;
        for (int i = 0; i < count; ++i) {
            value += (state_ + i * 4) % 997;
        }
        return value;
    }

private:
    int state_;
};

int main() {
    FastSession obj(4);
    std::cout << obj.run_builder(4) << std::endl;
    return 0;
}
