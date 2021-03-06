# Conditions and Control Flow

Ένα από τα πιο σημαντικά κομμάτια του προγραμματισμού είναι τα **conditional operations** τα οποία αλλάζουν την ροή του προγράμματος μας.

Στην **C**, όπως και σχεδόν σε όλες τις γλώσσες προγραμματισμού, αυτό γίνεται με την χρήση των **if-else** statements.

Μαζί όμως με τα *if-else* statements χρησιμοποιούμαι τους ακόλουθους **comparison operators**:

| **Comparison Operator** | **Description** |
|:-------------------------|:----------------|
| ==					   | Τσεκάρουμε αν κάτι είναι **ίσο** με κάτι άλλο|
| !=					   | Τσεκάρουμε αν κάτι **δεν** είναι **ίσο** με κάτι άλλο|
| >=					   | Τσεκάρουμε αν κάτι είναι **μεγαλύτερο ή ίσο** με κάτι άλλο|
| <=					   | Τσεκάρουμε αν κάτι είναι **μικρότερο ή ίσο** με κάτι άλλο|
| >					   	   | Τσεκάρουμε αν κάτι είναι **μεγαλύτερο** από κάτι άλλο|
| <					   	   | Τσεκάρουμε αν κάτι είναι **μικρότερο** από κάτι άλλο|

Ένα απλό παράδειγμα:

```C
#include <stdio.h>

void main(void)
{
    int num_of_apples = 5;

    if (num_of_apples >= 10)
    {
        printf("We have a lot of apples\n");
    }
    else
    {
	    printf("Unfortunately we don't have a lot of apples\n");
    }
}

```

Εδώ κοιτάμε αν έχουμε περισσότερα από ή ακριβώς 10 μήλα και εμφανίζουμε ένα μύνημα. Αν έχουμε λιγότερα από 10 τότε εμφανίζουμε άλλο μύνημα.

Το **if** statement γράφεται με διάφορους τρόπους:

## if statement

```C
if(expression)
{
    // do something
}

```
**Αν** η έκφραση είναι **αληθής** τότε κάνε κάτι.

## if - else statement

```C
if(expression)
{
    // do something
}
else
{
    // do something else
}

```
**Αν** η έκφραση είναι **αληθής** τότε κάνε κάτι **αλλιώς** κάνε κάτι άλλο.

## if - else if - else statement

```C
if(expression)
{
    // do something
}
else if(expression)
{
    // do something different
}
else
{
    // do something else
}

```
**Αν** η έκφραση είναι **αληθής** τότε κάνε κάτι, **αλλιώς αν** μία άλλη έκφραση είναι **αληθής** τότε κάνε κάτι, **αλλιώς** κάνε κάτι άλλο.

Από όλα τα πάνω συμπαιρένουμε ότι:

Τo **if** λειτουργεί μόνο όταν κάτι είναι **αληθές**.

[Back: Basic Operations](https://github.com/unipi-projects/extras/blob/main/Languages/C/BasicOperations/README.md)

[Next: Loops](https://github.com/unipi-projects/extras/blob/main/Languages/C/Loops/README.md)
