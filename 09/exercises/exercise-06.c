int digit(int n, int k){
    // 832, 1
    
    int map[4];
    int i = 1;

    for (i; i < (sizeof(map) / sizeof(map[0])); i++){
        int get_number = n % 10;
        map[i] = get_number;
        int divide_number = n / 10;
        n = divide_number;
    }

    if (k > 0 && k < (sizeof(map) / sizeof(map[0]))) {
        return map[k];
    }

}
