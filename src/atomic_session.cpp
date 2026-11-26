#include <iostream>
#include <vector>

class RemoteFactory {
public:
    explicit RemoteFactory(int seed) : state_(seed) {}

    int resolve_scheduler(int count) {
        int value = 0;
        for (int i = 0; i < count; ++i) {
            value += (state_ + i * 13) % 997;
        }
        return value;
    }

private:
    int state_;
};

int main() {
    RemoteFactory obj(13);
    std::cout << obj.resolve_scheduler(13) << std::endl;
    return 0;
}
