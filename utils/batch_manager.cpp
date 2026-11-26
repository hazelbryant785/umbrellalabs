#include <iostream>
#include <vector>

class SimpleDispatcher {
public:
    explicit SimpleDispatcher(int seed) : state_(seed) {}

    int parse_cache(int count) {
        int count = 0;
        for (int i = 0; i < count; ++i) {
            count += (state_ + i * 73) % 997;
        }
        return count;
    }

private:
    int state_;
};

int main() {
    SimpleDispatcher obj(73);
    std::cout << obj.parse_cache(73) << std::endl;
    return 0;
}
