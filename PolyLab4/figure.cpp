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
    if (type > 5) throw 11; // �������� ���
    if (i < Len)
    {
        //if (arr[i] != 0) 
        //    delete arr[i]; // ���� ��� ����������� ������ - �������
        switch (type) // � ����������� �� ���� ������� ������:
        {
        case 1:
            arr[i] = new rectangle; // �������������
            break;
        case 2:
            arr[i] = new square; // �������
            break;
        case 3:
            arr[i] = new triangle; // �����������
            break;
        case 4:
            arr[i] = new circle; // ����
            break;
        case 5:
            arr[i] = new ellipse; // �����
            break;
        }
    }

}
void BaseArr::SET(unsigned int i, unsigned int type, unsigned int w, unsigned int h)
{
    if (type > 5) throw 11; // �������� ���
    if (i < Len)
    {
        switch (type) // � ����������� �� ���� ������� ������:
        {
        case 1:
            arr[i]->setWidth(w); // �������������
            arr[i]->setHeight(h);
            break;
        case 2:
            arr[i]->setHeight(h); // �������
            break;
        case 3:
            arr[i]->setWidth(w); // �����������
            arr[i]->setHeight(h);
            break;
        case 4:
            arr[i]->setWidth(w); // ����
            break;
        case 5:
            arr[i]->setWidth(w); // �����
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

void BaseArr::clear()
{
    for (int i = 0; i < Len; i++)
    {
        delete arr[i];
        arr[i] = new BaseFig;
    }
}

void BaseArr::Change(unsigned int i, unsigned int type, unsigned int k)
{
    if (i < Len)
    {
        switch (type) // � ����������� �� ���� ������� ������:
        {
        case 1:
            (*arr)[i] *= k;
            break;
        case 2:
            (*arr)[i] /= k;
            break;
        case 3:
        {
            delete arr[k];
            int l = arr[i]->GetType();
            switch (l) // � ����������� �� ���� ������� ������:
            {
            case 1:
                arr[k] = new rectangle; // �������������
                break;
            case 2:
                arr[k] = new square; // �������
                break;
            case 3:
                arr[k] = new triangle; // �����������
                break;
            case 4:
                arr[k] = new circle; // ����
                break;
            case 5:
                arr[k] = new ellipse; // �����
                break;
            }
            arr[k] = arr[i];
            break;
        }
        case 4:
            break;
        case 5:
            break;
        }
    }
}

void BaseArr::sort()
{
    BaseFig* tmp;
    tmp = new BaseFig;
    for (int i = 0; i < Len - 1; i++)
    {
        for (int j = 0; j < Len - i - 1; j++)
        {
            if (arr[j]->GetS() > arr[j + 1]->GetS())
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}


bool BaseArr::comparison(unsigned int i, unsigned int j, unsigned int type)
{
    if (i < Len)
    {
        switch (type)
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
    if (arr[i]->GetType() == NULL)
        throw 10;
    return (arr[i]->GetType());
}


//����� ������


BaseFig BaseArr:: operator [](unsigned int i)
{
    if (i < Len)
        return *arr[i];
    return *arr[0];
}
BaseArr::BaseArr(const BaseArr& TArr) // ���������� �����
{
    Len = TArr.Len; // ������������� ������
    *arr = new BaseFig[Len]; // �������� ������
    for (unsigned int i = 0; i < Len; i++)
        arr[i] = TArr.arr[i]; // �������� ��������
}
void BaseArr::setSize(unsigned int i)
{
    BaseFig* tmp;
    tmp = new BaseFig[Len];
    if (arr) // ���� ������ ���������� �����,
    {
        for (unsigned int k = 0; k < i && k < Len; k++)
            tmp[k] = *arr[k]; // �������� ��������
        delete[] arr; // ����������� ������
    }
    arr = new BaseFig*[Len]; // � �������� ������
    for (unsigned int k = 0; k < Len && k < i; k++)
        *arr[k] = tmp[k];
    Len = i; // ������������� ����� ������
}
void BaseArr::setSizerand(unsigned int i)
{
    for (int k = 0; k < i; k++)
    {
        int r1 = rand() % 10;
        int r2 = rand() % 10;
        int type = rand() % 5;
        switch (type)
        {
        case 0:
        {
            arr[k] = new rectangle;
            arr[k]->setHeight(r1);
            arr[k]->setWidth(r2);
            break;
        }
        case 1:
        {
            arr[k] = new square; // �������
            arr[k]->setHeight(r1);
            break;
        }
        case 2:
        {
            arr[k] = new triangle; // �����������
            arr[k]->setHeight(r1);
            arr[k]->setWidth(r2);
            break;
        }
        case 3:
        {
            arr[k] = new circle; // ����
            arr[k]->setWidth(r1);
            break;
        }
        case 4:
        {
            arr[k] = new ellipse; // �����
            arr[k]->setHeight(r1);
            arr[k]->setWidth(r2);
            break;
        }
        }
    }
    Len = i; // ������������� ����� ������
}

void BaseArr::setSizestep(unsigned int i, unsigned int j)
{
    for (int k = 0; k < i; k++)
    {
        
        switch (k % 5)
        {
        case 0:
        {
            arr[k] = new rectangle;
            arr[k]->setHeight(j);
            arr[k]->setWidth(j+2);
            j += j;
            break;
        }
        case 1:
        {
            arr[k] = new square; // �������
            arr[k]->setHeight(j);
            j += j;
            break;
        }
        case 2:
        {
            arr[k] = new triangle; // �����������
            arr[k]->setHeight(j);
            arr[k]->setWidth(j+2);
            j += j;
            break;
        }
        case 3:
        {
            arr[k] = new circle; // ����
            arr[k]->setWidth(j);
            j += j;
            break;
        }
        case 4:
        {
            arr[k] = new ellipse; // �����
            arr[k]->setHeight(j);
            arr[k]->setWidth(j+2);
            break;
        }
        }
    }
    Len = i;
}

unsigned int BaseArr::getSize()
{
    return Len;
}

String^ BaseArr::getvalue(unsigned int i)
{
    int k = arr[i]->GetType();
    switch (k)
    {
    case 1:
    {
        return (" ������- " + Convert::ToString(arr[i]->GetWidth()) + " ������- " + Convert::ToString(arr[i]->GetHeight()));
    }
    case 2:
    {
        return (" �������- " + Convert::ToString(arr[i]->GetHeight()));
    }
    case 3:
    {
        return (" ���������- " + Convert::ToString(arr[i]->GetWidth()) + " ������- " + Convert::ToString(arr[i]->GetHeight()));
    }
    case 4:
    {
        return (" ������- " + Convert::ToString(arr[i]->GetWidth()));
    }
    case 5:
    {
        return (" �- " + Convert::ToString(arr[i]->GetHeight()) + " b- " + Convert::ToString(arr[i]->GetWidth()));
    }
    }
}
//�������������

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

//�������

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


//�����������

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



//����

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


//�����


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




