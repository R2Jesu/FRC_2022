#include "Robot.h"
double autoSpeed = .15;
double shSpeed = 0.0;

void Robot::R2Jesu_Autonomous(void)
{
    intakePneumatics.Set(frc::DoubleSolenoid::Value::kForward);
    m_intake.Set(0.4);
    printf("while start\n");
    std::this_thread::sleep_for(std::chrono::seconds(1));
    while (m_DriveEncoder1.GetPosition() < 10.0)
    {
        m_SwerveDrive1.Set(autoSpeed);
        pidOutput1 = m_angleController1.Calculate((m_SwerveAnalog1.GetVoltage() * conversion), 90.0);
        m_SwerveTurn1.Set(pidOutput1);

        m_SwerveDrive2.Set(autoSpeed);
        pidOutput2 = m_angleController2.Calculate((m_SwerveAnalog2.GetVoltage() * conversion), 95.0);
        m_SwerveTurn2.Set(pidOutput2);

        m_SwerveDrive3.Set(autoSpeed);
        pidOutput3 = m_angleController3.Calculate((m_SwerveAnalog3.GetVoltage() * conversion), 95.0);
        m_SwerveTurn3.Set(pidOutput3);

        m_SwerveDrive4.Set(autoSpeed);
        pidOutput4 = m_angleController4.Calculate((m_SwerveAnalog4.GetVoltage() * conversion), 90.0);
        m_SwerveTurn4.Set(pidOutput4);
        //frc::SmartDashboard::PutNumber("position", m_DriveEncoder1.GetPosition());
    }
    m_SwerveDrive1.Set(0.0);
    m_SwerveDrive2.Set(0.0);
    m_SwerveDrive3.Set(0.0);
    m_SwerveDrive4.Set(0.0);
    m_SwerveTurn1.Set(0.0);
    m_SwerveTurn2.Set(0.0);
    m_SwerveTurn3.Set(0.0);
    m_SwerveTurn4.Set(0.0);
    m_DriveEncoder1.SetPosition(0.0);
    m_DriveEncoder2.SetPosition(0.0);
    m_DriveEncoder3.SetPosition(0.0);
    m_DriveEncoder4.SetPosition(0.0);
    while (m_DriveEncoder1.GetPosition() < 30.0)
    {
        m_SwerveDrive1.Set(autoSpeed);
        pidOutput1 = m_angleController1.Calculate((m_SwerveAnalog1.GetVoltage() * conversion), 90.0);
        m_SwerveTurn1.Set(pidOutput1);

        m_SwerveDrive2.Set(autoSpeed);
        pidOutput2 = m_angleController2.Calculate((m_SwerveAnalog2.GetVoltage() * conversion), 90.0);
        m_SwerveTurn2.Set(pidOutput2);

        m_SwerveDrive3.Set(autoSpeed);
        pidOutput3 = m_angleController3.Calculate((m_SwerveAnalog3.GetVoltage() * conversion), 90.0);
        m_SwerveTurn3.Set(pidOutput3);

        m_SwerveDrive4.Set(autoSpeed);
        pidOutput4 = m_angleController4.Calculate((m_SwerveAnalog4.GetVoltage() * conversion), 90.0);
        m_SwerveTurn4.Set(pidOutput4);
        //frc::SmartDashboard::PutNumber("position", m_DriveEncoder1.GetPosition());

    }
    
    m_SwerveDrive1.Set(0.0);
    m_SwerveDrive2.Set(0.0);
    m_SwerveDrive3.Set(0.0);
    m_SwerveDrive4.Set(0.0);
    m_SwerveTurn1.Set(0.0);
    m_SwerveTurn2.Set(0.0);
    m_SwerveTurn3.Set(0.0);
    m_SwerveTurn4.Set(0.0);
    m_DriveEncoder1.SetPosition(0.0);
    m_DriveEncoder2.SetPosition(0.0);
    m_DriveEncoder3.SetPosition(0.0);
    m_DriveEncoder4.SetPosition(0.0);
    std::this_thread::sleep_for(std::chrono::seconds(1));
    intakePneumatics.Set(frc::DoubleSolenoid::Value::kReverse);
    
    while (m_DriveEncoder1.GetPosition() < 15.0)
    {
        m_SwerveDrive1.Set(autoSpeed);
        pidOutput1 = m_angleController1.Calculate((m_SwerveAnalog1.GetVoltage() * conversion), 269.0);
        m_SwerveTurn1.Set(pidOutput1);

        m_SwerveDrive2.Set(autoSpeed);
        pidOutput2 = m_angleController2.Calculate((m_SwerveAnalog2.GetVoltage() * conversion), 270.0);
        m_SwerveTurn2.Set(pidOutput2);

        m_SwerveDrive3.Set(autoSpeed);
        pidOutput3 = m_angleController3.Calculate((m_SwerveAnalog3.GetVoltage() * conversion), 270.0);
        m_SwerveTurn3.Set(pidOutput3);

        m_SwerveDrive4.Set(autoSpeed);
        pidOutput4 = m_angleController4.Calculate((m_SwerveAnalog4.GetVoltage() * conversion), 269.0);
        m_SwerveTurn4.Set(pidOutput4);

    }

    m_SwerveDrive1.Set(0.0);
    m_SwerveDrive2.Set(0.0);
    m_SwerveDrive3.Set(0.0);
    m_SwerveDrive4.Set(0.0);
    m_SwerveTurn1.Set(0.0);
    m_SwerveTurn2.Set(0.0);
    m_SwerveTurn3.Set(0.0);
    m_SwerveTurn4.Set(0.0);
    m_DriveEncoder1.SetPosition(0.0);
    m_DriveEncoder2.SetPosition(0.0);
    m_DriveEncoder3.SetPosition(0.0);
    m_DriveEncoder4.SetPosition(0.0);
    std::this_thread::sleep_for(std::chrono::seconds(1));
    
    while (m_DriveEncoder1.GetPosition() < 43.0)
    {
        m_SwerveDrive1.Set(autoSpeed);
        pidOutput1 = m_angleController1.Calculate((m_SwerveAnalog1.GetVoltage() * conversion), 274.0);
        m_SwerveTurn1.Set(pidOutput1);

        m_SwerveDrive2.Set(autoSpeed);
        pidOutput2 = m_angleController2.Calculate((m_SwerveAnalog2.GetVoltage() * conversion), 270.0);
        m_SwerveTurn2.Set(pidOutput2);

        m_SwerveDrive3.Set(autoSpeed);
        pidOutput3 = m_angleController3.Calculate((m_SwerveAnalog3.GetVoltage() * conversion), 270.0);
        m_SwerveTurn3.Set(pidOutput3);

        m_SwerveDrive4.Set(autoSpeed);
        pidOutput4 = m_angleController4.Calculate((m_SwerveAnalog4.GetVoltage() * conversion), 274.0);
        m_SwerveTurn4.Set(pidOutput4);

    }

    m_SwerveDrive1.Set(0.0);
    m_SwerveDrive2.Set(0.0);
    m_SwerveDrive3.Set(0.0);
    m_SwerveDrive4.Set(0.0);
    m_SwerveTurn1.Set(0.0);
    m_SwerveTurn2.Set(0.0);
    m_SwerveTurn3.Set(0.0);
    m_SwerveTurn4.Set(0.0);
    
    desiredRPM = 2000.0;
    shSpeed = 0.01;
    while (m_shooterEncoder.GetVelocity() < desiredRPM)
    {
        shSpeed = shSpeed + 0.001;
        m_shooter.Set(shSpeed);
        //printf("velo in while %f", m_shooterEncoder.GetVelocity());
    }
    m_indexer1.Set(1.0);
    m_indexer2.Set(1.0);


}