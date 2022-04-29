

/*
           _____    
          / ___ \  
         / /__/ | ____  
        / __  _/'/    \+ +
       / /  \ \ | |||. |+  +
   + +/_/ + /_/+'\____/' + +
    + +++  +   ++  +  + ++  +
      creado por: rrjo
    
         ++ github: bite-rrjo ++
    Gracias por verme o usarme!!!!
*/
#define null 0
#define creator IanVC
#define version 1.0
#define ULongMax  18446744073709551615
#define CMax 14000

typedef unsigned long ulong;


class stg{
    private:
    typedef char* x_stg;
        x_stg stg = null;
        ulong len(char* txt){
            ulong n1 = 0;
            while(txt[n1] != null){
                n1 += 1;
            }
            return n1-1;
        }
        bool er = 0;

        char* sum(char* tx1, char* tx2){
            ulong n1 = 0;
            char* cn = null;
            while(tx1[n1] != null){
                n1 += 1;
            }
            n1 += 1;
            cn = new char[len(tx1) + len(tx2)];
            n1 = 0;
            while(tx1[n1] != null){
                cn[n1] = tx1[n1];
                n1 += 1;
            }
            ulong t2 = 0;
            while(tx2[t2] != null){
                cn[n1] = tx2[t2];
                n1 += 1;
                t2 += 1;
            }
            stg = cn;
            return cn;
        }
    public:
        char* s(char* __stg1, char* __stg2){
            return sum(__stg1, __stg2);
        }
        void operator()(char* __stg){
            stg = __stg;
        }
        char* operator()(){
            return stg;
        }
        bool checkerror(){
            return er;
        }
        
        ulong length(){
            ulong n1 = 0;
            while(stg[n1] != null){
                n1 += 1;
            }
            return n1;
        }
        void clear(){
            stg = null;
        }
        void delerror(){
            er = 0;
        }
        char* replace(ulong __s, ulong __e, char* newText){
            ulong n1 = length();
            ulong lT = len(newText);
            if(__s > n1 || __e > n1){
                er = true;
                return stg;
            }
            char* cn = new char[lT+n1-__e];
            n1 = 0;
            while(n1 < __s){
                cn[n1] = stg[n1];
                n1 += 1;
            }
            ulong tmp2 = __s + lT+1;
            char* tg2 = stg;
            cn = sum(cn, newText);
            ulong tmp1 = 0;
            n1 += __e;
            while(true){
                if(tg2[n1] == '\0'){
                    break;
                }
                cn[tmp2] = tg2[n1];
                tmp2 += 1;
                n1 += 1;
            }

            stg = cn;
            return cn;
        }
        char operator[](ulong __s){
            return stg[__s];
        }
        ::stg operator+(::stg __stg);
        ::stg operator+=(::stg __stg);
        ::stg operator=(char* __stg);
        ::stg operator=(const char* __stg);
        ::stg operator+(char* __stg);
        ::stg operator+(const char* __stg);
        ::stg operator+=(char* __stg);
        ::stg operator+=(const char* __stg);
};
stg stg::operator+(::stg  _Txt){
    stg = sum(stg, _Txt());
}
stg stg::operator+=(::stg  _Txt){
    stg = sum(stg, _Txt());
}
stg stg::operator=(char*  _Txt){
    stg = _Txt;   
}
stg stg::operator=(const char*  _Txt){
    stg = (char*)_Txt;   
}
stg stg::operator+(char*  _Txt){
    stg = sum(stg, _Txt); 
}
stg stg::operator+(const char*  _Txt){
    char* tmp1 = (char*)_Txt;
    stg = sum(stg, tmp1);   
}
stg stg::operator+=(char*  _Txt){
    stg = sum(stg, _Txt); 
}
stg stg::operator+=(const char*  _Txt){
    char* tmp1 = (char*)_Txt;
    stg = sum(stg, tmp1);   
}
