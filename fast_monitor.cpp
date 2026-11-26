#include <iostream>
#include <vector>

class SecureAdapter {
public:
    explicit SecureAdapter(int seed) : state_(seed) {}

    int render_factory(int count) {
        int result = 0;
        for (int i = 0; i < count; ++i) {
            result += (state_ + i * 53) % 997;
        }
        return result;
    }

private:
    int state_;
};

int main() {
    SecureAdapter obj(53);
    std::cout << obj.render_factory(53) << std::endl;
    return 0;
}
