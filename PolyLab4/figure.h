#pragma once

using namespace System;

class BaseFig
{
protected:
	float S, P;// S-площадь P-периметр
    int Width, Height, type1;
public:
    BaseFig() { Width = 0, Height = 0, S = 0; P = 0; type1 = 0; }

    void setS(float i);
    void setP(float i);
    void setWidth(int i);
    void setHeight(int i);


    virtual float GetS();
    virtual float GetP();
    virtual int GetType();
    int GetWidth();
    int GetHeight();

    BaseFig operator *=(int k);
    void operator *(BaseFig& k);
    BaseFig operator /=(float k);
    void operator /(BaseFig& k);
    bool operator >(BaseFig& k);
    bool operator <(BaseFig& k);
    bool operator ==(BaseFig& k);


    friend class BaseArr;
};


//template< class T >
//void newmem(T* type, unsigned int numItems);


public class BaseArr
{
private:
    BaseFig** arr; // ?
    unsigned int Len; //размер масива
public:
    BaseArr() { Len = 0; arr = 0; }
    BaseArr(unsigned int l)
    {
        Len = l;
        arr = new BaseFig*[l];
    }
    ~BaseArr() {};
    BaseArr(const BaseArr& TArr);// Конструкор копий
    void setSize(unsigned int i);
    void setSizerand(unsigned int i);
    void setSizestep(unsigned int i, unsigned int j);
    //void Clear();

    BaseFig  operator [] (unsigned int i);
    unsigned int getSize();
    //BaseFig operator [] (System::String^ s);
    //void  operator = (BaseArr& k);

    void settype(unsigned int i, unsigned int type);
    void SET(unsigned int i, unsigned int type, unsigned int w, unsigned int h);
    String^ ret(unsigned int i);
    void Change(unsigned int i, unsigned int type, unsigned int k);
    bool comparison(unsigned int i, unsigned int j, unsigned int type);
    int type(unsigned int i);
    void sort();
    void clear();
    String^ getvalue(unsigned int i);
    friend class Basefig;
    friend class intarr;
};

class rectangle : public BaseFig // прямоугольник
{
protected:
    
public:
    rectangle() { Height = 0; Width = 0; S = 0; P = 0; type1 = 1;}

    float GetS();
    float GetP();
    int GetType();
};

class square : public rectangle //квадрат
{
public:
    square() { Height = 0; S = 0; P = 0; type1 = 2;}
  
    float GetS();
    float GetP();
    int GetType();
};

class triangle : public BaseFig // треуголник
{
protected:
    float bottom, hei;  // 
public:
    triangle() { Height = 0; Width = 0; S = 0; P = 0; type1 = 3; }
 
    float GetS();
    float GetP();
    int GetType();
};

class circle : public BaseFig // круг
{
protected:

public:
    circle() { Width = 0; S = 0; P = 0; type1 = 4; }
  
    float GetS();
    float GetP();
    int GetType();
};


class ellipse : public circle // элипс
{
protected:

public:
    ellipse() { Height = 0; Width = 0; type1 = 5; }

    float GetS();
    float GetP();
    int GetType();
};









