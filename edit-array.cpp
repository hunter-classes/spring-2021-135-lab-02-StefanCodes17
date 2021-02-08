#include <iostream>

int main()
{
    //Initialize the array
    int myData[10];
    int input_index;
    int input_value;
    for (int i = 0; i < 10; ++i)
    {
        myData[i] = 1;
    }
    std::cout << "Current state of array:" << std::endl;
    do
    {
        //Print the user array
        for (int i = 0; i < 10; ++i)
        {
            std::cout << myData[i] << " ";
        }
        std::cout << " " << std::endl;
        //Ask for user input
        std::cout << "Input index: ";
        std::cin >> input_index;
        std::cout << "Input value: ";
        std::cin >> input_value;
        std::cout << " " << std::endl;
        if (input_index >= 0 && input_index < 10)
        {
            myData[input_index] = input_value;
        }
        else
        {
            break;
        }
    } while (input_index >= 0 && input_index < 10);
    std::cout << "Index out of range. Exit." << std::endl;
    return 0;
}