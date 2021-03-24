#ifndef SHAPE_H_INCLUDED
#define SHAPE_H_INCLUDED
#define pi 3.14
#include<math.h>
class Shape{
public:
    virtual ~Shape() {}
    virtual double get_area() const=0;
    virtual double get_perimeter() const=0;

};
class circle : public Shape
{
private:
    double radius;
public:
    circle(double radius){}

    double get_area() const{
        return pi*radius*radius ; //dien tich hinh tron
    }

    double get_perimeter() const
    {
        return 2*pi*radius;//chu vi hinh tron
    }

};

class rectangle : public Shape
{
private:
    double width;
    double height;
public:
    rectangle(double width, double height){}
    double get_area() const
    {
        return width*height;//dien tich hinh chu nhat
    }
    double get_perimeter() const
    {
        return 2*(width+height);//chu vi hinh chu nhat
    }
};

class square : public Shape
{
private:
    double side;
public:
    square(double side){};

    double get_area() const
    {
        return side*side;
    }

    double get_perimeter() const
    {
        return 4*side;
    }

};
#endif // SHAPE_H_INCLUDED

