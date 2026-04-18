#include <stdio.h>
#include <stdlib.h>

int insert(int* tree, int size, int element)
{
    if (tree == NULL)
        return -1;
    
    int pos = 0;
    while (pos < size)
    {
        if (tree[pos])
        {
            if (tree[pos] < element)
                pos = 2 * pos + 2;  // right
            else if (tree[pos] && tree[pos] > element)
                pos = 2 * pos + 1;  // left
        }
        else
        {
            tree[pos] = element;
            return pos;
        }
    }
}

void print(int* tree, int size)
{
    for (int i = 0; i < size; i++)
        printf("%d ", tree[i]);
    printf("\n");
}

int search(int* tree, int size, int element){
    for(int i = 0; i < size; i++){
        if(tree[i] == element){
            return i;
        }
    }
    return -1;
}

int main()
{
    int tree[100] = {0};
    const int tsize = 100;
    

    
    int x = insert(tree, tsize, 2);
    int y = insert(tree, tsize, 3);
    int z = insert(tree, tsize, 5);
    int s = search(tree, z, 3);
    if(s != -1){
        printf("element already exits at pos : %d\n",s);
    }
    int p = insert(tree, tsize, 1);
    int q = insert(tree, tsize, 4);
    
    print(tree, 20);
    return 0;
}