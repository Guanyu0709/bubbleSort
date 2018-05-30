void BubbleSort(const int *number,int *number2){
    int i = 0, j = 0,temp=0;
 for( i = 0; i < 10; i++) {
        for( j = i; j < 10; j++) {
            if( number2[j] < number2[i] ) {
                temp = number[j];
                number2[j] = number2[i];
                number2[i] = temp;
            }
        }
    }

}
