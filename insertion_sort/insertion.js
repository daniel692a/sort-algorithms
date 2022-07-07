const insertionSort = (arr) => {
    let i, j, key;
    for (i = 1; i < arr.length; i++){
        key = arr[i];
        j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j-=1;
        }
        arr[j+1] = key;
    }
    console.log(arr);
};

insertionSort([12, 11, 13, 5, 6]);