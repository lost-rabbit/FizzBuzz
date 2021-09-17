//print everyone number but on multiple of 3 say fizz 
//on multiple of 5 say buzz 
// multiple of 3 and 5 print fizzbuzz
//this was super easy lol

#include <iostream>

int main()
{
    for(int i = 100; i > 0; i--)
        {
            if(i % 3 == 0 && i % 5 == 0)
            {
                std::cout << "Fizz. \n";
            }

            else if(i % 5 == 0)
            {
                std::cout << "Buzz. \n";
        
            }
            else if(i % 3 == 0)
            {
                std::cout << "FizzBuzz. \n";
            }
            else
            {
                std::cout << i << "\n";
            }
        }



}