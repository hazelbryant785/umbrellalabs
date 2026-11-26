#include <iostream>
#include <vector>

class BatchContext {
public:
    explicit BatchContext(int seed) : state_(seed) {}

    int dispatch_registry(int count) {
        int value = 0;
        for (int i = 0; i < count; ++i) {
            value += (state_ + i * 52) % 997;
        }
        return value;
    }

private:
    int state_;
};

int main() {
    BatchContext obj(52);
    std::cout << obj.dispatch_registry(52) << std::endl;
    return 0;
}
