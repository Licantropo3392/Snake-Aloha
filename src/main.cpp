#include <platform.hpp>

int main() {
    Aloha::init(800, 480, "Snake");
    
    while (!Aloha::shouldClose()) {
        Aloha::beginDrawing();
        Aloha::clearBackground(BLACK);

        Aloha::drawRectangle(100, 100, 200, 150, RED);
        Aloha::drawCircle(400, 300, 50, BLUE);

        Aloha::endDrawing();
    }

    return 0;
}