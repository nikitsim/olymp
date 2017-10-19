int numbers(int a) {
	int q,w,e,r,t,y,u,i,o,p;
	if (a == 1) {
		return a;
	}
	if (a == 2) {
		q = a % 10;
		w = a / 10;
		return q, w;
        }
	if (a == 3) {
		q = a % 100;
		w = (a % 10) / 10;
		e = a / 100;
		return q,w,e;
        }
	if (a == 4) {
		q = a % 1000;
		w = (a % 100) / 100;
		e = (a % 10) / 10;
		r = a / 1000;
		return q,w,e,r;
        }
	if (a == 5) {
		q = a % 10000;
		w = (a % 1000) / 1000;
		e = (a % 100) / 100;
		r = (a % 10) / 10;
		t = a / 10000;
		return q,w,e,r,t;
        }
/*	if (a == 6) {
		
        }
	if (a == 7) {

        }
	if (a == 8) {

        }
	if (a == 9) {

        }
	if (a == 10) {

        }*/
}
