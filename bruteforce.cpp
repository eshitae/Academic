#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int n;
    cout<<"enter the value of n:";
    cin >> n;

  cout<<"enter the elements  of array:";

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int smax = -99999999; // Initialize with a very low value
    int sindex = -1;
    int eindex = -1;

    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){ // Corrected loop condition
            sum += arr[j];
            if(sum > smax){
                smax = sum;
                sindex = i;
                eindex = j;
            }
        }
    }

    cout << "Maximum subarray sum: " << smax << endl;
    cout << "The maximum subarray: ";
    for(int i = sindex; i <= eindex; i++){ // Corrected loop condition
        cout << arr[i] << " ";
    }

    return 0;
}
