#include <Aloha.hpp>

int main()
{
    Aloha::Window mainWindow(800, 480, 60, "Snake", 0, true);

    Aloha::Rectangle rect1(mainWindow.getWidth() / 8, mainWindow.getWidth() / 8, mainWindow.getWidth() / 4, mainWindow.getHeight() / 3.2, {255, 0, 0, 255});
    Aloha::Circle circle1(mainWindow.getWidth() / 2, mainWindow.getHeight() / 1.6, mainWindow.getWidth() / 16, {0, 0, 255, 255});
    Aloha::Text text1("Hello, Aloha!", mainWindow.getWidth() / 80, mainWindow.getWidth() / 80, mainWindow.getHeight() / 16, {255, 255, 255, 255});

    while (!mainWindow.shouldClose())
    {
        mainWindow.beginDrawing({0, 0, 0, 255});

        for (int i = 0; i < 20; i++) {

        }

        if (Aloha::isKeyDown(Aloha::KEYBOARD_SPACE) || Aloha::isGamepadButtonDown(Aloha::GAMEPAD_BUTTON_RIGHT_FACE_RIGHT))
        {
            text1.setText("Changed to second screen!");
            mainWindow.setTargetScreen(1);
        }
        if (Aloha::isKeyDown(Aloha::KEYBOARD_ENTER) || Aloha::isGamepadButtonDown(Aloha::GAMEPAD_BUTTON_RIGHT_FACE_DOWN))
        {
            text1.setText("Changed to first screen!");
            mainWindow.setTargetScreen(0);
        }

        rect1.draw();
        circle1.draw();
        text1.draw();

        mainWindow.endDrawing();
    }

    mainWindow.close();
    return 0;
}