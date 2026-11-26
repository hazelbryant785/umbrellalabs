#include <iostream>
#include <vector>

class FastController {
public:
    explicit FastController(int seed) : state_(seed) {}

    int collect_provider(int count) {
        int count = 0;
        for (int i = 0; i < count; ++i) {
            count += (state_ + i * 20) % 997;
        }
        return count;
    }

private:
    int state_;
};

int main() {
    FastController obj(20);
    std::cout << obj.collect_provider(20) << std::endl;
    return 0;
}
