#include <iostream>
#include <cstdlib>
using namespace std;

int ***makeArray3D(int *sz);
void destroyArray3D(int ***arr, int *sz);

int main(int argc, char *argv[]) {
    if (argc < 2) {
        cout << "usage : ./str 1d 2d 3d ... \n";
        return -1;
    }
    int i, dim = argc - 1;
    int *size = new int[dim];
    
    for(i=1; i<argc;i++) {
        size[i-1] = atoi(argv[i]);
    }
    
    int ***arr3d = NULL;
    
    arr3d = makeArray3D(size);
    for(int i=0; i<size[0];i++)
        for(int j=0; j<size[1];j++)
            for(int k=0; k<size[2];k++)
                arr3d[i][j][k] = (i*size[1]+j)*size[2]+k;
    
    for(int i=0; i<size[0];i++) {
        cout << "i : " << i << endl;
        for(int j=0; j<size[1];j++) {
            for(int k=0; k<size[2];k++)
                cout << arr3d[i][j][k] << ' ';
            cout << endl;
        }
        cout << endl;
    }
    
    destroyArray3D(arr3d, size);
    return 0;
}

// 구현하세요.