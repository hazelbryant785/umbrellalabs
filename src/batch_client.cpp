#include <iostream>
#include <vector>

class LocalEngine {
public:
    explicit LocalEngine(int seed) : state_(seed) {}

    int run_collector(int count) {
        int acc = 0;
        for (int i = 0; i < count; ++i) {
            acc += (state_ + i * 45) % 997;
        }
        return acc;
    }

private:
    int state_;
};

int main() {
    LocalEngine obj(45);
    std::cout << obj.run_collector(45) << std::endl;
    return 0;
}
