#ifndef KLOCEK_H
#define KLOCEK_H
enum ksztalcik
{
    brak,
    ksztaltS,
    ksztaltZ,
    ksztaltI,
    ksztaltT,
    ksztaltO,
    ksztaltL,
    ksztaltML
};



class klocek
{

private:
    ksztalcik KsztaltKlocka;
    int wymiary[4][2];
    void setX(int index, int x) { wymiary [index][0]=x;}
    void setY(int index, int y) { wymiary [index][1]=y;}

public:
    //konstruktor
      klocek() {setKsztalt(brak);}
      void setKsztalt(ksztalcik ksztalt);
      void setLosowyKsztalt();
      //chuj ci w dupsko
      ksztalcik shape() const { return KsztaltKlocka; }
      int x(int index) const { return wymiary[index][0];}
      int y(int index) const { return wymiary[index][1];}
      int minX() const;
      int minY() const;
      int maxX() const;
      int maxY() const;
      klocek przewrocLewo() const;
      klocek przewrocPrawo() const;
};








#endif // KLOCEK_H
