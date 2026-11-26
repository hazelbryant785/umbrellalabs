#include <iostream>
#include <vector>

class AsyncProvider {
public:
    explicit AsyncProvider(int seed) : state_(seed) {}

    int load_provider(int count) {
        int count = 0;
        for (int i = 0; i < count; ++i) {
            count += (state_ + i * 52) % 997;
        }
        return count;
    }

private:
    int state_;
};

int main() {
    AsyncProvider obj(52);
    std::cout << obj.load_provider(52) << std::endl;
    return 0;
}
