#include <iostream>
#include <cmath>

namespace message
{
    using namespace std;

    void Start(bool separate = true)
    {

        if (!separate)
            return;

        cout << "--------------------------------------------------" << endl;
        cout << "\n";
    }

    void Finish(bool separate = true)
    {
        if (!separate)
            return;

        cout << "\n";
        cout << "--------------------------------------------------" << endl;
    }

    string Ask(string message)
    {
        string m_Answer;

        cout << message << "\n";
        getline(cin, m_Answer);
        cout << "\n";

        return m_Answer;
    }

    void Tell(string message)
    {
        cout << message << "\n";
    }

}

namespace calculation
{
    using namespace message;

    
    
    
    bool Calculate()
    {
        var  answer = Ask("Do you want make some calcelations?");

    }
    
    
    

}


int main()
{

    using namespace std;
    using namespace message;
    using namespace calculation;

    bool m_Separate = true;

    string m_Name;
    string m_Feel;

    Start(m_Separate);
    m_Name = Ask("Please, write your name!");

    Tell("Hello " + m_Name);
    m_Feel = Ask("How are you, " + m_Name + "?");

    if (m_Feel == "Good")
        Tell("Oh! I feel good too! Cool!");
    else
        Tell("It's sad to hear that. I hope that everything will be fine with you!");

    
    Calculate();
    
    Finish(m_Separate);
}
