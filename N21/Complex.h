//Необходимо подключать этот файл один раз
#pragma once

void print(double r, double i);
void input(double& r, double& i);
double abs(double r, double i);
void add(double r1, double i1,double r2, double i2,double& r, double& i);

void mul(double r1, double i1,double r2, double i2,double& r, double& i);

void conj(double r1, double i1, double& r, double& i);
void div(double r1, double i1, double t, double& r, double& i);

void div(double r1, double i1,double r2, double i2, double& r, double& i);