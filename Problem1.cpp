// Amir hossein Shaker
// Assignment 5
// CS52
// Problem 1
// This program lets a maker of carbonated drinks keep track of the sales for five different
// flavors: mint, lime, berry, vanilla, and bacon. The program shows the names of the top
// selling flavor that sell more than the average.



#include <iostream>

using namespace std;

// Function prototypes for finding the average sold and figuring out the top sellers
void showTopSellers ( string names[5], float numbers[5], float mean );
float calculateAverage ( float array [] , float size);


int main()
{
    
    // declaring array for flavors
    string drinkNames [5] = { "mint", "lime" , "berry" , "vanilla" , "bacon"};
    
    // Prompting user for input
    float count [5];
    for (int i = 0; i <= 4; i++)
    {
        cout << "Enter the number for " << drinkNames [i] << ":";
        cin >> count[i];
    }
    
    // Calling the functions
    float average = calculateAverage( count , 5 );
    
    showTopSellers( drinkNames, count, average );
    
    return 0;
}

// Function for getting the average
float calculateAverage (float array [] , float size )
{
    float sum = 0;
    for (int i = 0; i < size ; i++)
    {
        sum += array[i];
    }
    float ave = sum / size;
    
    return ave ;
}

//Function to show the top sellers
void showTopSellers ( string names[5], float numbers[5], float mean )
{
    for (int i = 0 ; i <= 4 ; i++)
    {
        if (numbers [i] >= mean)
        {
            cout << names[i] << " is a top seller" << endl;
        }
    }
}


// This program took me about 2 hours
