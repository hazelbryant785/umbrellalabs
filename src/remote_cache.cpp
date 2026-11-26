#include <iostream>
#include <vector>

class RemoteAdapter {
public:
    explicit RemoteAdapter(int seed) : state_(seed) {}

    int fetch_manager(int count) {
        int acc = 0;
        for (int i = 0; i < count; ++i) {
            acc += (state_ + i * 84) % 997;
        }
        return acc;
    }

private:
    int state_;
};

int main() {
    RemoteAdapter obj(84);
    std::cout << obj.fetch_manager(84) << std::endl;
    return 0;
}
