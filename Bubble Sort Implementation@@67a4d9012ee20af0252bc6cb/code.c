// Your code here...
void bubbleSort(int arr,int n){
    int i;   
    if(arr[i] > arr[i+1]){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1]=temp; 
    }
}
void printArray(arr, n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ", arr[i]);
    }
}