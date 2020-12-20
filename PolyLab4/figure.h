#pragma once

using namespace System;

class BaseFig
{
private:

protected:
	float S, P;  // S-площадь P-периметр
public:
	BaseFig() { S = 0; P = 0; }
    void setS(float i);
    void setP(float i);
    float GetS();
    float GetP();

    void operator *(float k);
    void operator *(BaseFig& k);
    void operator /(float k);
    void operator /(BaseFig& k);
    bool operator >(BaseFig& k);
    bool operator <(BaseFig& k);
    bool operator ==(BaseFig& k);

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
    //void Clear();

    BaseFig  operator [] (unsigned int i);
    unsigned int getSize();
    //BaseFig operator [] (System::String^ s);
    //void  operator = (BaseArr& k);

    void settype(unsigned int i, unsigned int type);
};



class rectangle : public BaseFig // прямоугольник
{
protected:
    float Len, Hei;  // 
public:
    rectangle() { Len = 0; Hei = 0; S = 0; P = 0; }
    void setLen(float i);
    void setHei(float i);
    float GetLen();
    float GetHei();
    float GetS();
    float GetP();

};

class square : public rectangle //квадрат
{
public:
    square() { Len = 0; S = 0; P = 0; }
    float GetS();
    float GetP();
};

class triangle : public BaseFig // треуголник
{
protected:
    float bottom, hei;  // 
public:
    triangle() { bottom = 0; hei = 0; S = 0; P = 0; }
    void setbottom(float i);
    void sethei(float i);
    float Getbottom();
    float Gethei();
    float GetS();
    //float GetP();

};

class circle : public BaseFig // круг
{
protected:
    float rad, x, y;  // 
public:
    circle() { rad = 0; x = 0; y = 0; }
    void setrad(float i);
    void setx(float i);
    void sety(float i);
    float Getrad();
    float Getx();
    float Gety();
    float GetS();
    float GetP();

};


class ellipse : public circle // элипс
{
protected:  //
    float a, b;
public:
    ellipse() { a = 0; b = 0; x = 0; y = 0; }
    void seta(float i);
    void setb(float i);
    void setx(float i);
    void sety(float i);
    float Geta();
    float Getb();
    float Getx();
    float Gety();
    float GetS();
    float GetP();
};









