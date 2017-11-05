#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int decimalToBinary(int decimal);
int binaryToDecimal(int binary);
int getInput();
int main(int argc, char** argv){
  if(argc != 2){
    return 0;
  }
  if(strcmp(argv[1],"B") == 0){
    printf("----Binary to Decimal conversion----\n");
    int input = getInput();
    int decimal = binaryToDecimal(input);
    printf("Binary number = %d\n", input);
    printf("Decimal equivalent = %d\n", decimal);
  }
  else if(strcmp(argv[1],"D") == 0){
    printf("----Decimal to Binary conversion----\n");
    int input = getInput();
    int binary = decimalToBinary(input);
    printf("Decimal number = %d\n", input);
    printf("Binary equivalent = %d\n", binary);
  }
  else{
    printf("Invalid argument\n");
  }
  return 0;

}
int decimalToBinary(int decimal){
  int remainder,binary = 0, i = 1;

    while(decimal > 0) {
      remainder = decimal % 2;
      decimal /= 2;
      binary += remainder*i;
      i*=10;
    }
    return binary;
}
int binaryToDecimal(int binary){
  int remainder, decimal = 0, i = 0;
  while(binary > 0){
    remainder = binary % 10;
    binary /= 10;
    decimal += remainder*pow(2,i);
    i++;
  }
  return decimal;
}
int getInput(){
  printf("Enter a value\n");
  int input;
  scanf("%d", &input);
  return input;
}
