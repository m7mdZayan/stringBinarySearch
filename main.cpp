#include <iostream>

using namespace std;

int binarySearch( string arr[],int Size,string key ){
    int Start = 0;
    int End = Size-1;
    int mid = (Start + End) / 2;

    while( Start <= End ){
        if ( key == arr[mid] ) return mid;
        else if ( key > arr[mid] ) Start = mid+1;
        else {End = mid -1;}
        mid = (Start + End) / 2;
    }
    return -1;
}



int main()
{

    string arr[4] = { "abandon","baker","cat","elephant"};
    int index = binarySearch(arr,4,"cat");

    cout << index << endl;

    return 0;
}
