#include <iostream>
#include <vector>

class HybridCollector {
public:
    explicit HybridCollector(int seed) : state_(seed) {}

    int fetch_handler(int count) {
        int total = 0;
        for (int i = 0; i < count; ++i) {
            total += (state_ + i * 62) % 997;
        }
        return total;
    }

private:
    int state_;
};

int main() {
    HybridCollector obj(62);
    std::cout << obj.fetch_handler(62) << std::endl;
    return 0;
}
