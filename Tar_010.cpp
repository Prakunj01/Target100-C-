#include <iostream>
using namespace std;

// -=====================================     Median Program       ==========================================

//----------------------------------------- DISPLAY ARRAY --------------------------------
void displayArray(int arr[], int n)
{

    for (int i = 1; i <= n; i++)
    {
        cout <<"  "<< arr[i] << "  ";
    }
}


//    --------------------------------------- AVERAGE ARRAY  ----------------------------------------

void avgArray(int sum, int n)
{

    float avg = sum / n;
    cout << "  Average is : " << avg;
}


//    --------------------------------------- SUM ARRAY  ------------------------------------------
void sumArray(int arr[], int n)
{

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum = sum + arr[i];
    }
  cout<<"  Sum is : "<<sum;  

//    return ;

   
    avgArray(sum,n);
    cout << endl<< endl;
} 


//    --------------------------------------- MEDIAN PROGRAM  ----------------------------------------

void findmid(int arr[], int n)
{
    if (n % 2 == 0)
    {

        float avgmid = (arr[n / 2] + arr[(n / 2) + 1]) / 2;
        cout << "  Median is : " << avgmid;
    }
    else
    {
        int index = n / 2;
        cout << "  Median is " << arr[index + 1];
    }
}

//    --------------------------------------- MAIN FUNCTION -----------------------------------------

int main()

{
    long sum = 0;
    int n;
    cin >> n;

    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    displayArray(arr, n);
    cout << endl<< endl;

    sumArray(arr, n);
    cout << endl<< endl;


    // avgArray(sum,n);
    // cout << endl<< endl;    //this has been call in from sumArray function

    findmid(arr,n);
    cout << endl<< endl;




    return 0;
}