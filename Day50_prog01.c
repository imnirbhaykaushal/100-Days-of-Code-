/* Q99: Change date format from dd/04/yyyy to dd-Apr-yyyy.
   Example:
   15/04/2025 -> 15-Apr-2025
*/

#include <stdio.h>

int main()
{
    int day, month, year;

    scanf("%d/%d/%d", &day, &month, &year);

    if(month == 1)
        printf("%02d-Jan-%d\n", day, year);
    else if(month == 2)
        printf("%02d-Feb-%d\n", day, year);
    else if(month == 3)
        printf("%02d-Mar-%d\n", day, year);
    else if(month == 4)
        printf("%02d-Apr-%d\n", day, year);
    else if(month == 5)
        printf("%02d-May-%d\n", day, year);
    else if(month == 6)
        printf("%02d-Jun-%d\n", day, year);
    else if(month == 7)
        printf("%02d-Jul-%d\n", day, year);
    else if(month == 8)
        printf("%02d-Aug-%d\n", day, year);
    else if(month == 9)
        printf("%02d-Sep-%d\n", day, year);
    else if(month == 10)
        printf("%02d-Oct-%d\n", day, year);
    else if(month == 11)
        printf("%02d-Nov-%d\n", day, year);
    else if(month == 12)
        printf("%02d-Dec-%d\n", day, year);

    return 0;
}
