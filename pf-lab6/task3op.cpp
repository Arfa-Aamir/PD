#include <iostream>
using namespace std;
float perimeter(char letter, float number);
main()
{
    char letter;
    cout << "Enter the shape (s for square, c for circle, t for triangle, h for hexagon): ";
    cin >> letter;
    float value;
    cout << "Enter the value: ";
    cin >> value;
    float result;
    result = perimeter(letter, value);
    cout << "The perimeter is: " << result;
}
float perimeter(char letter, float number)
{
    float total;
    if (letter == 's')
    {
        total = 4 * number;
    }
    if (letter == 't')
    {
        total = 3 * number;
    }
    if (letter == 'c')
    {
        total = 6.28 * number;
    }
    if (letter == 'h')
    {
        total = 6 * number;
    }
    return total;
}