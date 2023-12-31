/*Date of submission: 16 August 2023
Runtime: 7ms, Beats 71.6% of users with C
Memory: 5.7MB, Beats 98.85% of users with C
*/

#include <stdio.h>

bool isPalindrome(int x){
   if (x < 0 || x > 0 && x % 10 == 0) {
      return false;
   } else if (x == 0){
      return true;
   } else {
      long int y = x;
      long int reverse = 0;
      while (y > 10 || y == 10){
         int rem = y % 10;
         reverse = reverse * 10 + rem;
         y = y / 10;
      }
      reverse = reverse * 10 + y;
      if (reverse==x){
         return true;
      } else{
         return false;
      }
   }
}

int main() {
    printf(isPalindrome(1001));
};

//