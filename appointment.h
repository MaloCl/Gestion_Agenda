//
// Created by maloc on 03/12/2023.
//

#ifndef GESTIONAGENDA_APPOINTMENT_H
#define GESTIONAGENDA_APPOINTMENT_H

typedef struct Appointment{
    int day;
    int month;
    int year;
    int duration;
    int dateHour;
    char* objectives;
};

typedef struct llcCellAppointment{
    struct Appointment* value;
    struct Appointment** arrayNext;
};



#endif //GESTIONAGENDA_APPOINTMENT_H
