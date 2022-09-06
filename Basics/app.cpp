#include <iostream>

using namespace std;

int main() 
{
    string presonName;

    cout << "Please, write your name!" << endl;
    cin >> presonName;
    cout << "Hello " << presonName << "! Hi are you??" << endl;
    
    string mood;
    string answer;

    cin >> mood;

    if (mood == "Good")
        answer = "Oh! I feel good too! Cool!";
    else
        answer = "It's sad to hear that. I hope that everything will be fine with you!";

    cout << answer << endl;
}