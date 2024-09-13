#include <iostream>
using namespace std;

char convertsmall (char name){
   char ans = name - 'a' + 'A';
   return ans;
}

char convertbig (char name){
   char ans = name + 32;
   return ans;
}

int main() {
    char name;
    cin>>name;
    cout<<convertbig(name);

        return 0;
}