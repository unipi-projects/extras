# Basic Operations

Το να δημιουργούμε απλά μεταβλητές και να τις εκτυπώνουμε δεν είναι και τόσο χρήσιμο. Κάτι που είναι αρκετά χρήσιμο είναι οι βασικές πράξεις που μπορούμε να κάνουμε.

* ## Πρόσθεση

```C
int num1 = 5;
int num2 = 3;

int result_add = num1 + num2;	// calculate the result of num1 + num2

printf("result_add = %d\n", result_add);	// print the result of the addition
```

* ## Αφαίρεση

```C
int num3 = 6;
int num4 = 4;

int result_sub = num3 - num4;	// calculate the result of num3 - num4

printf("result_sub = %d\n", result_sub);	// print the result of the subtraction

```

* ## Πολλαπλασιασμός

```C
int num5 = 10;
int num6 = 7;

int result_multi = num5 * num6;	// calculate the result of num5 * num6

printf("result_multi = %d\n", result_multi);	// print the result of the multiplication

```

* ## Διαίρεση

```C
int num7 = 5;
int num8 = 2;

int result_div = num7 / num8;	// calculate the result of num7 / num8

printf("result_div = %d\n", result_div);	// print the result of the division

```

**Σημείωση**: Πρέπει να σημειωθεί πως στην Διαίρεση `/`(**div**) πάντα θα έχουμε έναν ακέραιο ακόμα και αν το αποτέλεσμα θα είναι δεκαδικός. Όπως στο παράδειγμα μας, κανονικά 5 / 2 μας κάνει 2.5 αλλά επειδή είναι **div**, το αποτέλεσμα θα είναι 2.

Παρόλα αυτά δεν είναι ακριβώς σωστό αυτό όταν θέλουμε να βρούμε το ακριβές αποτέλεσμα της διαίρεσης θα πρέπει ένας από τους δύο αριθμούς να είναι **float**.

**Προσοχή** τώρα έχουμε **float** αποτέλεσμα άρα και το **result_div** πρέπει να γίνει float. Επίσης τώρα που θα έχουμε **float** πρέπει να αλλάξουμε το **%d** σε **%f**.

```C
int num7 = 5;
float num8 = 2;

float result_div = num7 / num8;	// calculate the result of num7 / num8

printf("result_div = %f\n", result_div);	// print the result of the division

```
Τώρα το αποτέλεσμα είναι σωστό **2.5**.

* ## Υπόλοιπο Διαίρεσης

Το Υπόλοιπο της Διαίρεσης είναι πάλι το ίδιο με την απλή διαίρεση, δηλαδή θα επιστρέφει πάντα έναν ακέραιο. Αν θέλουμε να έχουμε δεκαδικό αποτέλεσμα πρέπει ένας από τους δύο αριθμούς να είναι **float**. Για τον υπολογισμό του χρησιμοποιούμαι τον ειδικό τελεστή `%` (**mod**).

```C
int num9 = 5;
int num10 = 2;

int result_mod = num9 % num10;	// calculate the result of num9 % num10

printf("result_mod = %d\n", result_mod);	// print the result of the modulo

```

Τώρα φτιάχνουμε έναν νέο φάκελο με όνομα **BasicOperations** και ένα αρχείο **operations.c**. Και γράφουμε τα από πάνω snippets κώδικα. Στην διαίρεση άφησα μόνο το κομμάτι με τον **float**.

Πιστεύω ότι μέχρι τώρα έχετε μάθει να κάνετε **compile** ένα αρχείο όποτε πάω κατευθείαν στο αποτέλεσμα. Αν βάλατε τους ίδιους αριθμούς με εμένα τα αποτελέσματα είναι τα εξής:


![operation.png](https://github.com/unipi-projects/extras/blob/main/C/img/BasicOperations/operations.png)
