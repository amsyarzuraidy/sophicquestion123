#include <iostream>

using namespace std;



int main()
{
    const int size=100;
    int input, array[size]={0}, arrfunction[size]={0};
    

    cout << "Please input any sequence of number less than 100: ";
    cin >> input;

    for (int i=0; i<input; i++)
    {
        cout << "(Input integer of value not more than 10) Number " << i+1 << "=";
        cin >> array[i];
        
        	 if(array[i]%2==0 && array[i]!=array[i-1] && array[i] < 10)
			 arrfunction[i] = array[i];
		 
        	cout << endl;
        

    }
    cout << "The value of array is ";
    for (int j=0; j<size;j++)
    {   
    
    	if (arrfunction[j]!=0)
    	{
    		cout << arrfunction[j] << " ";
		}
	}
    

    return 0;
}
