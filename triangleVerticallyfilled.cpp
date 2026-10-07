#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << " Enter the steps :";
    cin >> n;
    for(int g =1;g<=n;g++){
        for (int i = 1; i <= n-g; i++)
    {        
        cout<<"  "; 
    }
      for (int j = 1; j <= g; j++)
        {
            cout<<"* ";

        }
    cout << endl;
    }
    
}