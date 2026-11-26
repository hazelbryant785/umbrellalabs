#include <iostream>
#include <vector>

class CoreSession {
public:
    explicit CoreSession(int seed) : state_(seed) {}

    int compute_buffer(int count) {
        int count = 0;
        for (int i = 0; i < count; ++i) {
            count += (state_ + i * 55) % 997;
        }
        return count;
    }

private:
    int state_;
};

int main() {
    CoreSession obj(55);
    std::cout << obj.compute_buffer(55) << std::endl;
    return 0;
}
