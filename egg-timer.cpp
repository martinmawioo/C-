#include <iostream>
using namespace std;

int main()
{
    int in;

    std::cout << "Input the desired height of EggTimer\n";
    std::cin >> in;

    for (int r = -1, d1 = 0, d2 = 0; r < in + 1; r++)
    {
        std::cout << "#";
        if (r == -1 || r == in)
        {
            for (int i = 0; i < in; i++)
            {
                std::cout << "#";
            }
        }
        else
        {
            for (int c = 0; c < in; c++)
            {

                d1 = r;
                d2 = in - r - 1;
                if (d1 <= d2)
                {
                    (c >= d1 && c <= d2) ? std::cout << "*" : std::cout << " ";
                }
                else
                {
                    (c >= d2 && c <= d1) ? std::cout << "*" : std::cout << " ";
                }
            }
        }
        std::cout << "#";
        std::cout << "\n";
    }
return 0;
}