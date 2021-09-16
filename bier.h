#ifndef BIER_H
#define BIER_H

#include <cstring>
using namespace std;

class bier {
public:
    virtual void alkohol() = 0;
    virtual void geschmack() = 0;
    virtual void farbe() = 0;
    virtual void name() = 0;
};

class mitAlkohol : public bier {
public:
    virtual void alkohol(){
        cout << "hat 4,5% Alkohol" << endl;
    }
};

class Radler : public bier {
public:
    virtual void alkohol(){
        cout << "Es hat 2,5% Alkohol" << endl;
    }
};

class ohneAlkohol : public bier {
public:
    virtual void alkohol(){
        cout << "Es hat 0,0% Alkohol" << endl;
    }
};


#define SPEZIES(cname,oberklasse,geschmackS,farbeS) \
    class cname : public oberklasse {                \
        public:                                      \
            cname(char* Name){strcpy(m_Name, Name); }    \
            virtual void geschmack(){                       \
                cout << "und hat Gescmack: " geschmackS << endl; \
            }                                                       \
            virtual void farbe(){                                   \
                cout << "sowie Farbe: " farbeS << endl;           \
            }                                                       \
            virtual void name(){                                   \
                cout << "Das Bier: " << m_Name << endl;           \
            }                                                       \
        private:                                                    \
            char m_Name[20];                                           \
};                                                                  \

#endif // BIER_H
