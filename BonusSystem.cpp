#include <iostream>
using namespace std;

int main() 
{
    //initialize variables
    int passes = 0; //init pass
    int failures = 0; //init fail
    int studentCounter = 1; //init student counter
    int result; //either pass (1) or fail (2)

    while (studentCounter <= 10)
    {
        //prompt user to enter next exam result
        cout << "Please enter result (1 = pass, 2 = fail): " << endl;
        cin >> result; //input result
    
        if (result == 1)
        {
            passes += 1; //increment passes
        }
        else
        {
            failures += 1; //increment failures
        }
        
        //increment studentCounter
        studentCounter += 1;
    }

    //termination phase
    cout << "Passed " << passes << "\nFailed " << failures << endl;

    //determine bonus
    if (passes > 8)
    {
        cout << "Bonus to instructor!" << endl;
    }
}