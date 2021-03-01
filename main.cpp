#include <iostream>
#include <string>
#include <windows.h>
#include "C:\compilador_devc++\MinGW64\x86_64-w64-mingw32\include\mysql.h"
#include "C:\compilador_devc++\MinGW64\x86_64-w64-mingw32\include\my_alloc.h"
#include<conio.h>


using namespace std;

int main()
{

     setlocale(LC_ALL, "");

     MYSQL *conexion;
     MYSQL_ROW row;
     MYSQL_RES *res;

     int qstate;

     conexion = mysql_init(0);
     conexion = mysql_real_connect(conexion,"HOST","root","PASS","TUDATABASE",0,NULL,0);

     if(conexion){
        cout<<"conexión correcta!!! "<<endl;
     }else{
        cout<<"connection problem: "<<mysql_error(conexion)<<endl;
     }

     if(conexion){
        //now lets run select query on db table
        qstate = mysql_query(conexion, "select *from usuarios");

        if(!qstate){
            res = mysql_store_result(conexion);

            while(row=mysql_fetch_row(res)){

               cout<<"id: " << row[0] <<" "
                   <<"usuario_nombre: "<<row[1] << " "
                   <<"usuario_date: "<<row[2] << " "
                   <<"usuario_email: "<<row[3] << " "
                   <<"consulta: "<<row[4]<<endl;


            }
        }

     }else{
        cout<<"connection problem: "<<mysql_error(conexion)<<endl;
     }


     system("pause");
     return 0;
}
