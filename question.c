#include <windows.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
    // Display a dialog box with Yes and No buttons
    int result = MessageBoxA(NULL, "Is what you are doing now helping you achieve you goals?", "QUESTION", MB_YESNO | MB_ICONQUESTION);

    // Check the user's choice
    if (result == IDYES) {
        MessageBoxA(NULL, "Perfect! Please keep doing it.", "PROCEED", MB_OK | MB_ICONINFORMATION);
    } else if (result == IDNO) {
        MessageBoxA(NULL, "Then stop it right now!", "STOP", MB_OK | MB_ICONERROR);
    }

    return 0;
}

// Compile with: tcc question.c -luser32 -mwindows