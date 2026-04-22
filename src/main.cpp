#include <platform.hpp>

int main() {
    Aloha::init(800, 480, "Snake");
    
    while (!Aloha::shouldClose()) {
        Aloha::beginDrawing({0, 0, 0, 255});

        // Aloha::drawRectangle(100, 100, 200, 150, {255, 0, 0, 255});
        // Aloha::drawCircle(400, 300, 50, {0, 0, 255, 255});

        Aloha::drawRectangle(50, 50, 100, 75, {255, 0, 0, 255});
        Aloha::drawCircle(200, 150, 25, {0, 0, 255, 255});

        Aloha::drawText("Hello, Aloha!", 300, 200, 20, {255, 255, 255, 255});

        Aloha::endDrawing();
    }

    Aloha::close();
    return 0;
}