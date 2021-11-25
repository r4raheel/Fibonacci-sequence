#include <iostream>
using namespace std;
int fibonnaci(int z) {
	///recursive function used for fabonacci
   if((z==1)||(z==0)) {//base case
      return z;//recusrsions ending conditon.
   }else {
      return(fibonnaci(z-1)+fibonnaci(z-2));//recursive calls
   }
}
int main() {
   int num;//inputnumbers
   cout <<"ENTER THENUMBER OF TERMS OF FABBONACI SERIES TO PRINT:";
   cin >> num;
   cout <<"REQUIRED FABBONACI SERIES:";
   for (int j=0;j<num;j++){// calling of recursive function num of terms the total term demanded by user
   	cout << fibonnaci(j)<<" ";
   }
   
   return 0;
}
