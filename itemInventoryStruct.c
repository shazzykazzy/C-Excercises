#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct item {
   char *itemName;
   int quantity;
   float price;
   float amount;
};

void readItem(struct item *itemptr) {
   char name[20];

   printf("Enter the product name: ");
   scanf("%s", name);

   itemptr->itemName = (char*)malloc(strlen(name) + 1);
   strcpy(itemptr->itemName, name);

   printf("Enter the quantity: ");
   scanf("%d", &itemptr->quantity);

   printf("Enter the price: ");
   scanf("%f", &itemptr->price);

   itemptr->amount = itemptr->quantity * itemptr->price;
}

void printItem(struct item *itemptr) {
   printf("Item information:\n");
   printf("Item Name: %s\n", itemptr->itemName);
   printf("Quantity: %d\n", itemptr->quantity);
   printf("Price: %.2f\n", itemptr->price);
   printf("Amount: %.2f\n", itemptr->amount);
}

int main() {
   struct item product;
   struct item *itemptr = &product;

   readItem(itemptr);
   printItem(itemptr);

   free(itemptr->itemName);

   return 0;
}
