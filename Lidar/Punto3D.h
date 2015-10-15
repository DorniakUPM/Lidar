#pragma once

using namespace System;
using namespace std;

ref class Punto3D
	{
	public:
		Punto3D(double d, double i, double r);
		Punto3D();

#pragma region

		void setExist(bool ex);
		void setObstacle(int Obs);
		void setCoordinatesX(double cx);
		void setCoordinatesY(double cy);
		void setCoordinatesZ(double cz);
		void setDistance(double d);
		void setIntensity(double i);
		void setAzimuth(double r);
		void setDistance(Byte i, Byte j);
		void setIntensity(Byte i);
		void setAzimuth(Byte i, Byte j);
		void setAngle(int channel);
#pragma endregion Setters

#pragma region
		bool getExists();
		int getObs();
		double getCoordinatesX();
		double getCoordinatesY();
		double getCoordinatesZ();
		double getDistance();
		double getIntensity();
		double getAzimuth();
		double getAngle();
#pragma endregion Getters

#pragma region
<<<<<<< HEAD
<<<<<<< HEAD
		void CalculateCoordenates();
		double distanceToPoint(Punto3D p);
		Punto3D^ operator-(Punto3D ^ v);
		Punto3D^ operator+(Punto3D ^ v);
		Punto3D^ operator*(double d);
=======
		void visualize();
		double distanceToPoint(Punto3D^ p);
>>>>>>> origin/master
=======
		void visualize();
		double distanceToPoint(Punto3D p);
>>>>>>> parent of 30cb8e0... Punto y Obstaculos totalmente implentados
#pragma endregion Others

#pragma region
	private:
		bool Exist;			// The point exist or not
		int Obstacle;		// Obstacle that contains the point
		double Intensity;	// Bounced beam intensity
		double Distance;	// Distance to the point
		double Azimuth;		// Horizontal angle Y-X
		double Angle;		// Vertical angle Laser Id Z-Y
		double x;			// X coordinate of the point
		double y;			// Y coordinate of the point	
		double z;			// Z coordinate of the point
	};

#pragma endregion Propierties

