#include <iostream>

using namespace std;

int mode; // 전역변수 mode
void message() {
    cout << " 전역 공간 message method" << endl;
}


namespace Graphics
{
    int mode;
    int x, y;
    void draw()
    {
        cout << "Graphics 이름 공간 안의 draw method" << endl;
    }
    void message()
    {
        cout << "Graphics 이름 공간 안의 message method" << endl;
    }
}
namespace Network
{
    int mode, speed;
    void send(char *)
    {
        cout << "Network 이름 공간 안의 send method " << endl;
    }
    void message()
    {
        cout << "Network 이름 공간 안의 message method " << endl;
    }
}

int main()
{
    /*
    이곳에 using namespace Graphics 시 default 공간 시에 Graphics로 됨.
    */

    /*
                        compile error 발생함.
    x = y = 100;
    speed = 1321321;
    draw();
    */

    mode = 1; // 전역변수
    Graphics::mode = 1;
    Network::mode = 2;

    Graphics::message();
    Network::message();
    ::message();
    // message();  // compile error

    return 0;
}