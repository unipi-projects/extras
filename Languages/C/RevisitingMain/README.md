# Revisiting Main

Μέχρι στιγμής γράφαμε την κύρια συνάρτηση του προγράμματος μας ως εξής:

```C
void main(void)
{
    // code
}
```

Κανονικά όμως η `main` δεν θα έπρεπε να είναι τύπου `void` αλλά θα έπρεπε να είναι τύπου `int`.

Άρα εφόσον είναι τύπου `int` πρέπει να επιστρέφει και μία `int` τιμή. Πράγματι η συνάρτηση πρέπει να επιστρέφει μηδέν `0` ώστε να δείξει το το πρόγραμμα λειτούργησε κανονικά και οποιονδήποτε άλλον αριθμό ως ένδειξη ότι κάτι δεν πήγε καλά (συνήθως `-1`).

Οπότε η `main` θα γράφεται ως εξής:

```C
int main(void)
{
    // code
    return 0;
}
```

Πλέον την `main` θα την ορίζουμε τύπου `int`.

[Back: Functions](https://github.com/unipi-projects/extras/blob/main/Languages/C/Functions/README.md)

[Next: Revisiting Types](https://github.com/unipi-projects/extras/blob/main/Languages/C/RevisitingTypes/README.md)
