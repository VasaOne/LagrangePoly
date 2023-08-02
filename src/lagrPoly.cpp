#include "lagrPoly.hpp"

Poly::Poly(couple data[], int size_data){
	N = size_data;
	coefs = new float [N];

}




Poly::Poly(){
	delete[] coefs;		
}


