int alg(int a, int b, int c) {
	int d;
	for (;;){
		--a;
		if (a >= 0) {
			++d;
			--b;
			if (b >= 0) {
				++d;
				--c;
				if (c >= 0) {
					++d;
					--b;
					if (b >= 0) {
						++d;
						--a;
						if (a >= 0) {
							++d;
							--b;
							if (b >= 0) {
								++d;
								--c;
								if (c >= 0) {
									++d;
									--b;
									if (b >= 0) {
										++d;
									} else {break;}
								}else {break;}
							} else {break;}
						} else {break;}
					} else {break;}
				} else {break;}
			} else {break;}
		} else {break;}
	}
	return d;
}
