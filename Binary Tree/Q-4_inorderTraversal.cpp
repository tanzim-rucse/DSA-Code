//Same as Question 1 just dont use the search method 
//:>
void inorder(int *tree, int curridx, int size){

    if(curridx > size){
        return ;
    }

    inorder(*tree, 2*curridx+1, size);
    
    cout<<tree[curridx]<<" ";
    
    inorder(*tree , 2*curridx+2, size);
}



