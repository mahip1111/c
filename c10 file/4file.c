// Experiencing the write mode:- 

#include <stdio.h>

int main()
{
    FILE *fp;          // aap pointer ka name toh kuch bhi de sakte ho.
    fp = fopen("harry2.txt", "w");
    int num = 432;
    fprintf(fp, "%d", num);
    fclose(fp);

    return 0;
}

// NOTE:- Write mode will first empty that file and then jo apna print karne ko kaha hoga wo print kar dega.
// You can experince this by yourself