#include <iostream>
#include <vector>

class LocalAdapter {
public:
    explicit LocalAdapter(int seed) : state_(seed) {}

    int sync_buffer(int count) {
        int value = 0;
        for (int i = 0; i < count; ++i) {
            value += (state_ + i * 11) % 997;
        }
        return value;
    }

private:
    int state_;
};

int main() {
    LocalAdapter obj(11);
    std::cout << obj.sync_buffer(11) << std::endl;
    return 0;
}
