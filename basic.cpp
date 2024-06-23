#include<iostream>
#include<string>
using namespace std;

int getLength(char arr[], int size){
    int cnt=0;
    int index=0;
    while(arr[index] != '\0'){
        cnt++;
        index++;
    }
    return cnt;
}

void replaceChar(char original, char naya, char arr[], int size){
    for(int i=0; i<size; i++){
        if(arr[i]==original){
            arr[i]= naya;
        }
    }
}

void convertUpperToLower(char arr[], int n){
    int len = getLength(arr,n);
    for(int i=0; i<len; i++){
        char ch = arr[i];
        if(ch>='A' and ch<='Z'){
        ch = ch-'A'+'a';
        }
        arr[i]= ch;
    }
}

void convertLowerToUpper(char arr[], int n){
    int len = getLength(arr,n);
    for(int i=0; i<len; i++){
        char ch= arr[i];
        if(ch>='a' and ch<='z'){
            ch= ch-'a'+'A';
        }
        arr[i]= ch;
    }
}

void reverseChar(char arr[], int n ){
    int len = getLength(arr,n);
    int i=0;
    int j = len-1;
    while(i<=j){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

bool checkPalindrome(char arr[], int n){
    int len = getLength(arr,n);
    int i=0;
    int j = len-1;
    while(i<=j){
        if(arr[i]==arr[j]){
            i++;
            j--;
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
   //creation
//    char arr[100];
//    cout<<"enter your name"<<endl;
//    cin>>arr;
// cin.getline(arr,100,'\n');
//    cout<<"your name is: "<<arr<<endl;
//    cout<<arr[4];
// cout<<(int)arr[4];

// cout<< getLength(arr,100)<<endl;
// replaceChar('@',' ',arr,100);
// cout<<arr;

// char arr[100];
// cin>>arr;
// // convertUpperToLower(arr,100);
// convertLowerToUpper(arr,100);
// cout<<int(arr)<<" ";

char arr[100];
// cin>>arr;
// cout<<arr;
// cout<<endl;
cin.getline(arr,100,'\n');
reverseChar(arr,100);
cout<<arr;

// char arr[100];

// cout<< checkPalindrome(arr,100);
}
