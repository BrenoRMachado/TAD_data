class Data 
{
    private:
        int dia, mes, ano;
        int numDiasMes [12] = {0,31,59,90,120,151,181,212,243,273,304,334}; // Quantidade de dias transcorridos até o més anterior

        // operações privadas 
        
        // método dataToInt
        int dataToInt(); // vai converter a data em um numero inteiro

        // método intToData
        Data intToData(int num);

    public:
        Data ( int d , int m, int a);
        Data ();
        ~Data ();

        // setters para dia, mes e ano
        void setDia(int d);
        void setMes(int m);
        void setAno(int a);

        // numero de dias entre duas datas

        int numDiasEntre2Datas(Data d); // o objeto que chamar essa operação é a data implicita
        // o objeto Data d vai ser um objeto passado por parâmetro pr valor, ou seja: Lidaremos com uma copia
        


};