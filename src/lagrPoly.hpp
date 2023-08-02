#pragma once 

namespace Lagrange {
	

	struct couple {
		float x;
		float fx;
	};


	class Poly {
	
		public :
			Poly(couple data[], int size_data);
			float evaluate(float x);
			float showCoef(int coefNumber);
		private :
			~Poly();
			int N;
			float * coefs;
	};

}

