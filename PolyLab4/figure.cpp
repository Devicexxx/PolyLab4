#include "figure.h"
//#include "MyForm.h"
//#include <windows.h>
#include"iostream"

using namespace System;

//Base
void BaseFig::setS(float i)
{
    if (i <= 0)
        S = i;
}
void BaseFig::setP(float i)
{
    if (i <= 0)
        P = i;
}
float BaseFig::GetS() { return S; }
float BaseFig::GetP() { return P; }

//void BaseFig::operator =(rectangle& k)
//{
//
//}
//void BaseFig::operator =(square& k)
//{
//
//}
//void BaseFig::operator =(triangle& k)
//{
//
//}
//void BaseFig::operator =(circle& k)
//{
//
//}
//void BaseFig::operator =(ellipse& k)
//{
//
//}

void BaseFig::operator *(float k)
{
    if (k < 0)
        return;
    this->setS(this->GetS() * k);
}
void BaseFig::operator *(BaseFig& k)
{
    if (k.GetS() < 0)
        return;
    this->setS(this->GetS() * k.GetS());
}
void BaseFig::operator /(float k)
{
    if (k < 0)
        return;
    this->setS(Convert::ToInt32((*this).GetS()) / k);
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

//класс массив

BaseFig BaseArr:: operator [](unsigned int i)
{
    if (i < Len)
        return arr[i];
    return arr[0];
}
BaseArr::BaseArr(const BaseArr& TArr) // Конструкор копий
{
    Len = TArr.Len; // Устанавливаем размер
    arr = new BaseFig[Len]; // Выделяем память
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
            tmp[k] = arr[k]; // Копируем элементы
        delete[] arr; // освобождаем память
    }
    arr = new BaseFig[Len]; // и выделяем память
    for (unsigned int k = 0; k < Len && k < i; k++)
        arr[k] = tmp[k];
    Len = i; // Устанавливаем новый размер
}
unsigned int BaseArr::getSize()
{
    return Len;
}

//прямоугольник

void rectangle::setLen(float i)
{
    if (i <= 0)
        Len = i;
}
void rectangle::setHei(float i)
{
    if (i <= 0)
        Hei = i;
}
float rectangle::GetLen() { return (Len); }
float rectangle::GetHei() { return (Hei); }
float rectangle::GetS() { return (Hei * Len); }
float rectangle::GetP() { return (2 * (Hei + Len)); }


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

float square::GetS() { return (Len * Len); }
float square::GetP() { return (4 * Len); }



//треугольник


void triangle::setbottom(float i)
{
    if (i <= 0)
        bottom = i;
}
void triangle::sethei(float i)
{
    if (i <= 0)
        hei = i;
}
float triangle::Getbottom() { return (bottom); }
float triangle::Gethei() { return (hei); }
float triangle::GetS() { return (bottom * hei / 2); }
//String^ triangle::GetP() { return Convert::ToString(bottom * hei / 2); }


//круг

void circle::setrad(float i) { rad = i; }
void circle::setx(float i) { x = i; }
void circle::sety(float i) { y = i; }
float circle::Getrad() { return (rad); }
float circle::Getx() { return (x); }
float circle::Gety() { return (y); }
float circle::GetS() { return (3, 14 * rad * rad); }
float circle::GetP() { return (2 * 3.14 * rad); }


//элипс


void ellipse::seta(float i) { a = i; }
void ellipse::setb(float i) { b = i; }
void ellipse::setx(float i) { x = i; }
void ellipse::sety(float i) { y = i; }
float ellipse::Geta() { return (a); }
float ellipse::Getb() { return (b); }
float ellipse::Getx() { return (x); }
float ellipse::Gety() { return (y); }
float ellipse::GetS() { return (3.14 * a * b); }
float ellipse::GetP() { return (2*3.14*sqrt((a*a+b*b)/2)); }




