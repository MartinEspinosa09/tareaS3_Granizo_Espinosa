#include <stdio.h>

int main (int argc, char *argv[]) {

    int numEstudiantes, numAsignaturas;
    float sumaEstudiante, sumaAsignatura;
    float notas[5][3];
    float notaMax= notas[0][0];
    float notaMin= notas[0][0];
    int aprobados=0;

    for (int i = 0; i < 5; i++)
    {
        printf("REGISTRO ESTUDIANTE %d \n", i+1);
        for (int j = 0; j < 3; j++)
        {
            do
            {
                printf("ingresa una nota de la asignatura %d \n", j+1);
                scanf(" %f", &notas[i][j]);

                if (notas[i][j]<0 || notas[i][j]>10)
                {
                    printf("ERROR: LA NOTA DEBE ESTAR EN EL RANGO DE 0 HASTA 10");
                }
                
            } while (notas[i][j]<0 || notas[i][j]>10);
            
        }
        
    }

    for (int i = 0; i < 5; i++)
    {
        sumaEstudiante=0;
        printf("\n estudiante %d:\n", i+1);

        for (int j = 0; j < 3; j++)
        {
            sumaEstudiante += notas[i][j];
        }
        
        printf("el promedio de los estudiantes es: %.2f\n", sumaEstudiante/3.0);
        
        if ((sumaEstudiante/3.0)<6)
        {
            printf("el estudiante a reprobado con un promedio de: %.2f \n", i + 1, sumaEstudiante/3.0);
        }
        else
        {
            printf("el estudiante ha aprobado con un promedio de: %2.f \n", i + 1, sumaEstudiante/3.0);
            aprobados++;
        }
        
    }
    
    for (int j = 0; j < 3; j++)
    {
        sumaAsignatura=0;
        printf("\n Asignatura %d:\n", j+1);

        for (int i = 0; i < 5; i++)
        {
            sumaAsignatura += notas[i][j];
        }
        
        printf("el promedio de las asignaturas es: %.2f\n", sumaAsignatura/5.0);

    }
    
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (notas[i][j]>notaMax)
            {
                notaMax=notas[i][j];
            }
            
            if (notas[i][j]<notaMin)
            {
                notaMin=notas[i][j];
            }
            
        }
        
    }
    printf("\nLa nota maxima de todo el curso es: %.2f", notaMax);
    printf("\nLa nota minima de todo el curso es: %.2f", notaMin);

    printf("\n el total de aprobados entre los estudiantes fueron: %.2f", aprobados);
    return 0;
}