# Scope

Η έννοια του **scope** είναι απλή και πρέπει κάποιος να την γνωρίζει από νωρίς.

Στην ουσία ένα scope είναι ότι βρίσκεται μέσα σε `{ }`. Το `{` συμβολίζει την αρχή του scope ενώ το `}` συμβολίζει το τέλος του scope.

Παράδειγμα:

```C
if(num > 10)
{
    int x = 5;
    printf("x = %d\n", x); // x exist in this scope
}
printf("x = %d\n", x);  // Error x doesn't exist here.

```

Το scope της `if` περιέχει έναν αριθμό `x` και μετά την εκτύπωση του.

Αν κάποιος πάει να εκτυπώσει το `x` εκτός του scope αυτού θα του βγάλει **error**.

Αυτό φτιάχνεται με τον εξής τρόπο:

```C
int x;
if(num > 10)
{
    x = 5;
    printf("x = %d\n", x); // can access x within this scope
}
printf("x = %d\n", x);  // can access x here too

```

Το μόνο που άλλαξε είναι ότι δηλώσαμε το `x` πριν από την `if` με αποτέλεσμα το **scope** ύπαρξης της μεταβλητής `x` να μην είναι το scope της `if`.

## Ασκήσεις Για Εξάσκηση

1. **Σωστό** ή **Λάθος**.

Υπάρχει **error** στο παρακάτω κομμάτι κώδικα;

```C
#include <stdio.h>

void main(void)
{
    int damage = 10;
    int health = 50;

    if (health < 0)
    {
        printf("Health is bellow zero\n");
	printf("Damage done = %d\n", damage);
    }
    printf("Damage = %d\n", damage);
    printf("Health = %d\n", health);
}

```

2. **Σωστό** ή **Λάθος**.

Υπάρχει **error** στο παρακάτω κομμάτι κώδικα;

```C
#include <stdio.h>

void main(void)
{
    int budget = 100;
    int cost = 30;

    if(budget - cost > 50)
    {
	int new_budget = budget - cost;
    }

    printf("New budget = %d\n", new_budget);

}

```

[Back](https://github.com/unipi-projects/extras/blob/main/Languages/C/IncrementingDecrementing/README.md)
[Next](https://github.com/unipi-projects/extras/blob/main/Languages/C/Functions/README.md)
