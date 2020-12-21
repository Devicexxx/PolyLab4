#include "figure.h"
//#include "MyForm.h"
//#include <windows.h>
#include"iostream"

using namespace System;

//Base
void BaseFig::setS(float i)
{
    if (i >= 0)
        S = i;
}
void BaseFig::setP(float i)
{
    if (i >= 0)
        P = i;
}
void BaseFig::setWidth(int i)
{
    if (i >= 0)
        Width = i;
}
void BaseFig::setHeight(int i)
{
    if (i >= 0)
        Height = i;
}

float BaseFig::GetS() { return S; }
float BaseFig::GetP() { return P; }
int BaseFig::GetWidth() { return Width; }
int BaseFig::GetHeight() { return Height; }
int BaseFig::GetType() { return type1; };


int rectangle::GetType() { return type1; };
int square::GetType() { return type1; };
int triangle::GetType() { return type1; };
int circle::GetType() { return type1; };
int ellipse::GetType() { return type1; };


BaseFig BaseFig::operator *=(int k)
{
    if (k < 0)
        throw 11;
    this->setHeight(this->GetHeight() * k);
    this->setWidth(this->GetWidth() * k);
    return *this;
}
void BaseFig::operator *(BaseFig& k)
{
    if (k.GetS() < 0)
        return;
    this->setS(this->GetS() * k.GetS());
}
BaseFig BaseFig::operator /=(float k)
{
    if (k < 0)
        throw 11;
    this->setHeight(this->GetHeight() / k);
    this->setWidth(this->GetWidth() / k);
    return *this;
}
void BaseFig::operator /(BaseFig& k)
{
    if (k.GetS() < 0)
        return;
    this->setS(this->GetS() / k.GetS());
}
bool BaseFig::operator >(BaseFig& k)
{
    if (this->GetS() > k.GetS())
        return true;
    return false;
}
bool BaseFig::operator <(BaseFig& k)
{
    if (this->GetS() < k.GetS())
        return true;
    return false;
}
bool BaseFig::operator ==(BaseFig& k)
{
    if (this->GetS() == k.GetS())
        return true;
    return false;
}


void BaseArr::settype(unsigned int i, unsigned int type)
{
    if (type >= 5) throw 11; // неверный тип
    if (i < Len)
    {
        //if (arr[i] != 0) 
        //    delete arr[i]; // Если уже создавалась фигура - удаляем
        switch (type) // В зависимости от типа создаем фигуры:
        {
        case 1:
            arr[i] = new rectangle; // прямоугольник
            break;
        case 2:
            arr[i] = new square; // квадрат
            break;
        case 3:
            arr[i] = new triangle; // треугольник
            break;
        case 4:
            arr[i] = new circle; // круг
            break;
        case 5:
            arr[i] = new ellipse; // элипс
            break;
        }
    }

}
void BaseArr::SET(unsigned int i, unsigned int type, unsigned int w, unsigned int h)
{
    if (type >= 5) throw 11; // неверный тип
    if (i < Len)
    {
        switch (type) // В зависимости от типа создаем фигуры:
        {
        case 1:
            arr[i]->setWidth(w); // прямоугольник
            arr[i]->setHeight(h);
            break;
        case 2:
            arr[i]->setHeight(h); // квадрат
            break;
        case 3:
            arr[i]->setWidth(w); // треугольник
            arr[i]->setHeight(h);
            break;
        case 4:
            arr[i]->setWidth(w); // круг
            break;
        case 5:
            arr[i]->setWidth(w); // элипс
            arr[i]->setHeight(h);
            break;
        }
    }
}
String^ BaseArr::ret(unsigned int i)
{
    if (i < Len)
    {
        String^ s = Convert::ToString(arr[i]->GetS()) + "/" + Convert::ToString(arr[i]->GetP());
        return s;
    }
}

void BaseArr::Change(unsigned int i, unsigned int type, unsigned int k)
{
    if (i < Len)
    {
        switch (type) // В зависимости от типа создаем фигуры:
        {
        case 1:
            (*arr)[i] *= k;
            break;
        case 2:
            (*arr)[i] /= k;
            break;
        case 3:
            break;
        case 4:
            break;
        case 5:
            break;
        }
    }
}

bool BaseArr::comparison(unsigned int i, unsigned int j, unsigned int type)
{
    if (i < Len)
    {
        switch (type) // В зависимости от типа создаем фигуры:
        {
        case 1:
            return(arr[i] > arr[j]);
        case 2:
            return(arr[i] < arr[j]);
        case 3:
            return(arr[i] == arr[j]);
        }
    }
}

int BaseArr::type(unsigned int i)
{
    return (arr[i]->GetType());
}

int BaseArr::Paint(unsigned int i, unsigned int x, unsigned int y)
{
    if (i < Len)
    {
        int m_p[8];
        int h = arr[i]->GetType();
        switch (h) // В зависимости от типа создаем фигуры:
        {
        case 1:
            m_p[0] = x;
            m_p[1] = y;
            m_p[2] = x + arr[i]->GetWidth();
            m_p[3] = y;
            m_p[4] = x;
            m_p[5] = y + +arr[i]->GetHeight();
            m_p[6] = x + arr[i]->GetWidth();
            m_p[7] = y + +arr[i]->GetHeight();
            return m_p[8];
        case 2:
            m_p[0] = x;
            m_p[1] = y;
            m_p[2] = x + arr[i]->GetHeight();
            m_p[3] = y;
            m_p[4] = x;
            m_p[5] = y + +arr[i]->GetHeight();
            m_p[6] = x + arr[i]->GetHeight();
            m_p[7] = y + +arr[i]->GetHeight();
            break;
        case 3:
            m_p[0] = x;
            m_p[1] = y;
            m_p[2] = x + arr[i]->GetWidth();
            m_p[3] = y + arr[i]->GetHeight();
            m_p[4] = x - arr[i]->GetWidth();
            m_p[5] = y - arr[i]->GetHeight();
            break;
        case 4:
            m_p[0] = x;
            m_p[1] = y;
            m_p[2] = x + arr[i]->GetWidth();
            m_p[3] = y + arr[i]->GetWidth();
            break;
        case 5:
            m_p[0] = x;
            m_p[1] = y;
            m_p[2] = x + arr[i]->GetWidth();
            m_p[3] = y + arr[i]->GetHeight();
            break;
        }
    }
}

//класс массив

BaseFig BaseArr:: operator [](unsigned int i)
{
    if (i < Len)
        return *arr[i];
    return *arr[0];
}
BaseArr::BaseArr(const BaseArr& TArr) // Конструкор копий
{
    Len = TArr.Len; // Устанавливаем размер
    *arr = new BaseFig[Len]; // Выделяем память
    for (unsigned int i = 0; i < Len; i++)
        arr[i] = TArr.arr[i]; // Копируем элементы
}
void BaseArr::setSize(unsigned int i)
{
    BaseFig* tmp;
    tmp = new BaseFig[Len];
    if (arr) // Если память выделялась ранее,
    {
        for (unsigned int k = 0; k < i && k < Len; k++)
            tmp[k] = *arr[k]; // Копируем элементы
        delete[] arr; // освобождаем память
    }
    arr = new BaseFig*[Len]; // и выделяем память
    for (unsigned int k = 0; k < Len && k < i; k++)
        *arr[k] = tmp[k];
    Len = i; // Устанавливаем новый размер
}
unsigned int BaseArr::getSize()
{
    return Len;
}


//прямоугольник

float rectangle::GetS()
{  
    S = Height * Width;
    return S;
}
float rectangle::GetP()
{
    P = 2 * (Height + Width);
    return P;
}


//void operator *(rectangle& k);
//void operator /(rectangle& k);
//bool operator >(rectangle& k);
//bool operator <(rectangle& k);
//bool operator ==(rectangle& k);
//
//
//void operator *(square& k);
//void operator /(square& k);
//bool operator >(square& k);
//bool operator <(square& k);
//bool operator ==(square& k);
//
//
//void operator *(triangle& k);
//void operator /(triangle& k);
//bool operator >(triangle& k);
//bool operator <(triangle& k);
//bool operator ==(triangle& k);
//
//
//void operator *(circle& k);
//void operator /(circle& k);
//bool operator >(circle& k);
//bool operator <(circle& k);
//bool operator ==(circle& k);
//
//
//void operator *(ellipse& k);
//void operator /(ellipse& k);
//bool operator >(ellipse& k);
//bool operator <(ellipse& k);
//bool operator ==(ellipse& k);

//квадрат

float square::GetS()
{
    S = Height * Height;
    return S;
}
float square::GetP()
{
    P = 4 * Height;
    return P;
}


//треугольник

float triangle::GetS()
{
    S = Height * Width / 2;
    return S;
}
float triangle::GetP()
{
    P = Width + 2 * sqrt(Height * Height + (Width / 2) * (Width / 2));
    return P;
}



//круг

float circle::GetS()
{
    S = 3.14 * Width * Width;
    return S;
}
float circle::GetP()
{
    P = 2 * 3.14 * Width;
    return P;
}


//элипс


float ellipse::GetS()
{
    S = 3.14 * Width * Height;
    return S;
}
float ellipse::GetP()
{
    P = 2 * 3.14 * sqrt((Width * Width + Height * Height) / 2);
    return P;
}




