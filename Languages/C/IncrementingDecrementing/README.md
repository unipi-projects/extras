# Incrementing - Decrementing

Ένα από τα πιο συνηθισμένα πράγματα που κάνουμε σε ένα πρόγραμμα είναι να αυξάνουμε ή να μειώνουμε την τιμή μίας μεταβλητής κατά ένα συγκεκριμένο αριθμό.

| **Operator** | **Description**                 | **Example** |
|:-------------------------|:-------------------------------|:------------|
| ++					   | Αυξάνουμε την τιμή κατά ένα	| ++i		  |
| --					   | Μειώνουμε την τιμή κατά ένα	| --i		  |
| +=					   | Αυξάνουμε την τιμή κατά μία τιμή| i += 10	  |
| -=					   | Μειώνουμε την τιμή κατά μία τιμή| i -= 2     |


**Σημείωση**: Οι περιπτώσεις `++` και `--` είναι ειδικές καθώς μπορούν να γραφτούν και `i++` ή `i--`. Η διαφορά είναι αρκετά σημαντική και πρέπει να την γνωρίζουμε.

Στην ουσία `++i` ονομάζεται **pre-increment** ενώ `i++` ονομάζεται **post-increment**. Η διαφορά τους είναι αρκετά απλή:

* Pre-Incrementing
    
    Αυξάνουμε την μεταβλητή κατά μία μονάδα και επιστρέφουμε το αποτέλεσμα.

* Post-Incrementing

    Δημιουργούμε ένα αντίγραφο της μεταβλητής μετά αυξάνουμε την μεταβλητή κατά μία μονάδα και τέλος επιστρέφουμε το αντίγραφο.
	
Για να γίνει καλύτερα κατανοητό ας δούμε ένα παράδειγμα:

```C
#include <stdio.h>

int main(void)
{
    int x = 5;
    int y = 4;
    int temp = 0;
	
    temp = ++x;	// x now equals to 6 and we return 6
    printf("temp = ++x : %d", temp);  // result is 6
	
    temp = y++;  // y now equals to 5 but we return 4
    printf("temp = x++ : %d", temp);  // result is 4
}
```
Είναι αρκετά απλό στην λογική και προφανώς το αντίστοιχο ισχύει και για **pre-devrementing** και **post-decrementing**.

[Back: Loops](https://github.com/unipi-projects/extras/blob/main/Languages/C/Loops/README.md)

[Next: Scope](https://github.com/unipi-projects/extras/blob/main/Languages/C/Scope/README.md)
