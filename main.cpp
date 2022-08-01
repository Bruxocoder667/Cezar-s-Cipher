#include <iostream>
#include<string.h>

using namespace std;

#define tamMax 100

//char decrypt();

int main(){

    cout << "Digite a cifra:";
    char msg[tamMax];
    cin.getline (msg, tamMax);
    int length = strlen(msg);

    char dec[length];

    for(int j=0;j<=26;j++){
        for(int i=0;i<10;i++){
            dec[i] = msg[i] - j;
            if(dec[i] < 'A'){
                dec[i] = dec[i] + 'Z' - 'A' + 1;
            }
        }
        cout << j << "-" << dec << endl;
    }

    cout << "Qual das opções parece mais correta?:";
    int n;
    cin >> n ;

    for(int i=0;i<length;i++){
            dec[i] = msg[i] - n;
            if(dec[i] < 'A'){
                dec[i] = dec[i] + 'Z' - 'A' + 1;
            }
        }

        cout << "\nMensagem final:\n" << dec << endl;

    return 0;
}

