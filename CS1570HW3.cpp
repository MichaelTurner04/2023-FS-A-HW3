// Programmer: Michael Turner
// Date: 9/29/2023
// File: cs1570hw3.cpp
// Assignment: HW3
// Purpose: this file contains the main function of the

#include <iostream>
#include <string>
using namespace std;
int main()
{
    char again;
    int length;
    string letter = "Eqpitcvwncvkqpu!Vjg Quect Cecfgoa qh Ocike ku vjtknngf vq kphqto aqw vjcv aqw jcxg dggp cfokvvgf vq qwt rtguvkikqwu kpuvkvwvkqp.Aqwt jctf yqtm, vcngpv, cpf rcuukqp hqt ocike jcxg gctpgf aqw c rnceg coqpi vjg pgzv igpgtcvkqp qh vjg yqtnfu itgcvguv ykbctfu.Kp cffkvkqp vq vjg 8 ycpfu tgswktgf hqt vjg qrgpkpi yggm, yg yqwnf nkmg vq tgokpf aqw vq cnuq dtkpi c ecogn ykvj aqw cu c ocikecn etgcvwtg rgv.Vjku ku c pgy tgswktgogpv hqt cnn uvwfgpvu, cu ecognu ctg mpqyp hqt vjgkt cdknkva vq vtcxgtug gxgp vjg jctujguv qh vgttckpu, ocmkpi vjgo rgthgev eqorcpkqpu hqt cpa aqwpi ykbctf qp vjg iq.Rngcug pqvg vjcv vjg vwkvkqp hgg ku pqy hkzgf cv $50, 000 rgt ugoguvgt hqt cnn uvwfgpvu fwg vq kphncvkqp.Vjku kpxguvogpv kp aqwt gfwecvkqp cpf vtckpkpi yknn ugv aqw wr hqt c nkhgvkog qh ocikecn uweeguu.Yg nqqm hqtyctf vq ygneqokpi aqw vq vjg cecfgoa cpf jgnrkpi aqw wpnqem aqwt hwnn rqvgpvkcn.Ygnn fqpg!";
    cout << "You're decoded aceptance letter is: \n";
    for (int i = 0; letter.length() > i; ++i) {
        char ch = letter[i];
        if (ch >= 'a' && ch <= 'z') {
            ch -= 2;
            if (ch < 'a') {
                ch = ch + 'z' - 'a' + 1;
            }
            letter[i] = ch;
        }
        else if (ch >= 'A' && ch <= 'Z') {
            ch -= 2;
            if (ch < 'A') {
                ch = ch + 'Z' - 'A' + 1;
            }
            letter[i] = ch;
        }
        cout << ch;
    }
    cout << endl;
    do {
        int caesarCipher;
        int shift;
        string message;
        cout << "Would you like to encrypt or decrypt your message \nencrypt = 1 \ndecrypt = 2 " << endl;
        cin >> caesarCipher;
        cout << "Enter your message: ";
        cin.ignore();
        getline(cin, message);
        cout << "How many positions would you like to shift? (0-200) ";
        cin >> shift;
        while (shift < 0 || shift > 200) {
            cout << "Invalid input. Please enter input 0-200 " << endl;
            cin >> shift;
        }
        if (caesarCipher == 1) {
            for (int i = 0; message.length() > i; ++i) {
                char ch = message[i];
                if (ch >= 'a' && ch <= 'z') {
                    ch += shift;
                    if (ch > 'z') {
                        ch = ch - 'z' + 'a' - 1;
                    }
                    message[i] = ch;
                }
                else if (ch >= 'A' && ch <= 'Z') {
                    ch += shift;
                    if (ch > 'Z') {
                        ch = ch - 'Z' + 'A' - 1;
                    }
                    message[i] = ch;
                }
                cout << ch;
            }
        }
        else if (caesarCipher == 2) {
            for (int i = 0; message.length() > i; ++i) {
                char ch = message[i];
                if (ch >= 'a' && ch <= 'z') {
                    ch -= shift;
                    if (ch < 'a') {
                        ch = ch + 'z' - 'a' + 1;
                    }
                    message[i] = ch;
                }
                else if (ch >= 'A' && ch <= 'Z') {
                    ch -= shift;
                    if (ch < 'Z') {
                        ch = ch + 'Z' - 'A' + 1;
                    }
                    message[i] = ch;
                }
                cout << ch;
            }
        }
        cout << "\nWould you like to continue using the program? (y/n) ";
        cin >> again;
    } while (again == 'y' || again == 'Y');
    cout << "Thanks for using the Oscar Academy of Magic Caesar Cipher Program!" << endl << "Keep making magic!";
    return 0;
    

}