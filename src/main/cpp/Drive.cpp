#include "Robot.h"

void Robot::R2Jesu_Drive(void)
{

    x = m_Drivestick.GetR2Axis();
    y = m_Drivestick.GetRightY() * -1;
    z = m_Drivestick.GetLeftX();


    A = y - z*(LENGTH/R);
	B = y + z*(LENGTH/R);
	C = x - z*(WIDTH/R);
	D = x + z*(WIDTH/R);

	wSpeed1 = .25*(sqrt(B*B + C*C));
	wAngle1 = atan2(B,C) * 180/M_PI; 
    if (wAngle1 < 0.0)
    {
        wAngle1 = wAngle1 + 360;
    }

    /*if (wAngle1 >= 0.0 && wAngle1 < 5.00)
    {
        wAngle1 = 1.0;
    }

    if (wAngle1 <= 360.0 && wAngle1 > 355.0)
    {
        wAngle1 = 359.0;
    } */

	wSpeed2 = .25*(sqrt(B*B + D*D));
	wAngle2 = atan2(B,D) * 180/M_PI;
    if (wAngle2 < 0.0)
    {
        wAngle2 = wAngle2 + 360;
    }

    /*if (wAngle2 >= 0.0 && wAngle2 < 5.00)
    {
        wAngle2 = 1.0;
    }

    if (wAngle2 <= 360.0 && wAngle2 > 355.0)
    {
        wAngle2 = 359.0;
    } */

	wSpeed3 = .25*(sqrt(A*A + D*D));
	wAngle3 = atan2(A,D) * 180/M_PI;
    if (wAngle3 < 0.0)
    {
        wAngle3 = wAngle3 + 360;
    }

    /*if (wAngle3 >= 0.0 && wAngle3 < 5.00)
    {
        wAngle3 = 1.0;
    }

    if (wAngle3 <= 360.0 && wAngle3 > 355.0)
    {
        wAngle3 = 359.0;
    } */

	wSpeed4 = .25*(sqrt(A*A + C*C));
	wAngle4 = atan2(A,C) * 180/M_PI;
    if (wAngle4 < 0.0)
    {
        wAngle4 = wAngle4 + 360;
    }

   /* if (wAngle4 >= 0.0 && wAngle4 < 5.00)
    {
        wAngle4 = 1.0;
    }

    if (wAngle4 <= 360.0 && wAngle4 > 355.0)
    {
        wAngle4 = 359.0;
    } */
  
    if (fabs(x) > 0.1 || fabs(y) > 0.1 || fabs(z) > 0.1)
    {
        m_SwerveDrive1.Set(wSpeed1);
        pidOutput1 = m_angleController1.Calculate((m_SwerveAnalog1.GetVoltage() * conversion), wAngle1);
        m_SwerveTurn1.Set(pidOutput1);

        m_SwerveDrive2.Set(wSpeed2);
        pidOutput2 = m_angleController2.Calculate((m_SwerveAnalog2.GetVoltage() * conversion), wAngle2);
        m_SwerveTurn2.Set(pidOutput2);

        m_SwerveDrive3.Set(wSpeed3);
        pidOutput3 = m_angleController3.Calculate((m_SwerveAnalog3.GetVoltage() * conversion), wAngle3);
        m_SwerveTurn3.Set(pidOutput3);

        m_SwerveDrive4.Set(wSpeed4);
        pidOutput4 = m_angleController4.Calculate((m_SwerveAnalog4.GetVoltage() * conversion), wAngle4);
        m_SwerveTurn4.Set(pidOutput4);
    }
        //Kept running because we never stopped it
    else
    {
        m_SwerveDrive1.Set(0.0);
        m_SwerveTurn1.Set(0.0);

        m_SwerveDrive2.Set(0.0);
        m_SwerveTurn2.Set(0.0);

        m_SwerveDrive3.Set(0.0);
        m_SwerveTurn3.Set(0.0);

        m_SwerveDrive4.Set(0.0);
        m_SwerveTurn4.Set(0.0);
    }
    frc::SmartDashboard::PutNumber("Wheel 1",(m_SwerveAnalog1.GetVoltage() * conversion));
    frc::SmartDashboard::PutNumber("Wheel 2",(m_SwerveAnalog2.GetVoltage() * conversion));
    frc::SmartDashboard::PutNumber("Wheel 3",(m_SwerveAnalog3.GetVoltage() * conversion));
    frc::SmartDashboard::PutNumber("Wheel 4",(m_SwerveAnalog4.GetVoltage() * conversion));

    frc::SmartDashboard::PutNumber("Desired Angle 1",wAngle1);
    frc::SmartDashboard::PutNumber("Desired Angle 2",wAngle2);
    frc::SmartDashboard::PutNumber("Desired Angle 3",wAngle3);
    frc::SmartDashboard::PutNumber("Desired Angle 4",wAngle4);


}