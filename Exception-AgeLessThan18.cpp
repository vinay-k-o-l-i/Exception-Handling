#include <iostream>
using namespace std;
int main() {
    string vote;
    int age, BJP = 0, Congress = 0;
    cout << "Enter Your Age: ";
    cin >> age;
    try {
        if (age < 18) {
            throw age;   
        } else {
            cout << "You are eligible to vote\n" << endl;
        }
    }
    catch (int invalidAge) {
        cout << "\nYour age is " << invalidAge << " you are not eligible to vote.";
        return 0;   
    }
    cout << "Whom you want to vote among these two parties BJP or Congress ? : ";
    cin >> vote;
    if (vote == "BJP") {
        BJP++;
        cout << "Thank you for Voting for BJP ";
    }
    else if (vote == "Congress") {
        Congress++;
        cout << "Thank you for Voting Congress ";
    }
    else {
        cout << "Enter Valid Party Name BJP or Congress ";
    }
    return 0;
}
/*
Case 1 -
  
Output :
Enter Your Age: 17

Your age is 17 you are not eligible to vote.

Case 2 -

Output :
Enter Your Age: 18
You are eligible to vote

Whom you want to vote among these two parties BJP or Congress ? : BJP
Thank you for Voting for BJP 

Case 3 -

Output :
Enter Your Age: 19
You are eligible to vote

Whom you want to vote among these two parties BJP or Congress ? : Red
Enter Valid Party Name BJP or Congress
*/
