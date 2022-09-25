#include <stdio.h>

void Hanoi(int a, char tasinacak, char tmp, char hedef)
{
    if (a == 1)
    {
        printf("Disk %c cubugundan %c cubuguna tasindi\n", tasinacak, hedef);
        return;
    }

    Hanoi(a - 1, tasinacak, hedef, tmp);
    Hanoi(1, tasinacak, tmp, hedef);
    Hanoi(a - 1, tmp, tasinacak, hedef);
}
int main()
{
    int sayi;
    printf("Disk sayisini giriniz : ");
    scanf("%d", &sayi);

    Hanoi(sayi, 'A', 'B', 'C');
}