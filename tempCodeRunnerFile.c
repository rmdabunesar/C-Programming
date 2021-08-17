for(i=0; i<n; i++) {
        for(j=i+1; j<n; j++) {

            if(my_array[j] < my_array[i]) {
                tmp = my_array[i];
                my_array[i] = my_array[j];
                my_array[j] = tmp;
            }

        }
    }