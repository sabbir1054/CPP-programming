#include<bits/stdc++.h>
using namespace std;
int main(){
     
     //in c language
    //  int *num = (int*)malloc(10 * sizeof(int));
     //int *num = (int*)calloc(10 , sizeof(int));

    //  for c++ we have special system
    //  int *num = new int[10];//same as malloc
     int *num = new int[15]{2,4,5};//same as calloc

     /*  for (int i = 0; i < 15; i++)
      {
          cin >> num[i];
      } */
     for (int i = 0; i < 15; i++)
     {
         cout << num[i] << endl;
    }

    // delete *num; for delete that array
    return 0;
}