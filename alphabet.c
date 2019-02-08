#include<stdio.h>
int main()
{
    char alpha;
    scanf("%c",&alpha);
    if(alpha>='a'&&alpha<='z'||alpha>='A'&&alpha<='Z')
    {
        printf("Alphabet");
    }
    else
    {
        printf("No");
    }
    return 0;
}
