#include <iostream>

using namespace std;

void reverse(char *s);

int main()
{
   char str[] = "";

   cout << "Enter string:" << endl;
   cin >> str;

   reverse(str);

   cout << "The string reversed is:" << endl;
   cout << str << endl;

   return 0;
}

void reverse(char *s)
{
   char *front, *rear, temp;

   front = s;      
   rear = s + strlen(s)-1;
   cout << front << endl;  
   cout << rear << endl;
   while (front < rear)
   {

       temp = *front;
       *front = *rear;
       *rear = temp;

       front++;
       rear--;
   }
   return;
}