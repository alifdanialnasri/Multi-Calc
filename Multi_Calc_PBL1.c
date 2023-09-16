#include <stdio.h>                                             /*Pre-processor directive*/
                                                               /*stdio.h-handle input output function*/



int choice;                                                    /*Variable for Main menu*/



                                                                /*Variable for Force and Motion*/

float D1,T1,AS;                                                 /*Variable for Average Speed*/


float D2,T2,V;                                                  /*Variable for Velocity*/




char Z;                                                         /*Variable for Sub Menu*/




char CH;                                                        /*Variable for Repeat*/


char ch;                                                        /*Variable for Repeat*/




                                                                /*Variable for Area*/


int pick;                                                       /*Variable for sub menu choice*/




float S, pi, J;                                                    /*Variable For Sphere*/
float pi=3.14159265359;





float C, r, h;                                                    /*Variable for cylinder*/




float V1,I1,R1;                                                 /*Variable for Resistance*/




float V2,I2,R2;                                                 /*Variable for Voltage*/




char choose;                                                    /*Variable for Sub Menu*/



int main()                                                      /* Main Body*/


{


    do                                                          /*Initialization of Do-While Loop*/
                                                                /*Main Menu Do-While Loop*/


    {




    multicalc:                                                   /*goto label*/
                                                                 /*multicalc label*/




    system ("cls");                                              /*Clear Screen*/





    printf("\t\tI================================I\n");
    printf("\t\tI          Multi Calc            I\n");
    printf("\t\tI================================I\n");

    printf("\n\t1. Area\n");                                     /*Main Menu*/

    printf("\t2. Electricity\n");                                /*Refer Figure 1*/

    printf("\t3. Force And Motion\n");

    printf("\t4. End\n");





    printf("\n\tEnter Choice:");                                  /*Enter Choice*/
                                                                  /*printf-handle output function*/



    scanf("%d", &choice);                                         /*Input Choice*/
                                                                  /*scanf-handle input function*/




    switch(choice)                                                /*Initialization of Switch*/
                                                                  /*Main Menu Switch*/



    {


    case 1:                                                       /*Area Case*/




    system ("cls");





      area:                                                       /*goto label*/
                                                                  /*area label*/




            do                                                    /*Nested Do-While Loop*/
                                                                  /*Initialization Of Do-While Loop*/
                                                                  /*Area Do-While Loop*/



            {



      pick:




     system("cls");




      printf("\t\tI=================================I\n");
      printf("\t\tI     SURFACE AREA CALCULATION    I\n");
      printf("\t\tI=================================I\n\n");

      printf("\t1. Surface Area of a Sphere\n");                   /*Area Submenu*/

      printf("\t2. Surface Area of a Clylinder\n");                /*Refer Figure 2*/

      printf("\t3. End\n");



      printf("\tChoice: ");




      scanf("%d", &pick);




      system("cls");




      switch(pick)                                                    /*Nested Switch*/
                                                                      /*Initialization of Switch*/
                                                                      /*Area Switch*/


      {



      case 1:                                                         /*Area-Sphere Case*/




      system ("cls");




        sfera:                                                        /*Goto label*/
                                                                      /*Sphere Label*/




        printf("\t\tI=================================I\n");
        printf("\t\tI              Sphere             I\n");
        printf("\t\tI=================================I\n\n");        /*Area of Sphere*/

        printf("Enter value radius(cm)\n");                           /*Refer Figure 2.1*/

        scanf("%f",&J);



        S= (4*pi) * (J*J);                                            /*Surface Area of Sphere Formula*/





        printf("The surface area of sphere is equal to %.2f cmsq\n",S);    /*Display Answer*/




        printf("Do you want to continue?(y/n)\n");



                  printf("choice: ");




                  scanf(" %c",&ch);




                  if(ch=='y'||ch=='Y')                                   /*Initialization Of Loop*/



                  {


                      system("cls");                                     /*Clear Screen*/



                      goto sfera;                                        /*go to sphere label*/


                  }




                      else



                      system("cls");



                      continue;                                           /*Continue Statement*/
                                                                          /*Bypass all the code*/




      case 2:                                                             /*Area-Cylinder Case*/




        silinder:                                                         /*goto label*/
                                                                          /*cylinder goto label*/





        printf("\t\tI=================================I\n");
        printf("\t\tI             Cylinder            I\n");
        printf("\t\tI=================================I\n\n");
        printf("Enter value of Radius(cm)\n");                             /*Area of Cylinder*/

        scanf("%f",&r);                                                    /*Refer Figure 2.2*/

        printf("Enter height of the cylinder(cm)\n");

        scanf("%f",&h);

        C= ((2*pi) * (r*r)) + (h*(2*pi*r));                                /*Surface Area of Cylinder Formula*/



        printf("The surface area of cylinder is equal to %.2f cmsq\n",C);  /*Display Answer*/




        printf("Do you want to continue?(y/n)\n");


                  printf("choice: ");



                  scanf(" %c",&ch);



                  if(ch=='y'||ch=='Y')


                  {


                      system("cls");



                      goto silinder;                                        /*go to cylinder label*/


                  }


                      else


                      system("cls");


                      continue;

      case 3:                                                               /*Area-Return case*/






    printf("\t\tI================================I\n");                     /*Appreciation Text*/
    printf("\t\tI          Thank You!!           I\n");                     /*Refer Figure 5*/
    printf("\t\tI================================I\n");



    Sleep(1000);                                                            /*Time Delay*/




                      goto multicalc;                                       /*go to multicalc label*/




       default:




    printf("\t\tI================================I\n");
    printf("\t\tI          !!Invalid!!           I\n");
    printf("\t\tI      Please Choose Number      I\n");                     /*Invalid Text*/
    printf("\t\tI        Between 1-3 Only        I\n");                     /*Refer Figure 6*/
    printf("\t\tI          !!Invalid!!           I\n");
    printf("\t\tI================================I\n");



         Sleep(3000);


      }                                                                     /*End of Area Nested Switch*/


}                                                                           /*End of Area Do-While Loop*/


while (pick != 3);




      case 2:                                                               /*Electricity Case*/



        electricity:                                                        /*goto label*/
                                                                            /*Electricity label*/



             do{                                                            /*Initialization Do-While Loop*/
                                                                            /*Electricity Do-While Loop*/




      choose:                                                               /*Goto label*/
                                                                            /*Choose goto label*/




      system("cls");                                                        /*Clear Screen*/





      printf("\t\tI=================================I\n");
      printf("\t\tI           Electricity           I\n");
      printf("\t\tI=================================I\n");                  /*Electricity Sub Menu*/


      printf("\t1. Calculate a Resistance\n");                              /*Refer Figure 3*/

      printf("\t2. Calculate a Voltage\n");

      printf("\t3. Return to main menu\n");



      printf("\tChoice: ");




      scanf("%d", &choose);                                                  /*Input Funtion*/
                                                                             /*%d-format specifier(signed integer)*/
                                                                             /*&d-assignment operator*/
                                                                             /*value of input will be stored in "choose" integer*/




      system("cls");




      switch(choose)                                                          /*Nested Switch*/
                                                                              /*Initialization of Switch*/
                                                                              /*Electricity Switch*/


      {



      case 1:                                                                 /*Electricity-Resistance Label*/




        Resistance:                                                           /*Resistance goto label*/




        printf("\t\tI=================================I\n");
        printf("\t\tI            Resistance           I\n");
        printf("\t\tI=================================I\n");                  /*Resistance Calculation*/

        printf("Enter value of voltage (V)\n");                               /*Refer Figure 3.1*/

        scanf("%f",&V1);

        printf("Enter value of current (A)\n");

        scanf("%f",&I1);


        R1=V1/I1;                                                             /*Resistance Label*/


        printf("The resistance is equal to %.2f ohm\n\n",R1);                 /*Display Answer*/


        printf("Do you want to continue?(y/n)\n");



                  printf("choice:");



                  scanf(" %c",&ch);




                  if(ch=='y'||ch=='Y')


                  {


system("cls");


                      goto Resistance;                                         /*go to resistance label*/



                  }



                      else


system("cls");



                      continue;                                                /*Continue statement*/
                                                                               /*Bypass all the code*/




      case 2:                                                                  /*Electricity-Voltage case*/





          Voltage:                                                             /*Voltage goto label*/




        printf("\t\tI=================================I\n");
        printf("\t\tI             Voltage             I\n");
        printf("\t\tI=================================I\n");                    /*voltage Calculation  menu*/

        printf("Enter value of current (A)\n");                                 /*Refer figure 3.2*/

        scanf("%f",&I2);

        printf("Enter value of resistance (ohm)\n");

        scanf("%f",&R2);



        V2=I2*R2;                                                               /*Voltage formula*/




        printf("The Voltage is equal to %.2fV\n\n",V2);



        printf("Do you want to continue?(y/n)\n");



                  printf("choice:");



                  scanf(" %c",&ch);




                  if(ch=='y'||ch=='Y')                                           /*If-Else statement*/



                  {



system("cls");




                      goto Voltage;                                              /*Go to voltage label*/





                  }




                      else






                      continue;



system("cls");



      case 3:                                                                    /*Electricity- Return case*/




    printf("\t\tI================================I\n");
    printf("\t\tI          Thank You!!           I\n");                          /*Appreciation Text*/
    printf("\t\tI================================I\n");                          /*Refer Figure 5*/





    Sleep(1000);                                                                 /*Time delay*/






        goto multicalc;                                                          /*go to resistance label*/
                                                                                 /*Return to main menu*/





       default:                                                                  /*Default statement*/
                                                                                 /*execured when switch expression does not match with any case*/







    printf("\t\tI================================I\n");
    printf("\t\tI          !!Invalid!!           I\n");
    printf("\t\tI      Please Choose Number      I\n");                          /*Invalid Text*/
    printf("\t\tI        Between 1-3 Only        I\n");                          /*Refer Figure 6*/
    printf("\t\tI          !!Invalid!!           I\n");
    printf("\t\tI================================I\n");




         Sleep(3000);





      }                                                                           /*Ending of electricity nested switch*/




}                                                                                 /*Ending Electricity Do-While Loop*/


while (choose != 3);





      case 3:                                                                     /*Fore and motion case*/





        forceandmotion:                                                           /*Forceandmotion goto label*/





     do                                                                           /*Initialization F&M Do-While Loop*/




    {


system("cls");




    printf("\t\tI================================I\n");
    printf("\t\tI          Force & Motion        I\n");
    printf("\t\tI================================I\n");                           /*FnM Sub Menu*/

    printf("\n\t1. Average Speed \n");                                            /*Refer Figure 4*/

    printf("\t2. Velocity\n");

    printf("\t3. Return to Main Menu\n");






    printf("\n\tEnter Choice:");                                                   /*printf-handle output function*/



    scanf("%d", &Z);                                                               /*scanf-handle input funcction*/
                                                                                   /*%-format specifier*/
                                                                                   /*&-assignment operator*/





system("cls");






    switch(Z)                                                                       /*Initialization of nested-switch*/
                                                                                    /*Fore and motion nested switch*/




    {



        case 1:                                                                     /*F&M-AverageSpeed case*/




        AverageSpeed:                                                                /*Averagespeed goto label*/







    printf("\t\tI================================I\n");
    printf("\t\tI           Average Speed        I\n");                              /*Average Speed Calculator*/
    printf("\t\tI================================I\n");                              /*Refer Figure 4.1*/




    printf("\nEnter Total Distance (m):\n");

    scanf("%f",&D1);

    printf("Enter Total Time (s)\n");

    scanf("%f",&T1);

    AS=D1/T1;                                                                        /*Average Speed formula*/


    printf("\nThe Average Speed is %.2f m/s\n",AS);                                  /*Display answer*/


    printf("\nDo you want to repeat ? (y/n)\n");

    printf("\tChoice:");



    scanf(" %c", &CH);


    if (CH == 'y' || CH == 'Y')


        {



system("cls");



        goto AverageSpeed;                                                            /*go to average speed label*/




        }



         else



        continue;




        case 2:                                                                      /*F&M-Velocity case*/





            Velocity:                                                                /*Velocity goto label*/



system ("cls");






    printf("\t\tI================================I\n");
    printf("\t\tI            Velocity            I\n");
    printf("\t\tI================================I\n");                             /*Velocity Calculator*/

    printf("\nEnter Displacement (m)\n");                                           /*Refer Figure 4.2*/

    scanf("%f",&D2);

    printf("Enter Time (s)\n");

    scanf("%f",&T2);

    V=D2/T2;

    printf("\nThe Velocity is %.2f m/s\n",V);


    printf("\nDo you want to repeat ? (y/n)\n");


    printf("\tChoice:");


    scanf(" %c", &CH);




    if (CH == 'y' || CH == 'Y')


    {



system("cls");



        goto Velocity;                                                          /*go to velocity label*/



    }



    else




        continue;




        case 3:                                                                /*F&M-Return case*/




    printf("\t\tI================================I\n");
    printf("\t\tI          Thank You!!           I\n");                        /*Appreciation Text*/
    printf("\t\tI================================I\n");                        /*Refer Figure 5*/




      Sleep(1000);




            goto multicalc;                                                    /*go to multicalc label*/





        default:




    printf("\t\tI================================I\n");
    printf("\t\tI          !!Invalid!!           I\n");
    printf("\t\tI      Please Choose Number      I\n");                         /*Invalid Text*/
    printf("\t\tI        Between 1-3 Only        I\n");                         /*Refer Figure 6*/
    printf("\t\tI          !!Invalid!!           I\n");
    printf("\t\tI================================I\n");




            Sleep(3000);





    }                                                                          /*Ending of F&M Nested switch*/




    }                                                                          /*Ending of F&M Do-While Loop*/


    while(Z!=3);






        case 4:                                                                /*End program case*/




system("cls");







    printf("\t\tI================================I\n");
    printf("\t\tI          Thank You!!           I\n");                        /*Appreciation Text*/
    printf("\t\tI================================I\n");                        /*Refer Figure 5*/




    Sleep(1000);




    break;                                                                    /*Break statement*/
                                                                              /*Exit case or loop*/





        default:





system("cls");




    printf("\t\tI================================I\n");
    printf("\t\tI          !!Invalid!!           I\n");
    printf("\t\tI      Please Choose Number      I\n");                        /*Invalid Text*/
    printf("\t\tI        Between 1-4 Only        I\n");                        /*Refer Figure 6*/
    printf("\t\tI          !!Invalid!!           I\n");
    printf("\t\tI================================I\n");




            Sleep(3000);



    }                                                                         /*Ending of main menu switch*/




    }                                                                          /*Ending of main menu Do-While Loop*/


    while (choice != 4);




    return 0;                                                                 /*Return statement*/
                                                                              /*Successfully execute programme*/



}                                                                             /*Ending of main body*/

