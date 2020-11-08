#include <stdio.h>

int main()
{
   int numberOfDigits;
   scanf("%d",&numberOfDigits);
   int arrayOfEven[numberOfDigits], arrayOfOdd[numberOfDigits], lengthArrayOfEven = 0, lengthArrayOfOdd = 0, number, min = arrayOfEven[0],max = arrayOfOdd[0];
   int j = 0, k = 0;
   for (int i = 0; i < numberOfDigits; i++)
   {
      scanf("%d",&number);
      if (number % 2 == 0)
      {
         arrayOfEven[j] = number;
         j++;
         lengthArrayOfEven ++;
      }
      else
      {
         arrayOfOdd[k] = number;
         k++;
         lengthArrayOfOdd ++;
      }
   }
   int buf;
   for (int i = 0; i < lengthArrayOfEven-1; i++)
   {
      min = arrayOfEven[i];
      for (j = i+1; j < lengthArrayOfEven; j++)
      {
         if (arrayOfEven[j] <= min)
         {
            buf =  arrayOfEven[i];
            min = arrayOfEven[j];
            k = j;
         }
      }
      arrayOfEven[i] = min;
      arrayOfEven[k] = buf;
   }
   for (int i = 0; i < lengthArrayOfOdd-1; i++)
   {
      max = arrayOfOdd[i];
      for (j = i+1; j < lengthArrayOfOdd; j++)
      {
         if (arrayOfOdd[j] >= max)
         {
            buf = arrayOfOdd[i];
            max = arrayOfOdd[j];
            k = j;
         }
      }
      arrayOfOdd[i] = max;
      arrayOfOdd[k] = buf;
   }
   for (int i = 0; i < lengthArrayOfEven; i++) printf("%d ",arrayOfEven[i]);
   for (int i = 0; i < lengthArrayOfOdd; i++) printf("%d ",arrayOfOdd[i]);
   return 0;
}