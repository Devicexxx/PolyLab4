#pragma once

using namespace System;

class BaseFig
{
protected:
    int Width, Height; // Ширина и высота фигуры
    int Left, Top; // Координаты верхнего левого угла

public:
    BaseFig()
    {
        Width = 10;
        Height = 10;
        Left = 1;
        Top = 1;
        /*Color = 0;
        Canvas = 0;*/
    }
    BaseFig(int w, int h, int l, int t)
    {
        Width = w;
        Height = h;
        Left = l;
        Top = t;
        /*Color = 0;
        Canvas = 0;*/
    }
    void SetWidth(int w);
    void SetHeight(int h);
    void SetWH(int w, int h) { SetWidth(w); SetHeight(h); }
    void SetLeft(int l) { Left = l; }
    void SetTop(int t) { Top = t; }
    void SetLT(int l, int t) { Left = l; Top = t; }
    /*void SetColor(TColor c) { Color = c; }
    void SetCanvas(TCanvas* cnv) { Canvas = cnv; }*/
    int GetWidth() { return Width; }
    int GetHeight() { return Height; }
    int GetLeft() { return Left; }
    int GetTop() { return Top; }

    virtual void SetWidth(int w);
    virtual void SetHeight(int h);
    /*TColor GetColor() { return Color; }
    TCanvas* GetCanvas() { return Canvas; }*/
    virtual int CalcArea() = 0; // Вычисление площади фигуры


	/*BaseFig() { S = 0; P = 0; }
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
    virtual void SET(unsigned int i, unsigned int type);*/

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
        Len = 0;
        arr = 0;
        setSize(l);
    }
    ~BaseArr() { Clear(); }
    BaseArr(const BaseArr& TArr);// Конструкор копий

    void setSize(unsigned int i);
    void Clear();

    BaseFig*  operator [] (unsigned int i);
    unsigned int getSize();
    //BaseFig operator [] (System::String^ s);
    //void  operator = (BaseArr& k);

    void settype(unsigned int i, unsigned int type);
};



class rectangle : public BaseFig // прямоугольник
{
protected:
    //float Len, Hei;  // 
public:

    rectangle() {};
    rectangle(int w, int h, int l, int t) : BaseFig(w, h, l, t) {};
    int CalcArea(); // Вычисление площади фигуры
    /*void Draw();*/ // Рисование фигуры

    /*rectangle() { Len = 0; Hei = 0; S = 0; P = 0; }
    void setLen(float i);
    void setHei(float i);
    float GetLen();
    float GetHei();
    float GetS();
    float GetP();
    virtual void SET(unsigned int i, unsigned int type);*/
};

class square : public rectangle //квадрат
{
public:
    square() {};
    square(int w, int h, int l, int t) : rectangle(w, h, l, t) {};
    void SetWidth(int w);
    void SetHeight(int h);

    /*square() { Len = 0; S = 0; P = 0; }
    float GetS();
    float GetP();*/
};

class triangle : public BaseFig // треуголник
{
protected:
    //float bottom, hei;  // 
public:

    triangle() {};
    triangle(int w, int h, int l, int t) : BaseFig(w, h, l, t) {};
    int CalcArea(); // Вычисление площади фигуры
    /*void Draw();*/ // Рисование фигуры

   /* triangle() { bottom = 0; hei = 0; S = 0; P = 0; }
    void setbottom(float i);
    void sethei(float i);
    float Getbottom();
    float Gethei();
    float GetS();*/
    //float GetP();

};

class circle : public ellipse // круг
{
protected:
    //float rad, x, y;  // 
public:
    circle() {};
    circle(int w, int h, int l, int t) : ellipse(w, h, l, t) {};
    void SetWidth(int w);
    void SetHeight(int h);



   /* circle() { rad = 0; x = 0; y = 0; }
    void setrad(float i);
    void setx(float i);
    void sety(float i);
    float Getrad();
    float Getx();
    float Gety();
    float GetS();
    float GetP();*/

};


class ellipse : public BaseFig // элипс
{
protected:  //
    float a, b;
public:

    ellipse() {};
    ellipse(int w, int h, int l, int t) : BaseFig(w, h, l, t) {};
    int CalcArea(); // Вычисление площади фигуры
    //void Draw(); // Рисование фигуры



   /* ellipse() { a = 0; b = 0; x = 0; y = 0; }
    void seta(float i);
    void setb(float i);
    void setx(float i);
    void sety(float i);
    float Geta();
    float Getb();
    float Getx();
    float Gety();
    float GetS();
    float GetP();*/
};









