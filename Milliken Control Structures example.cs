// Daniel Milliken
// Control Structure Example
// 01/11/2018


using System; // following code was automatically spit out by IDE.
using System.Collections.Generic;//
using System.Linq;//
using System.Text;//

namespace Milliken_ControlStructures// automatic namespace 
{
    class Program // class statement
    {
        static void Main(string[] args) // automatic
        {
            int menuchoice; // declarations including a boolean and while loop
            int count;
            int currentNumber = 0;
            int smallestNumber = 99999;
            bool done = false; // boolean
            while (!done) // while loop
            {   // Menu for program to ask user to input selction from a series of options. Option one states that it will find the 
                // largest number in a known set of numbers entered. Option two states that it will find the smallest number within an unknown
                // quantity of numbers, with -999 being the input to stop. Option three will exit the program. 
                Console.WriteLine("Menu"); 
                Console.WriteLine("1. Find the largest # with a known quantity of numbers "); 
                Console.WriteLine("2. Find the smallest # with an unknown quantity of numbers ");
                Console.WriteLine("3. Exit Program ");
                Console.WriteLine("Choice: ");
                menuchoice = Convert.ToInt16(Console.ReadLine());
                if (menuchoice == 1) // menu choice 1
                {
                    // Program will ask user to enter how many numbers they want to enter
                    Console.WriteLine("Please state how many numbers you would like to enter"); 
                    count = Convert.ToInt16(Console.ReadLine());

                    int largestNumber = -9999;
                    currentNumber = 0;
                    for (int i = 0; i < count; i++) // The loop repeats itself until users selected number of numbers has been reached.
                    {
                        Console.WriteLine("Enter a number: ");
                        currentNumber = Convert.ToInt16(Console.ReadLine());
                        if (currentNumber > largestNumber)
                            largestNumber = currentNumber;
                    }

                    Console.WriteLine("The largest number entered was " + largestNumber); // Programm will return the largest number
                }
                if (menuchoice == 2) // menu choice 2
                {
                    while (currentNumber != -999) // while loop
                    {
                        // Program asks user to enter number with a predesignated number to stop
                        Console.WriteLine("Please enter a number (-999 to stop)"); 
                        currentNumber = Convert.ToInt32(Console.ReadLine());
                        if (currentNumber != -999) // if statement allows the user to keep entering numbers until they wish to stop.
                            if (currentNumber < smallestNumber)
                                smallestNumber = currentNumber;
                    }
                    Console.WriteLine("The smallest number entered was: {0}", smallestNumber); // The program returns the smallest number
                    Console.WriteLine();
                    Console.ReadLine();
                }
                if (menuchoice == 3) // menu choice 3
                    done = true;
                // exit code
                if (menuchoice > 3 || menuchoice < 1) //user input validation
                    Console.WriteLine("Invalid Input");
            } // end while loop
        }
    }
}
