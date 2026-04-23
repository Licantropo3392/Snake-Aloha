#include <Aloha.hpp>

int main() {
    Aloha::init(800, 480, "Snake");

    Aloha::Rectangle rect1(100, 100, 200, 150, {255, 0, 0, 255});
    Aloha::Circle circle1(400, 300, 50, {0, 0, 255, 255});
    Aloha::Text text1("Hello, Aloha!", 10, 10, 30, {255, 255, 255, 255});
    
    while (!Aloha::shouldClose()) {
        Aloha::beginDrawing({0, 0, 0, 255});

        // Aloha::drawRectangle(100, 100, 200, 150, {255, 0, 0, 255});
        // Aloha::drawCircle(400, 300, 50, {0, 0, 255, 255});

        rect1.draw();
        circle1.draw();
        text1.draw();

        Aloha::endDrawing();
    }

    Aloha::close();
    return 0;
}