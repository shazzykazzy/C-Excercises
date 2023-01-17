#include <stdio.h>
#include <stdlib.h>

int LeafEater(int branch, int rest, int leaf) {
    int leavesEaten = 0;
    int currentPosition = 0;
    int i =0;

    for(currentPosition = 0; currentPosition < branch; currentPosition+=rest) {
        if (currentPosition % leaf == 0) {
            leavesEaten++;
        }
    }
    return leavesEaten;
}


int main() {
    int x = LeafEater( 12, 6, 4);
    printf("%d", x);
}
