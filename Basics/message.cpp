#include <iostream>

namespace message 
{
    using namespace std;

    void MessageStart(bool separate = true)
    {
        
        if(!separate)
            return;

        cout << "--------------------------------------------------" << endl;
        cout << "\n";
    }

    void MessageFinish(bool separate = true)
    {
        if(!separate)
            return;
        
        cout << "\n";
        cout << "--------------------------------------------------" << endl;
    }
}