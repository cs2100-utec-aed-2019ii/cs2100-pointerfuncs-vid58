#include <iostream>
using namespace std;

/*_bubblesort_ con punteros a funcion*/
void * _bubblesort_(void * _array_, void (*_puntero_) (void *, int _i, int _k),int t){

    int _k=0;

    int _tam_= t-1;

    for (int i = 0; i < _tam_ ; ++i) {
        for (int k = 0; k < _tam_ - i; ++k) {
            _puntero_(_array_, k, _k);

        }
    }
    return _array_;

}

/*------FUNCTIONS------*/

// _i -> varible  (k)
// _k -> tamaño del arreglo (_tam_)

void  _b_int_ (void * _vector_, int _i,int _k){

    _k=5;

    int temp;

    if( ((int*)_vector_)[_i] > ((int*)_vector_)[_i+1] )
    {
        temp=((int*)_vector_)[_i] ;
        ((int*)_vector_)[_i]  = ((int*)_vector_)[_i+1];
        ((int*)_vector_)[_i+1] = temp;

    }
    cout<<"\n1. Arreglo : ";
    for(int i=0;i<_k;++i) {
        cout << " " << ((int*)_vector_)[i];
    }

}

void  _b_float_ (void * _vector_, int _i,int _k){

    _k=5;
    float temp;

    if( ((float*)_vector_)[_i] > ((float*)_vector_)[_i+1] )
    {
        temp=((float *)_vector_)[_i] ;
        ((float*)_vector_)[_i]  = ((float*)_vector_)[_i+1];
        ((float*)_vector_)[_i+1] = temp;

    }
    cout<<"\n2. Arreglo : ";
    for(int i=0;i<5;++i) {
        cout << " " << ((float*)_vector_)[i];
    }
}

void  _b_double_ (void * _vector_, int _i,int _k){

    _k=5;
    double temp;

    if( ((double*)_vector_)[_i] > ((double*)_vector_)[_i+1] )
    {
        temp=((double *)_vector_)[_i] ;
        ((double*)_vector_)[_i]  = ((double*)_vector_)[_i+1];
        ((double*)_vector_)[_i+1] = temp;

    }
    cout<<"\n3. Arreglo : ";
    for(int i=0;i<_k;++i) {
        cout << " " << ((double *)_vector_)[i];
    }

}

void  _b_char_ (void * _vector_, int _i,int _k){

    _k=6;

    char temp;

    if( ((char*)_vector_)[_i] > ((char*)_vector_)[_i+1] )
    {
        temp=((char*)_vector_)[_i] ;
        ((char*)_vector_)[_i]  = ((char*)_vector_)[_i+1];
        ((char*)_vector_)[_i+1] = temp;

    }
    cout<<"\n4. Arreglo : ";
    for(int i=0;i<_k;++i) {
        cout << " " << ((char*)_vector_)[i];
    }

}
/*------MAIN------*/
int main(){
    //tamaño de los arreglos :o
    int i_1 = 5;
    int i_2 = 5;
    int i_3 = 5;
    int i_4 = 6;
    //arreglos
    int _array_1 [5] = {2,20,7,108,9};
    float _array_2 [5] = {4,5,9,7,2};
    double _array_3 [5] = {3.0,8.0,2.0,4.0,15.0};
    char _array_4 [6] = {'k','a','r','l','o','s'};

    cout<<"\n\n1. Paso a paso: ";
    _bubblesort_(_array_1,_b_int_,i_1);
    cout<<"\n\n2. Paso a paso: ";
    _bubblesort_(_array_2,_b_float_,i_2);
    cout<<"\n\n3. Paso a paso: ";
    _bubblesort_(_array_3,_b_double_,i_3);
    cout<<"\n\n4. Paso a paso: ";
    _bubblesort_(_array_4,_b_char_,i_4);


    return 0;
}
