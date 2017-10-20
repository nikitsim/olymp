int num_dig(int a) {
	int i=0;
        for(;a>0;i++){
                a/=10;
        }
	return i;
}
