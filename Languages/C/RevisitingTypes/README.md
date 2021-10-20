# Revisiting Types

Γνωρίζουμε πως η **C** έχει τους εξής βασικούς τύπους:

* int
* float
* char

Στην πραγματικότητα όμως η **C** έχει πολλούς παραπάνω τύπους.

Για αρχή οι μεταβλητές τύπου `int` μπορούν να έχουν τους ακόλουθους τύπους:

```C
short a = 32767;
int b = 65468;
long c = 2147483647; // 2,147,483,647
long long d = 9223372036854775807; // 9,223,372,036,854,775,807
```

**Σημείωση**: Οι από πάνω τύποι είναι όλοι `signed`. Για την ώρα δεν είναι ανάγκη κάποιος να γνωρίζει τους `unsigned`.

Οι μεταβλητές τύπου `float` μπορούν να έχουν τους ακόλουθους τύπους:

```C
float f = 0.15f;            // always denote them with f
double d = 12.4;
long double ld = 147.62l;   // always denote them with l
```

Στην **C** δεν υπάρχει αντικείμενο τύπου `string`. Στην ουσία χρησιμοποιούμε μία σειρά από χαρακτήρες για να παρουσιάσουμε ένα string.

```C
char *str = "Hello, World!";

// we can't change individual letters from string literals
// for example:
str[0] = 'B'; // undefined, you can't change it this way
```
Τέλος ένας πολύ σημαντικός τύπος για κάθε γλώσσα, `bool`. Στην **C** για να χρησιμοποιήσει κάποιος boolean τύπους πρέπει να προσθέσει `#include <stdbool.h>`.

Επειδή δεν υπάρχει ήδη στην **C** μπορούμε να τον δημιουργήσουμε και μόνοι μας.

```C
/*
    First example using stdbool.h library
*/
#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    bool x = true;

    if (x)
    {
        printf("It's true!\n");
    }
    else
    {
        printf("It's false!\n");
    }
}


/*
    Second example defining bool ourselves
*/
#include <stdio.h>

#define bool int
#define true 1
#define false 0

int main(void)
{
    bool x = true;

    if (x)
    {
        printf("It's true!\n");
    }
    else
    {
        printf("It's false!\n");
    }
}

```
**Σημείωση**: Αν και είναι πολύ εύκολο να δημιουργήσουμε το δικό μας bool είναι καλύτερο να χρησιμοποιήσουμε την βιβλιοθήκη `stdbool.h`.

[Back: Revisiting Main](https://github.com/unipi-projects/extras/blob/main/Languages/C/RevisitingMain/README.md)
[Next: Arrays](https://github.com/unipi-projects/extras/blob/main/Languages/C/RevisitingMain/README.md)

