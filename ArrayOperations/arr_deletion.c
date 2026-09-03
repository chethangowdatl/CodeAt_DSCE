#include <stdio.h>
int main(){
    
    int a[7]={1,2,4,3,9,0};
    int last = 4;           //last element index [considering 0 as empty space]

    printf("\n\nDeletion\n");
    //i. at given pos
    
    int val_del=99;
    int pos_del=3;
            
        
    printf("\nArray before deletion\n");      //Traversal
    for(int i=0;i<=last;i++)
    {
        printf("%d, ",a[i]);        
    }
                
    printf("\n\nDeletion of element at index pos = %d\n",pos_del); 
        
    for(int i=pos_del;i<=last;i++)
    {
        a[i]=a[i+1];        //shifting to the left[or previous] element side
    }
            
    last--;                     //since array size is decreased
            
    printf("\nArray after deletion\n");      //Traversal
    for(int i=0;i<=last;i++)
    {
        printf("%d, ",a[i]);        
    }
    
    
    
    
    //     ii. at beginning
            
    for(int i=0;i<=last;i++)
    {
        a[i]=a[i+1];        //shifting to the left[or previous] element side
    }
            
    last--;                     //since array size is decreased
            
    printf("\nArray after deletion\n");      //Traversal
    for(int i=0;i<=last;i++)
    {
        printf("%d, ",a[i]);        
    }
            
    //     iii. at end
    
    last--;    
    printf("\n\nArray after deletion at last\n");      //Traversal
    for(int i=0;i<=last;i++)
    {
        printf("%d, ",a[i]);        
    }
}
