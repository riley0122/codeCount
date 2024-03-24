#include <iostream>

int main(int argc, char *argv[]) {
    if (argc < 2) {
        std::cout << "Usage: " << argv[0] << " <file>" << " [options]" << std::endl;
        return 1;
    }
}