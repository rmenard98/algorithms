#ifndef __STRING__
#define __STRING__

class String{
    private:
        char * array;
        


    public:
        String();
        String(const char*);
        ~String();

        unsigned int length();
        void reverse();
        void append(const char);

};
#endif
