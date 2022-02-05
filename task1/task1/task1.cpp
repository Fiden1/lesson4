#include <iostream>
using namespace std;

int main()
{
    int number = 0;
    int razmer = count(number);
    int* arr = new int[razmer];
    createArray(arr, number, razmer);
    arrayOutput(arr, razmer);
    return 0;
}
int count(int& number){
    int length = 0;
    cout << "enter the number";
    cin >> number;
    int countNumber = number;
    while (countNumber > 0)
    {
        countNumber = countNumber / 10;
        length++;
    }
    return length;
}
void createArray(int* array, int number, int length){
        for (size_t i = 0; i < length; i++){
            array[i] = number % 10;
            number /= 10;
        }
}
void arrayOutput(int* array, int length)
{
    for (size_t i = 0; i < length; i++)
    {
        cout << array[i];
    }
}