#include <stdio.h>
#include <stdbool.h>

int main() {
  int accountNumber;
  float beginningBalance, totalCharges, totalCredits, creditLimit, accountBalance;

  while(true) {
    printf( "Enter account number ( -1 to end ): " );
    scanf( "%d", &accountNumber );

    if ( accountNumber == -1 ) {
      return 0;
    }

    printf( "Enter beginning balance: " );
    scanf( "%f", &beginningBalance );
    printf( "Enter total charges: " );
    scanf( "%f", &totalCharges );
    printf( "Enter total credits: " );
    scanf( "%f", &totalCredits );
    printf( "Enter credit limit: " );
    scanf( "%f", &creditLimit );

    accountBalance = beginningBalance + totalCharges - totalCredits;

    if ( accountBalance > creditLimit ) {
      printf( "Account:\t%d\n", accountNumber );
      printf( "Credit Limit:\t%.2f\n", creditLimit );
      printf( "Balance:\t%.2f\n", accountBalance );
      printf( "Credit limit exceeded.\n" );
    }
  }

  return 0;
}