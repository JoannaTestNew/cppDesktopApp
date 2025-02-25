#ifndef APP_H
#define APP_H

#include <windows.h>

class App {
public:
    App(HINSTANCE hInstance);
    ~App();
    bool Init();
    int Run();

private:
    HINSTANCE hInstance;
    HWND hWnd;
    static LRESULT CALLBACK WndProc(HWND hWnd, UINT message, WPARAM wParam, LPARAM lParam);
};

#endif // APP_H
