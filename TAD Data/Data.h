class Data 
{
    private:
        int dia, mes, ano;
        int numDiasMes [12] = {0,31,59,90,120,151,181,212,243,273,304,334}; // Quantidade de dias transcorridos até o més anterior
    public:
        Data ( int d , int m, int a);
        Data ();
        ~Data ();

        // setters para dia, mes e ano
        void setDia(int d);
        void setMes(int m);
        void setAno(int a);


};