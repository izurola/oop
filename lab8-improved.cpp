#include <iostream>
#include <cmath>
#define pi 3.14
using namespace std;
class Shape
{
private:
    string name;

public:
    virtual void PiremetrOhoh() = 0;
    void SetName(const string
                     &shapeName);
    string GetName();
};
class TwoDShape : public Shape
{
    float talbai;
    float piremetr;
    float urt;

public:
    virtual void TalbaiOloh() = 0;
    void Talbai_Piremetr_Oloh(float urt);
    void SetTalbai(float a);
    float GetTalbai();
    void SetPiremetr(float a);
    float GetPiremetr();
    void SetUrt(float a);
    float GetUrt();
};
class Circle : public TwoDShape
{
    float centerX, centerY;
    float radius;

public:
    Circle();
    void UtgaAvah();
    void PiremetrOhoh() override;
    void TalbaiOloh() override;
};
class Triangle : public TwoDShape
{
    pair<float, float> oroi1;
    pair<float, float> oroi2;
    pair<float, float> oroi3;
    float taliinUrt;

public:
    Triangle();
    void UtgaAvah();
    void BusadOroigOloh();
    void PiremetrOhoh() override;
    void TalbaiOloh() override;
};
class Square : public TwoDShape
{
    pair<float, float> oroi1;
    pair<float, float> oroi2;
    pair<float, float> oroi3;
    pair<float, float> oroi4;
    float taliinUrt;

public:
    Square();
    void UtgaAvah();
    void BusadOroigOloh();
    void PiremetrOhoh() override;
    void TalbaiOloh() override;
};
void Shape::SetName(const string
                        &shapeName)
{
    name = shapeName;
}
string Shape::GetName()
{
    return name;
}
Circle ::Circle()
{
    SetName("Toirog");
}
Square ::Square()
{
    SetName("Kvadrat");
}
Triangle ::Triangle()
{
    SetName("Gurvaljin");
}
void Circle ::UtgaAvah()
{
    cout << "Toirgiin tuviig oruulna uu " << endl;
    cout << "X : ";
    cin >> centerX;
    cout << "Y : ";
    cin >> centerY;
    cout << "Radiu : ";
    cin >> radius;
    SetUrt(radius);
    // Talbai_Piremetr_Oloh(radius);
}
void Triangle ::UtgaAvah()
{
    cout << "Gurvaljnii deed oroin tsegiig oruulna uu " << endl;
    cout << "X : ";
    cin >> oroi1.first;
    cout << "Y : ";
    cin >> oroi1.second;
    cout << "Taliin urt : ";
    cin >> taliinUrt;
    SetUrt(taliinUrt);
    // Talbai_Piremetr_Oloh(taliinUrt);
}
void Square ::UtgaAvah()
{
    cout << "Kvadratiin zuun deed oroin tsegiig oruulna uu " << endl;
    cout << "X : ";
    cin >> oroi1.first;
    cout << "Y : ";
    cin >> oroi1.second;
    cout << "Taliin urt : ";
    cin >> taliinUrt;
    SetUrt(taliinUrt);
    // Talbai_Piremetr_Oloh(taliinUrt);
}
void TwoDShape ::SetTalbai(float a)
{
    talbai = a;
}
void TwoDShape ::SetPiremetr(float a)
{
    piremetr = a;
}
void TwoDShape ::SetUrt(float a)
{
    urt = a;
}
float TwoDShape ::GetPiremetr()
{
    return piremetr;
}
float TwoDShape ::GetTalbai()
{
    return talbai;
}
float TwoDShape ::GetUrt()
{
    return urt;
}
void TwoDShape ::Talbai_Piremetr_Oloh(float urt)
{
    string tempName = GetName();
    if (tempName == "Toirog")
    {
        talbai = pi * urt * urt;
        piremetr = pi * 2 * urt;
    }
    else if (tempName == "Kvadrat")
    {
        talbai = urt * urt;
        piremetr = urt * 4;
    }
    else if (tempName == "Gurvaljin")
    {
        talbai = (sqrt(3) / 4) * urt * urt;
        piremetr = 3 * urt;
    }
    cout << "Talbai : " << talbai << " Piremetr " << piremetr << endl;
}
void Triangle ::PiremetrOhoh()
{
    float tempP = 3 * GetUrt();
    SetPiremetr(tempP);
}
void Square ::PiremetrOhoh()
{
    float tempP = GetUrt() * 4;
    SetPiremetr(tempP);
}
void Circle::PiremetrOhoh()
{
    float tempP = pi * 2 * GetUrt();
    SetPiremetr(tempP);
}
void Triangle ::TalbaiOloh()
{
    float tempS = (sqrt(3) / 4) * GetUrt() * GetUrt();
    SetTalbai(tempS);
}
void Square ::TalbaiOloh()
{
    float tempS = GetUrt() * GetUrt();
    SetTalbai(tempS);
}
void Circle::TalbaiOloh()
{
    float tempS = pi * GetUrt() * GetUrt();
    SetTalbai(tempS);
}
void Triangle ::BusadOroigOloh()
{
    float undur = taliinUrt * sqrt(3) / 2;
    oroi2.first = oroi1.first - taliinUrt / 2;
    oroi2.second = oroi1.second - undur;
    oroi3.first = oroi1.first + taliinUrt / 2;
    oroi3.second = oroi1.second - undur;
    cout << "Oroi x1=" << oroi1.first << " y1=" << oroi1.second << " x2=" << oroi2.first << " y2=" << oroi2.second << " x3=" << oroi3.first << " y3=" << oroi3.second << endl;
}
void Square ::BusadOroigOloh()
{
    oroi2.first = oroi1.first + taliinUrt;
    oroi2.second = oroi1.second;
    oroi3.first = oroi1.first;
    oroi3.second = oroi1.second + taliinUrt;
    oroi4.first = oroi1.first + taliinUrt;
    oroi4.second = oroi1.second + taliinUrt;
    cout << "Oroi x1=" << oroi1.first << " y1=" << oroi1.second << " x2=" << oroi2.first << " y2=" << oroi2.second << " x3=" << oroi3.first << " y3=" << oroi3.second << " x4=" << oroi4.first << " y4=" << oroi4.second << endl;
}
int main()
{
    Circle circle;
    Square square;
    Triangle triangle;
    int a;
    while (1)
    {
        cout << "Ymr durs oruulahaa songono uu? 1:Toirog, 2:Gurvaljin, 3:Kvadrat, 0:Garah ";
        cin >> a;
        switch (a)
        {
        case 1:
            circle.UtgaAvah();
            circle.PiremetrOhoh();
            circle.TalbaiOloh();
            cout << circle.GetPiremetr() << " " << circle.GetTalbai() << endl;
            break;
        case 2:
            triangle.UtgaAvah();
            triangle.BusadOroigOloh();
            break;
        case 3:
            square.UtgaAvah();
            square.BusadOroigOloh();
            break;
        case 0:
            exit(0);
        default:
            break;
        }
    }
}
