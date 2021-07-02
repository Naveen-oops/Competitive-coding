# Question

Write a C program to read a text file and find the length of the longest string in a file.
<br>
## Sample input & Output:
File content: welcome to coimbatore institute of technology
<br>
Output:  <br>
coimbatore : 10 <br>
technology : 10

## C code:

```c

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main() {

   FILE *fp,*fp1;
   char buf[255];

// Step - 1: Opening the file and trying to find the maxlen 
   fp = fopen("sample.txt", "r");
      int maxlen=0; 
      while( fscanf(fp, "%s", buf) != EOF )
      {
         int len = strlen(buf);

         if(len > maxlen){
            maxlen = len;
           // strcpy(ans, buf);
         }

      }
    fclose(fp);

// Step 2: Opening the file again and just printing the string whose occurences matches maxlen

   fp1 = fopen("sample.txt", "r");

      // Print strings whose len are maxlen : since multiple occurences may exists
       while( fscanf(fp1, "%s", buf) != EOF )
      {
         int len = strlen(buf);
            if(len == maxlen){
              printf("%s:%d\n", buf, maxlen);
            }

      }
      
   fclose(fp1);

   return 0;

}
```

# Output

![output](https://github.com/Naveen-oops/Competitive-coding/blob/main/C-programs/Output-screenshots/output1.jpeg)

