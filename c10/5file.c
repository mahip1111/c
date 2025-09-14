// Experience of append mode:-

#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("harry3.txt", "a");
    int num = 19;
    fprintf(fp, "%d", num);
    fclose(fp);

    return 0;
}

// write mode to pehla file khali karta tha and then print karta and thus to avoid this task we use append 
// Append mode just file ka end ma jo aap liktta ho wo print kar deta hai bas. Jitni bari code run karoge utni bar wo end ma same chiz print karata jayega.