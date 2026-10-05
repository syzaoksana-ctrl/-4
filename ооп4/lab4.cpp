#include <iostream>
#include "ModelWindow.h"
#include <utility>

using namespace std;

int main()
{
    cout << "1. Window created with DEFAULT constructor" << endl;
    ModelWindow defaultWindow;
    defaultWindow.Display();

    cout << "\n2. Window created with PARAMETERIZED constructor" << endl;
    ModelWindow window("My window", 10, 5, 40, 15, "blue", true, true);
    window.Display();

    cout << "\n3. Window created with COPY constructor" << endl;
    ModelWindow copiedWindow = window;
    copiedWindow.Display();

    cout << "\nMove right by 10:" << endl;
    if (window.MoveHorizontal(10))
        cout << "Move completed" << endl;
    else
        cout << "Error: out of screen bounds" << endl;

    window.Display();

    cout << "\nMove down by 5:" << endl;
    if (window.MoveVertical(5))
        cout << "Move completed" << endl;
    else
        cout << "Error: out of screen bounds" << endl;

    window.Display();

    cout << "\nResize width by 50:" << endl;
    if (window.ChangeWidth(50))
        cout << "Width changed" << endl;
    else
        cout << "Error: new size exceed screen bounds" << endl;

    window.Display();

    cout << "\nResize height by 10:" << endl;
    if (window.ChangeHeight(10))
        cout << "Height changed" << endl;
    else
        cout << "Error: new size exceed screen bounds" << endl;

    window.Display();

    cout << "\nChange color:" << endl;
    window.ChangeColor("red");
    window.Display();

    cout << "\nChange visibility state:" << endl;
    window.SetVisible(false);

    if (window.IsVisible())
        cout << "Window is visible" << endl;
    else
        cout << "Window isn't visible" << endl;

    cout << "\nChange border state:" << endl;
    window.SetBorder(false);

    if (window.HasBorder())
        cout << "Window with border" << endl;
    else
        cout << "Window without border" << endl;

    cout << "\nResult toString():" << endl;
    cout << window.toString() << endl;

    cout << "\nTesting operator<<:" << endl;
    cout << window << endl;

    cout << "\nTesting operator+:" << endl;
    window = window + make_pair(5, 2);
    cout << window << endl;

    cout << "\nTesting operator+=:" << endl;
    window += make_pair(30, 10);
    cout << window << endl;

    cout << "\nTesting operator==:" << endl;
    ModelWindow sameWindow = window;

    if (window == sameWindow)
        cout << "window and sameWindow are EQUAL" << endl;
    else
        cout << "window and sameWindow are NOT EQUAL" << endl;

    if (window == defaultWindow)
        cout << "window and defaultWindow are EQUAL" << endl;
    else
        cout << "window and defaultWindow are NOT EQUAL" << endl;

    return 0;
}