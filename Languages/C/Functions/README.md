# Functions

Οι συναρτήσεις είναι από τα πιο σημαντικά σε μία γλώσσα. Για παράδειγμα μέχρι στιγμής έχουμε δει την συνάρτηση `printf()` η οποία εκτυπώνει στην οθόνη ότι της περάσουμε.

Μπορούμε όμως να δημιουργήσουμε και δικές μας συναρτήσεις. Γενικά είναι καλό να χρησιμοποιούμε συναρτήσεις ώστε να διασπάσουμε τον κώδικα μας σε μικρότερες λειτουργίες.

Τι πρέπει να κάνουμε για να φτιάξουμε μία συνάρτηση:

1. **Τύπος της συνάρτησης** (int, float, char, void).
2. **Όνομα της συνάρτησης** (Πρέπει να είναι μοναδικό).
3. **Αν θα δέχεται ή όχι παραμέτρους**.

Ένα παράδειγμα για καλύτερη κατανόηση:

```C
#include <stdio.h>

void main(void)
{
    int x = 10;
    int y = 8;

    int result_addition = x + y;
    int result_sub = x - y;

    printf("x + y = %d\n", result_addition);    // 18
    printf("x - y = %d\n", result_sub);         // 2
}
```

Στο πάνω κομμάτι κώδικα απλώς προσθέτουμε και αφαιρούμε 2 αριθμούς. Αν και στο συγκεκριμένο παράδειγμα δεν υπάρχει θέμα, καλό θα ήταν να έχουμε δύο συναρτήσεις η κάθε μία για την κάθε πράξη.

```C
#include <stdio.h>

// add two numbers and return the result
int Add(int x, int y)
{
    return x + y;
}

int Sub(int x, int y)
{
    return x - y; 
}

void main(void)
{
    int x = 10;
    int y = 8;

    printf("x + y = %d\n", Add(x, y));		// 18
    printf("x - y = %d\n", Sub(x, y));		// 2
}
```

Ίσως εδώ να μην ήταν αναγκαίο αλλά σε ένα πρόγραμμα που θα θέλουμε να υπολογίσουμε το άθροισμα δύο αριθμών σε **runtime** (δλδ όταν τρέχει το πρόγραμμα μας), απλά θα περνάμε τους αριθμούς που θέλουμε να προσθέσουμε στην συνάρτηση μας.

**Σημείωση**: Αργότερα θα γίνει πιο κατανοητή η σημασία των συναρτήσεων.

Τι παρατηρούμε;

Αν δούμε την συνάρτηση `int add(int x, int y)` παρατηρούμε ότι ακολουθούμε τους **3 βασικούς κανόνες** για την δημιουργία μιας συνάρτησης.

1. Έχουμε τον τύπο `int`.
2. Το όνομα `add`, το οποίο είναι μοναδικό (δλδ δεν υπάρχει άλλη συνάρτηση με όνομα add).
3. Η συγκεκριμένη συνάρτηση δέχεται δύο παραμέτρους τύπου `int`.

Οπότε στην ουσία μία συνάρτηση είναι ένα κομμάτι κώδικα που εκτελείτε μόνο όταν την καλούμε.

Στο παράδειγμα μας κάνουμε πρώτα **declare** την συνάρτηση. Οπότε τώρα ο **compiler** γνωρίζει ότι υπάρχει. Τέλος καλούμε την συνάρτηση απλά γράφοντας το όνομα της και περνάμε παραμέτρους **αν δέχεται**.

# Function Prototype

Μάθαμε πως να δημιουργούμε συναρτήσεις και φτιάξαμε την συνάρτηση `add` και την συνάρτηση `sub`.

Όμως τις ορίσαμε πριν απο την `main`. Γιατί;

Ας δοκιμάσουμε να τις ορίσουμε μετά την `main`. Δημιουργήστε ένα καινούριο αρχείο με όνομα `func.c` με τον ακοόλουθο κώδικα:

```C
#include <stdio.h>

void main(void)
{
    int x = 10;
    int y = 8;

    printf("x + y = %d\n", Add(x, y));		// 18
    printf("x - y = %d\n", Sub(x, y));		// 2
}

// add two numbers and return the result
int Add(int x, int y)
{
    return x + y;
}

int Sub(int x, int y)
{
    return x - y;
}
```

![warnings.png](https://github.com/unipi-projects/extras/blob/main/Languages/C/img/Functions/warning.png)

Όπως βλέπουμε τώρα έχουμε κάποια **Warnings**. Γενικά έχει σημασία η σειρά δήλωσης των συναρτήσεων.

Οπότε άν τις δηλώσουμε πριν την `main` όπως κάναμε και πριν δεν θα έχουμε κανένα πρόβλημα.

Όμως όταν θα φτιάχνουμε μεγαλύτερα προγράμματα θα έχουμε περισσότερες και μεγαλύτερες σηναρτήσεις. Και αν τις δηλώνουμε πάνω από την `main` στο τέλος η `main` δεν θα φαίνεται καν.

Η συνάρτηση `main` είναι εκεί που τρέχουν όλα. Άρα είναι λογικό το πρώτο πράγμα που θέλουμε να δείχνουμε σε κάποιον όταν τους παρουσιάζουμε το πρόγραμμα μας είναι η `main` συνάρτηση καθώς από εκεί ξεκινάνε όλα.

Για αυτό λοιπόν υπάρχουν οι συναρτήσεις **prototypes**. Για να τις καταλάβουμε ας διαμορφώσουμε το αρχείο `func.c`:

```C
#include <stdio.h>

// Prototyping functions
int Add(int x, int y);
int Sub(int x, int y);

void main(void) 
{
    int x = 10;
    int y = 8;

    printf("x + y = %d\n", Add(x, y));		// 18
    printf("x - y = %d\n", Sub(x, y));		// 2
}

// add two numbers and return the result
int Add(int x, int y)
{
    return x + y;
}

int Sub(int x, int y)
{
    return x - y;
}
```

Αν κάνουμε **compile** τώρα το αρχείο μας παρατηρούμε ότι δεν έχουμε κανένα *Warning*. Αυτό γιατί κάναμε prototyping ή αλλιώς *forward decleration*.

Στην αρχή γράψαμε απλά τις συναρτήσεις μας:
```C
// Prototyping functions
int Add(int x, int y);
int Sub(int x, int y);
```
Έτσι ο **compiler** γνωρίζει ότι υπάρχουν αυτές οι δύο συναρτήσεις και μπορούν να χρησιμοποιηθούν, απλά όταν τις καλέσουμε θα κοιτάξει να δει τον κώδικα που περιέχουν.

Αυτό εμείς το κάνουμε μετά την `main` ώστε να μην γεμίσουμε το αρχείο μας με συναρτήσεις.

# Function Scope

Γνωρίζουμε ότι το **scope** είναι οτιδήποτε ενδιάμεσα σε  `{ }`. Έτσι κάθε συνάρτηση έχει το δικό της μοναδικό **scope**.

```C
#include <stdio.h>

// Prototyping function
int TookDamage(int health, int damage);

void main(void)
{
    int health = 100;
    int damage = 20;
    printf("Current player's health: %d\n", health);
    printf("Player took damage!\n");
    printf("Player's health dropped to: %d\n", TookDamage(health, damage));
}

// Updating players health
int TookDamage(int health, int damage)
{
    int new_health;
    
    // check if health falls bellow zero
    if((health - damage) < 0)
    {
        new_health = 0;
        return new_health;	// in this case just return 0 for health
    }
    new_health = health - damage;
    return new_health;
}
```

Στο πάνω παράδειγμα δημιουργήσαμε μία νέα μεταβλητή `new_health` στην συνάρτηση `TookDamage`. Η μεταβλητή αυτή υπάρχει μόνο στο **scope** της συνάρτησης αυτής.

Αν προσπαθήσουμε να την εκτυπώσουμε οπουδήποτε εκτός της συνάρτησης `TookDamage` θα έχουμε **error**.

Γενικά η μεταβλητή αυτή παύει να υπάρχει μετά την εκτέλεση της συνάρτησης.

**Σημείωση**: Στο παράδειγμα αυτό δεν χρειαζόμαστε νέα μεταβλητή, μπορούμε απλά να πούμε κατευθείαν `return health - damage`. Απλά χρησιμοποιήθηκε ως παράδειγμα.

# Function Arguments

Όπως γνωρίζουμε μπορούμε να περάσουμε διάφορες **παραμέτρους** στις συναρτήσεις μας. Γενικά δεν υπάρχει κάποιο **όριο** στον αριθμό των παραμέτρων που μπορούμε να περ σε μία συνάρτηση.

Μπορούμε όμως να μην ορίσουμε και καμία παράμετρο σε μία συνάρτηση, σε αυτή την περίπτωση βάζουμε **void** στην παρένθεση.

Παραδείγματα συναρτήσεων με παραμέτρους:

```C
int Run(int speed)
{
    // code
}

float Sub(float x, float y)
{
    // code
}

void Super(int health, int power, int speed, int stamina, int intellect)
{
    // code
}
```

Και μερικά χωρίς:

```C
int PowerUp(void)
{
    // code
}

void HealthUp(void)
{
    // code
}
```

[Back: Scope](https://github.com/unipi-projects/extras/blob/main/Languages/C/Scope/README.md)

[Next: Revisiting Main](https://github.com/unipi-projects/extras/blob/main/Languages/C/RevisitingMain/README.md)
