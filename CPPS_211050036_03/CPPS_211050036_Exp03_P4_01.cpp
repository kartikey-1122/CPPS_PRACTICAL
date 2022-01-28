// Fitst take marks from user then calculate percentage according to marks 
// Then put them into if-else statements
#include <iostream>
using namespace std;

int main()
{
    int mark1, mark2, mark3, mark4, mark5;
    cout << "Enter Your Marks out of 100 for each subject: " << endl;
    cin >> mark1 >> mark2 >> mark3 >> mark4 >> mark5;

    float total = mark1 + mark2 + mark3 + mark4 + mark5;
    cout << "Your total marks: " << total <<"/500"<< endl;
    
    float percentage = (total / 500) * 100;
    cout << "Your total percentage: " << percentage << "%" << endl;
    
    if(percentage>=91 ){
        cout<<"Awesome! Your grade is A!";
    }
     else if(percentage>=81){
        cout<<"Nice! Your grade is B!";
    }
     else if(percentage>=65){
         cout<<"Your grade is C!";
     }
     else if(percentage>=50){
         cout<<"Your grade is D!";
     }
     else{
         cout<<"Your are Fail !! Better Luck next time.";
     }
    return 0;
}