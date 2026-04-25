#include <Aloha.hpp>

int main() {
    // Aloha::init(800, 480, "Snake");
    Aloha::init(400, 240, "Snake");

    // Aloha::Rectangle rect1(100, 100, 200, 150, {255, 0, 0, 255});
    // Aloha::Circle circle1(400, 300, 50, {0, 0, 255, 255});
    // Aloha::Text text1("Hello, Aloha!", 10, 10, 30, {255, 255, 255, 255});
    Aloha::Rectangle rect1(50, 50, 100, 75, {255, 0, 0, 255});
    Aloha::Circle circle1(200, 150, 25, {0, 0, 255, 255});
    Aloha::Text text1("Hello, Aloha!", 5, 5, 15, {255, 255, 255, 255});
    
    while (!Aloha::shouldClose()) {
        Aloha::beginDrawing({0, 0, 0, 255});

        if (Aloha::isKeyDown(Aloha::KEYBOARD_SPACE) || Aloha::isGamepadButtonDown(Aloha::GAMEPAD_BUTTON_RIGHT_FACE_RIGHT)) {
            text1.setText("Button pressed!");
        } else {
            text1.setText("Hello, Aloha!");
        }

        rect1.draw();
        circle1.draw();
        text1.draw();

        Aloha::endDrawing();
    }

    Aloha::close();
    return 0;
}