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
long c = 2147483647;
long long d = 2147483647;
```

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
    First example defining bool ourselves
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
