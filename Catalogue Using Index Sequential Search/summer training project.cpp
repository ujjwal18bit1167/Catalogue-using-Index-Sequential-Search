#include<stdio.h>
#include<graphics.h>
#include<conio.h>
#include<string.h>
void SortNames(struct item s[23]);

struct item
{
 char name[100];

};


void CataloguePage1()
    {

    setcolor(BLACK);
    setbkcolor(WHITE);
    int x=0;
    readimagefile("white.jpg",0,0,1080,700);

    readimagefile("kissan jam.jpeg",0,0,150,200);
    outtextxy(0,200,"      Kissan Jam");
    outtextxy(0,220,"      Price: Rs 140 ");


    readimagefile("Kissan ketchup.jpg",180,0,360,200);
    outtextxy(200,200,"    Kissan Ketchup");
    outtextxy(200,220,"     Price Rs 124");

    readimagefile("axe.jpg",360,0,540,200);
    outtextxy(400,200,"Axe Deodorant");
    outtextxy(400,220,"Price: Rs 170");

    readimagefile("dell laptop.jpg",540,0,720,200);
    outtextxy(580,200,"Dell Laptop");
    outtextxy(580,220,"Price Rs 29,525");


    readimagefile("symphony cooler.jpg",720,0,900,200);
    outtextxy(740,200,"Symphony Cooler");
    outtextxy(740,220,"Price Rs 5,678");

    readimagefile("maggi noodles.jpg",900,0,1080,200);
    outtextxy(910,200,"Maggi Massala Noodles");
    outtextxy(920,220,"       Price Rs 12");



    readimagefile("kellogs corn flakes.jpg",0,240,150,420);
    outtextxy(0,420,"  Kellogg's Corn Flakes");
    outtextxy(0,440,"      Price: Rs 270");



    readimagefile("lenovo desktop.jpg",165,240,340,420);
    outtextxy(165,420,"        Lenovo Desktop");
    outtextxy(165,440,"          Price: Rs 19,990");



    readimagefile("scotch brite.jpg",350,240,520,420);
    outtextxy(350,420,"  Scotch Brite Scrub Pad");
    outtextxy(350,440,"         Price: Rs 40");



    readimagefile("garnier.jpg",510,240,720,440);
    outtextxy(510,420,"        Garnier Men Oil Clear ");
    outtextxy(510,440,"               Price: Rs 90");



    readimagefile("surf exel.jpg",690,240,870,430);
    outtextxy(690,420,"         Surf Excel");
    outtextxy(690,440,"         Price: Rs 164");




    readimagefile("vim bar.jpg",890,240,1070,410);
    outtextxy(890,420,"    Vim Dish Wash Bar");
    outtextxy(890,440,"          Price: Rs 49");




    readimagefile("t shirt.jpg",0,480,150,650);
    outtextxy(0,650,"   adidas men's T-shirt");
    outtextxy(0,670,"       Price: Rs 999");



    readimagefile("watch.jpg",180,489,350,650);
    outtextxy(180,650,"  Casio G-Shock Watch");
    outtextxy(180,670,"        Price: Rs 7,999");





    readimagefile("tv.jpg",350,489,520,620);
    outtextxy(350,650,"   Sony Bravia Smart Tv");
    outtextxy(350,670,"     Price: Rs 1,89,775");



    readimagefile("camera.jpg",530,489,688,620);
    outtextxy(530,650,"        Canon Camera");
    outtextxy(530,670,"         Price: Rs 26,990");



   readimagefile("mobile.jpg",740,475,830,650);
   outtextxy(680,650,"          Samsung Galaxy A10");
   outtextxy(680,670,"            Price: Rs 73,999");



   outtextxy(890,490,"      Press Esc to exit");
   outtextxy(890,520,"Press N to go to next page");
   outtextxy(875,550,"   Use keys W,A,S,D to move");
   outtextxy(890,580,"      Press I to search");
   outtextxy(890,610,"    Press Enter to select");





    setcolor(CYAN);

   int i,j;
    for(i=0;i<5;i++)
        {
            line(175+x,0,175+x,700);
            x=x+175;
        }
        int y=0;
    for(i=0;i<2;i++)
       {
        line(0,240+y,1080,240+y);
        y=y+230;
        }

    }



    CataloguePage2()
    {

        setcolor(BLACK);
    setbkcolor(WHITE);
    int x=0;
    readimagefile("white.jpg",0,0,1080,700);

    readimagefile("colgate.jpg",0,35,170,180);
    outtextxy(0,200,"     Colgate Max Fresh Gel");
    outtextxy(0,220,"      Price: Rs 80 ");


    readimagefile("hair color.jpg",180,0,360,200);
    outtextxy(200,200,"Garnier Color Naturals");
    outtextxy(200,220,"     Price Rs 250");

    readimagefile("shampoo.jpg",340,0,540,260);
    outtextxy(400,200,"Pantene Shampoo");
    outtextxy(400,220,"Price: Rs 150");

    readimagefile("lays.jpg",540,0,700,200);
    outtextxy(580,200,"Lays Chips");
    outtextxy(580,220,"Price Rs 25");


    readimagefile("pears.jpg",700,50,900,150);
    outtextxy(740,200,"Pears  Soap");
    outtextxy(740,220,"Price Rs 50");

    readimagefile("vaseline.jpg",920,0,1060,200);
    outtextxy(910,200,"Vaseline Body Lotion");
    outtextxy(920,220,"       Price Rs 112");




    setcolor(CYAN);

   int i,j;
    for(i=0;i<5;i++)
        {
            line(175+x,0,175+x,700);
            x=x+175;
        }
        int y=0;
    for(i=0;i<2;i++)
       {
        line(0,240+y,1080,240+y);
        y=y+230;
        }





       outtextxy(890,490,"      Press 'Esc' to exit");
       outtextxy(880,510,"Press 'P' to go to previous page");
       outtextxy(890,550," Use keys W,A,S,D to move");
       outtextxy(890,580,"      Press I to search");
       outtextxy(890,610,"    Press Enter to select");
       int o,p;
       char chr;
       chr=getch();
       if(o==170 && p==225 && chr==13)
             {
                   readimagefile("white.jpg",0,0,1080,700);
        readimagefile("colgate.jpg",70,70,500,330);
        setbkcolor(WHITE);
        setcolor(BLACK);
        outtextxy(550,50,"Removes foul smell causing bacteria,strong teeth,enriched with Calcium,Whitenes teeth");

        outtextxy(550,100,"Brand : Colgate   ");
        outtextxy(50,520,"                                  Colgate Max Fresh Gel");
        outtextxy(550,150,"Price:  Rs 200");
             }

             if(o==340 && p==225 && chr==13)
             {
                  readimagefile("white.jpg",0,0,1080,700);
        readimagefile("hair color.jpg",50,50,500,500);
        setbkcolor(WHITE);
        setcolor(BLACK);
        outtextxy(550,50,"Contains no Ammonia,Made with natural substances,makes hair shinny");
        outtextxy(550,80,"Now look young within 5 minutes");
        outtextxy(550,100,"Brand : Garnier   ");
        outtextxy(50,520,"                                Garnier Color Naturals");
        outtextxy(550,150,"Price:  Rs 250");

             }
             if(o==510 && p==225 && chr==13)
             {


            readimagefile("white.jpg",0,0,1080,700);
        readimagefile("shampoo.jpg",50,50,500,500);
        setbkcolor(WHITE);
        setcolor(BLACK);
        outtextxy(550,50,"Hair fall control,makes your hair thick and long");
        outtextxy(550,80,"Used by professionals");
        outtextxy(550,100,"Brand : Pantene   ");
        outtextxy(50,520,"                                  ");
        outtextxy(550,150,"Price:  Rs 150");

             }

    }





int main()


{  int i,x;

struct item s[]=
 {

      {"kissan mix fruit jam"},
      {"kissan ketchup"},
      {"axe deodorant"},
      {"dell laptop"},
      {"symphony cooler"},
      {"maggi massala noodles"},
      {"kellog's corn flakes"},
      {"lenovo desktop"},
      {"scotch brite scrub pad"},
      {"garnier men oil control"},
      {"surf excel"},
      {"vim dish wash bar"},
      {"adidas men's T-shirt"},
      {"casio g-shock watch"},
      {"sony bravia smart tv"},
      {"canon camera"},
      {"samsung galaxy a10"},
      {"colgate max fresh gel"},
      {"garnier color naturals"},
      {"pantene shampoo"},
      {"lays chips"},
      {"peaRs  soap"},
      {"vaseline body lotion"}

 };

SortNames(s);




initwindow(1080,700,"Catalogue");
CataloguePage1();
       char ch;
        int o=170;
         int p=225;
      while(1)
      {    setfillstyle(9,GREEN);
           setcolor(BLACK);
           circle(o,p,10);
           floodfill(o,p,BLACK);
           ch=getch();
         if(ch=='d')
         {
                o=o+170;

                setfillstyle(9,GREEN);
                setcolor(BLACK);
                circle(o,p,10);
                floodfill(o,p,BLACK);



                setfillstyle(1,WHITE);
                setcolor(BLACK);
                circle(o-170,p,10);
                floodfill(o-170,p,BLACK);
         }

         if(ch=='s')
         {
                p=p+225;


                setfillstyle(1,GREEN);
                setcolor(BLACK);
                circle(o,p-225,10);
                floodfill(o,p-225,BLACK);


                setfillstyle(1,WHITE);
                setcolor(BLACK);
                circle(o,p-225,10);
                floodfill(o,p-225,BLACK);

         }

        if(ch=='w')
        {

                p=p-225;

                setfillstyle(1,GREEN);
                setcolor(BLACK);
                circle(o,p,10);
                floodfill(o,p,BLACK);


                setfillstyle(1,WHITE);
                setcolor(BLACK);
                circle(o,p+225,10);
                floodfill(o,p+225,BLACK);


        }

       if(ch=='a')
       {
               o=o-170;

               setfillstyle(9,GREEN);
               setcolor(BLACK);
               circle(o,p,10);
               floodfill(o,p,BLACK);



              setfillstyle(1,WHITE);
              setcolor(BLACK);
              circle(o+170,p,10);
              floodfill(o+170,p,BLACK);
       }













        if(ch==27)
            exit(1);


        if(ch=='n')
        {
             CataloguePage2();
             char chr;
             chr=getch();












        }

        if(ch=='p')
            CataloguePage1();

        if(ch=='i') //Index Sequential Search
        {
            char ch;

             initwindow(500,300,"Index Sequential Search");
             readimagefile("search.jpg",0,0,500,300);
             char buffer[40],str[40];
             int i=0,j=0;
              while(1)
             {

                   ch=getch();
                   sprintf(buffer,"%c",ch);
                   setbkcolor(CYAN);
                   outtextxy(70+i,90,buffer);
                   i=i+10;

                  if(ch!=13)
                   {
                       str[j]=ch;
                       j++;
                   }
                   if(ch==13)
                        {
                           str[j]='\0';
                            break;
                        }
                  puts(str);

             }//while
             readimagefile("searching.jpg",0,0,500,300);
             delay(1500);
             readimagefile("searching2.jpeg",0,0,500,300);
             delay(1500);

             //int n; //= sizeof(s) / sizeof(s[0]);

            struct item elements[23];
            int indices[23], temp;
     j = 0;
     int ind = 0, start, last;
    for (i = 0; i < 23; i += 3)
        {

        // Storing element
        strcpy(elements[ind].name,s[i].name);

        // Storing the index
        indices[ind] = i;
        ind++;

        }
    if (strnicmp(str,elements[0].name,strlen(str))<0)
         {closegraph();
          initwindow(500,300,"   NOT FOUND ");
          outtextxy(250,150,"NOT FOUND");
          exit(0);
         }
    else
    {
        for (i = 1; i <= ind; i++)
           {

            if (strnicmp(str,elements[i].name,strlen(str))<0)
             {
                start = indices[i - 1];
                last = indices[i];
                break;
             }

           }
    }
    for (i = start; i <= last; i++)
        {
        if (strnicmp(str,s[i].name,strlen(str))==0)
             {
              j = 1;
              break;
             }
        }





    if (j == 1)
    {

        printf("Found at index %d", i);

       initwindow(1080,700,"");
        if(i==0)
        {
        readimagefile("white.jpg",0,0,1080,700);
        readimagefile("t shirt.jpg",50,50,500,500);
        setbkcolor(WHITE);
        setcolor(BLACK);
        outtextxy(550,50,"Made with 100% cotton.Soft and smooth casual wear"
                         " .Available in all sizes");
        outtextxy(550,100,"Brand : adidas   ");
        outtextxy(50,520,"                                  Adidas Men's T-Shirt");
        outtextxy(550,150,"Price:  Rs 999");
        outtextxy(900,600,"Press i to search again" );
        outtextxy(900,630,"Press Esc to exit:");

        }//for adidas t shirt

        if(i==1)
        {
            readimagefile("white.jpg",0,0,1080,700);
        readimagefile("axe.jpg",50,50,500,500);
        setbkcolor(WHITE);
        setcolor(BLACK);
        outtextxy(550,50,"Axe deodorant.Body spray for men.Long lasting fragrance upto 24 houRs ");
        outtextxy(550,100,"Brand : Axe   ");
        outtextxy(50,520,"                                  Adidas Men's T-Shirt");
        outtextxy(550,150,"Price:  Rs 170");

        }


        if(i==2)
        {
            readimagefile("white.jpg",0,0,1080,700);
        readimagefile("camera.jpg",50,50,500,500);
        setbkcolor(WHITE);
        setcolor(BLACK);
        outtextxy(550,50,"16X zoom,56 MP camera,High contrast,Can be used by professionals");
        outtextxy(550,80,"Equipped with Night Mode to capture moments even in low light");

        outtextxy(550,100,"Brand : Canon   ");
        outtextxy(50,520,"                                  Canon DSLR Camera");
        outtextxy(550,150,"Price:  Rs 27,669");
        }


        if(i==3)
        {
            readimagefile("white.jpg",0,0,1080,700);
        readimagefile("watch.jpg",50,50,500,500);
        setbkcolor(WHITE);
        setcolor(BLACK);
        outtextxy(550,50,"Elegant in style.Inbuilt Alarm Clock and Stopwatch,Light to know time in darkness");
        outtextxy(550,100,"Brand : Casio   ");
        outtextxy(50,520,"                                  Casio G-shock Watch");
        outtextxy(550,150,"Price:  Rs 7,999");
        }

            if(i==4)
            {

                readimagefile("white.jpg",0,0,1080,700);
        readimagefile("colgate.jpg",70,70,500,330);
        setbkcolor(WHITE);
        setcolor(BLACK);
        outtextxy(550,50,"Removes foul smell causing bacteria,strong teeth,enriched with Calcium,Whitenes teeth");

        outtextxy(550,100,"Brand : Colgate   ");
        outtextxy(50,520,"                                  Colgate Max Fresh Gel");
        outtextxy(550,150,"Price:  Rs 200");

            }

         if(i==5)
         {
             readimagefile("white.jpg",0,0,1080,700);
        readimagefile("dell laptop.jpg",50,50,500,500);
        setbkcolor(WHITE);
        setcolor(BLACK);
        outtextxy(550,50,"7th Gen Intel Core i3 processor,windows 10 with lifetime validity,4GB DDR4 RAM");
        outtextxy(550,80,"15.6 inch display screen");
        outtextxy(550,100,"Brand : Dell   ");
        outtextxy(50,520,"                                  Dell Laptop");
        outtextxy(550,150,"Price:  Rs 29,525");
         }

        if(i==6)
        {
            readimagefile("white.jpg",0,0,1080,700);
        readimagefile("hair color.jpg",50,50,500,500);
        setbkcolor(WHITE);
        setcolor(BLACK);
        outtextxy(550,50,"Contains no Ammonia,Made with natural substances,makes hair shinny");
        outtextxy(550,80,"Now look young within 5 minutes");
        outtextxy(550,100,"Brand : Garnier   ");
        outtextxy(50,520,"                                Garnier Color Naturals");
        outtextxy(550,150,"Price:  Rs 250");
        }
         if(i==7)
        {
            readimagefile("white.jpg",0,0,1080,700);
        readimagefile("garnier.jpg",50,50,500,500);
        setbkcolor(WHITE);
        setcolor(BLACK);
        outtextxy(550,50,"Enritched with goodness of Methanol and clay");
        outtextxy(550,80,"Removes excess oil without overdrying skin");

        outtextxy(550,100,"Brand : Garnier   ");
        outtextxy(50,520,"                             Garnier Men Oil Control Facewash");
        outtextxy(550,150,"Price:  Rs 90");
        }




      if(i==8)
      {
          readimagefile("white.jpg",0,0,1080,700);
        readimagefile("kellogs corn flakes.jpg",50,50,500,500);
        setbkcolor(WHITE);
        setcolor(BLACK);
        outtextxy(550,50,"High in Vitamins,Iron,Calcium.Made from finest quality of corn");
        outtextxy(550,100,"Brand : Kellog's   ");
        outtextxy(50,520,"                                  Kellog's Corn Flakes");
        outtextxy(550,150,"Price:  Rs 270");
      }
      if(i==9)
      {
          readimagefile("white.jpg",0,0,1080,700);
        readimagefile("Kissan ketchup.jpg",50,50,500,500);
        setbkcolor(WHITE);
        setcolor(BLACK);
        outtextxy(550,50,"Made with 100% real tomatoes.");

        outtextxy(550,100,"Brand : Kissan   ");
        outtextxy(50,520,"                                  Kissan Ketchup");
        outtextxy(550,150,"Price:  Rs 124");
      }

      if(i==10)
      {


          readimagefile("white.jpg",0,0,1080,700);
        readimagefile("kissan jam.jpeg",90,50,410,500);
        setbkcolor(WHITE);
        setcolor(BLACK);
        outtextxy(550,50,"Kissan Mixed Fruit Jam is made with 100% real friut.");
        outtextxy(550,80,"It is easy to use and can be enjoyed with bread,roti,paratha etc");

        outtextxy(550,100,"Brand : Kissan   ");
        outtextxy(50,520,"                                Kissan Mixed Fruit Jam");
        outtextxy(550,150,"Price:  Rs 140");

      }
      if(i==11)
      {

          readimagefile("white.jpg",0,0,1080,700);
        readimagefile("lays.jpg",50,50,500,500);
        setbkcolor(WHITE);
        setcolor(BLACK);
        outtextxy(550,50,"Crispy and tasty potato chips,made with finest quality of potatoes.");
        outtextxy(550,80,"Available in many different flavouRs ");
        outtextxy(550,100,"Brand : Lays   ");
        outtextxy(50,520,"                                     Lays Chips");
        outtextxy(550,150,"Price:  Rs 25");

      }
      if(i==12)
      {
          readimagefile("white.jpg",0,0,1080,700);
        readimagefile("lenovo desktop.jpg",40,50,600,500);
        setbkcolor(WHITE);
        setcolor(BLACK);
        outtextxy(550,50,"2.0 GHz Intel J4005 processor,4GB DDR4 RAM,19.5 inch LED display screen");
        outtextxy(550,100,"Brand : Lenovo   ");
        outtextxy(50,520,"                                          Lenovo Desktop");
        outtextxy(550,150,"Price:  Rs 30,000");
      }



        if(i==13)
        {
            readimagefile("white.jpg",0,0,1080,700);
        readimagefile("maggi noodles.jpg",50,50,500,500);
        setbkcolor(WHITE);
        setcolor(BLACK);
        outtextxy(550,50,"Made with finest quality of spices and ingredients");
        outtextxy(550,80,"Each portion(70gm) provides 15% of your daily iron requirement");
        outtextxy(550,100,"Brand : Nestle   ");
        outtextxy(50,520,"                                  Maggi Massala Noodles");
        outtextxy(550,150,"Price:  Rs 12");
        }

        if(i==14)
        {
            readimagefile("white.jpg",0,0,1080,700);
        readimagefile("shampoo.jpg",50,50,500,500);
        setbkcolor(WHITE);
        setcolor(BLACK);
        outtextxy(550,50,"Hair fall control,makes your hair thick and long");
        outtextxy(550,80,"Used by professionals");
        outtextxy(550,100,"Brand : Pantene   ");
        outtextxy(50,520,"                                  ");
        outtextxy(550,150,"Price:  Rs 150");
        }
        if(i==15)
        {
            readimagefile("white.jpg",0,0,1080,700);
        readimagefile("peaRs .jpg",50,50,500,400);
        setbkcolor(WHITE);
        setcolor(BLACK);
        outtextxy(550,50,"Makes skin smooth and gentle and removes dirt.");
        outtextxy(550,80,"Does not overdry skin.Used for glowing skin");
        outtextxy(550,100,"Brand : PeaRs    ");
        outtextxy(50,520,"                                       PeaRs  Soap");
        outtextxy(550,150,"Price:  Rs 50");
        }
        if(i==16)
        {
            readimagefile("white.jpg",0,0,1080,700);
        readimagefile("mobile.jpg",200,50,400,400);
        setbkcolor(WHITE);
        setcolor(BLACK);
        outtextxy(550,50,"6 GB RAM,128 GB space,VoLTE enabled,4G smartphone");
        outtextxy(550,50,"Light weight,elegant in style,Anroid 8.1 Oreo");
        outtextxy(550,100,"Brand : Samsung   ");
        outtextxy(50,520,"                                  Samsung Galaxy A10");
        outtextxy(550,150,"Price:  Rs 73,990");
        }
        if(i==17)
        {
            readimagefile("white.jpg",0,0,1080,700);
        readimagefile("scotch brite.jpg",50,50,500,500);
        setbkcolor(WHITE);
        setcolor(BLACK);
        outtextxy(550,50,"Stain cutteRs  for superior cleaning.Lasts 3 times longer");
        outtextxy(550,100,"Brand : Scotch Brite   ");
        outtextxy(50,520,"                                 Scotch Brite Scrub Pad");
        outtextxy(550,150,"Price:  Rs 40");
        }

        if(i==18)
        {
            readimagefile("white.jpg",0,0,1080,700);
        readimagefile("tv.jpg",50,50,500,400);
        setbkcolor(WHITE);
        setcolor(BLACK);
        outtextxy(550,50,"Smart LED TV,Android 8.1 Oreo");
        outtextxy(550,80,"Inbuit Facebook,Instagram,Google apps,Bluetooth 5.0");

        outtextxy(550,110,"Wi-fi connectivity,55 iches display screen");
        outtextxy(550,150,"Brand : Sony   ");
        outtextxy(50,520,"                                Sony Bravia Smart Tv");
        outtextxy(550,190,"Price:  Rs 1,89,775");
        }
        if(i==19)
        {
            readimagefile("white.jpg",0,0,1080,700);
        readimagefile("surf exel.jpg",50,50,500,500);
        setbkcolor(WHITE);
        setcolor(BLACK);
        outtextxy(550,50,"Removes tough stains.Can be used for both machine wash and handwash");
        outtextxy(550,100,"Brand : Surf Excel   ");
        outtextxy(50,520,"                                       Surf Excel");
        outtextxy(550,150,"Price:  Rs 164");
        }
        if(i==20)
        {
            readimagefile("white.jpg",0,0,1080,700);
        readimagefile("symphony cooler.jpg",50,50,500,500);
        setbkcolor(WHITE);
        setcolor(BLACK);
        outtextxy(550,50,"Capacity 12 litres,High efficiency honey comb pads");
        outtextxy(550,100,"Brand : Symphony   ");
        outtextxy(50,520,"                                     Symphony Cooler");
        outtextxy(550,150,"Price:  Rs 5,678");
        }







        ch=getch();
        if(ch==27)
            main();




    }//if(j==1)
    else
    {

        closegraph();
        initwindow(500,300,"NOT FOUND ");

        readimagefile("white.jpg",0,0,500,300);
        outtextxy(200,150,"NOT FOUND");

            if(strnicmp(str,s[21].name,strlen(str))==0)
        {   initwindow(1080,700,"");
            readimagefile("white.jpg",0,0,1080,700);
        readimagefile("vaseline.jpg",50,50,500,500);
        setbkcolor(WHITE);
        setcolor(BLACK);
        outtextxy(550,50,"Makes skin smooth and gentle");
        outtextxy(550,80,"Moisturises skin,Made with goodness of aloe veera");
        outtextxy(550,100,"Brand : Vaseline   ");
        outtextxy(50,520,"                                  Vaseline Body Lotion");
        outtextxy(550,150,"Price:  Rs 112");
        }
        if(strnicmp(str,s[22].name,strlen(str))==0)
        {   initwindow(1080,700,"");
            readimagefile("white.jpg",0,0,1080,700);
        readimagefile("vim bar.jpg",50,50,500,500);
        setbkcolor(WHITE);
        setcolor(BLACK);
        outtextxy(550,50,"Removes India's toughest grease from utensils");
        outtextxy(550,80,"Enriched with power of 100 lemons");
        outtextxy(550,100,"Brand : Vim   ");
        outtextxy(50,520,"                                Vim Dish Wash Bar");
        outtextxy(550,150,"Price:  Rs 49");
        }


        ch=getch();

        main();
    }





        }//if(ch=='i')

           //Selecting by pressing enter and showing details with images
              if(o==170 && p==225 && ch==13)
       {
            readimagefile("white.jpg",0,0,1080,700);
        readimagefile("kissan jam.jpeg",90,50,410,500);
        setbkcolor(WHITE);
        setcolor(BLACK);
        outtextxy(550,50,"Kissan Mixed Fruit Jam is made with 100% real friut.");
        outtextxy(550,80,"It is easy to use and can be enjoyed with bread,roti,paratha etc");

        outtextxy(550,100,"Brand : Kissan   ");
        outtextxy(50,520,"                                Kissan Mixed Fruit Jam");
        outtextxy(550,150,"Price:  Rs 140");
       }
       if(o==340 && p==225 && ch==13)
       { readimagefile("white.jpg",0,0,1080,700);
        readimagefile("Kissan ketchup.jpg",50,50,500,500);
        setbkcolor(WHITE);
        setcolor(BLACK);
        outtextxy(550,50,"Made with 100% real tomatoes.");

        outtextxy(550,100,"Brand : Kissan   ");
        outtextxy(50,520,"                                  Kissan Ketchup");
        outtextxy(550,150,"Price:  Rs 124");




       }


      if(o==510 && p==225 && ch==13)
      {
           readimagefile("white.jpg",0,0,1080,700);
        readimagefile("axe.jpg",50,50,500,500);
        setbkcolor(WHITE);
        setcolor(BLACK);
        outtextxy(550,50,"Axe deodorant.Body spray for men.Long lasting fragrance upto 24 houRs ");
        outtextxy(550,100,"Brand : Axe   ");
        outtextxy(50,520,"                                  Adidas Men's T-Shirt");
        outtextxy(550,150,"Price:  Rs 170");
      }


     if(o==680 && p==225 && ch==13)
     {
          readimagefile("white.jpg",0,0,1080,700);
        readimagefile("dell laptop.jpg",50,50,500,500);
        setbkcolor(WHITE);
        setcolor(BLACK);
        outtextxy(550,50,"7th Gen Intel Core i3 processor,windows 10 with lifetime validity,4GB DDR4 RAM");
        outtextxy(550,80,"15.6 inch display screen");
        outtextxy(550,100,"Brand : Dell   ");
        outtextxy(50,520,"                                  Dell Laptop");
        outtextxy(550,150,"Price:  Rs 29,525");


     }

    if(o==850 && p==225 && ch==13)
    {

            readimagefile("white.jpg",0,0,1080,700);
        readimagefile("symphony cooler.jpg",50,50,500,500);
        setbkcolor(WHITE);
        setcolor(BLACK);
        outtextxy(550,50,"Capacity 12 litres,High efficiency honey comb pads");
        outtextxy(550,100,"Brand : Symphony   ");
        outtextxy(50,520,"                                     Symphony Cooler");
        outtextxy(550,150,"Price:  Rs 5,678");


    }


   if(o==1020 && p==225 && ch==13)
   {
       readimagefile("white.jpg",0,0,1080,700);
        readimagefile("maggi noodles.jpg",50,50,500,500);
        setbkcolor(WHITE);
        setcolor(BLACK);
        outtextxy(550,50,"Made with finest quality of spices and ingredients");
        outtextxy(550,80,"Each portion(70gm) provides 15% of your daily iron requirement");
        outtextxy(550,100,"Brand : Nestle   ");
        outtextxy(50,520,"                                  Maggi Massala Noodles");
        outtextxy(550,150,"Price:  Rs 12");

   }


    if(o==170 && p==450 && ch==13)
    {
        readimagefile("white.jpg",0,0,1080,700);
        readimagefile("kellogs corn flakes.jpg",50,50,500,500);
        setbkcolor(WHITE);
        setcolor(BLACK);
        outtextxy(550,50,"High in Vitamins,Iron,Calcium.Made from finest quality of corn");
        outtextxy(550,100,"Brand : Kellog's   ");
        outtextxy(50,520,"                                  Kellog's Corn Flakes");
        outtextxy(550,150,"Price:  Rs 270");


    }

     if(o==340 && p==450 && ch==13)
     {
         readimagefile("white.jpg",0,0,1080,700);
        readimagefile("lenovo desktop.jpg",40,50,600,500);
        setbkcolor(WHITE);
        setcolor(BLACK);
        outtextxy(550,50,"2.0 GHz Intel J4005 processor,4GB DDR4 RAM,19.5 inch LED display screen");
        outtextxy(550,100,"Brand : Lenovo   ");
        outtextxy(50,520,"                                          Lenovo Desktop");
        outtextxy(550,150,"Price:  Rs 30,000");


     }


     if(o==510 && p==450 && ch==13)
     {
         readimagefile("white.jpg",0,0,1080,700);
        readimagefile("scotch brite.jpg",50,50,500,500);
        setbkcolor(WHITE);
        setcolor(BLACK);
        outtextxy(550,50,"Stain cutteRs  for superior cleaning.Lasts 3 times longer");
        outtextxy(550,100,"Brand : Scotch Brite   ");
        outtextxy(50,520,"                                 Scotch Brite Scrub Pad");
        outtextxy(550,150,"Price:  Rs 40");

     }

     if(o==680 && p==450 && ch==13)
     {

        readimagefile("white.jpg",0,0,1080,700);
        readimagefile("garnier.jpg",50,50,500,500);
        setbkcolor(WHITE);
        setcolor(BLACK);
        outtextxy(550,50,"Enritched with goodness of Methanol and clay");
        outtextxy(550,80,"Removes excess oil without overdrying skin");

        outtextxy(550,100,"Brand : Garnier   ");
        outtextxy(50,520,"                             Garnier Men Oil Control Facewash");
        outtextxy(550,150,"Price:  Rs 90");

     }
     if(o==850 && p==450 && ch==13)
     {
         readimagefile("white.jpg",0,0,1080,700);
        readimagefile("surf exel.jpg",50,50,500,500);
        setbkcolor(WHITE);
        setcolor(BLACK);
        outtextxy(550,50,"Removes tough stains.Can be used for both machine wash and handwash");
        outtextxy(550,100,"Brand : Surf Excel   ");
        outtextxy(50,520,"                                       Surf Excel");
        outtextxy(550,150,"Price:  Rs 164");
     }



     if(o==1020 && p==450 && ch==13)
     {
            readimagefile("white.jpg",0,0,1080,700);
        readimagefile("vim bar.jpg",50,50,500,500);
        setbkcolor(WHITE);
        setcolor(BLACK);
        outtextxy(550,50,"Removes India's toughest grease from utensils");
        outtextxy(550,80,"Enriched with power of 100 lemons");
        outtextxy(550,100,"Brand : Vim   ");
        outtextxy(50,520,"                                Vim Dish Wash Bar");
        outtextxy(550,150,"Price:  Rs 49");
     }

    if(o==170 && p==675 && ch==13)
    {

        readimagefile("white.jpg",0,0,1080,700);
        readimagefile("t shirt.jpg",50,50,500,500);
        setbkcolor(WHITE);
        setcolor(BLACK);
        outtextxy(550,50,"Made with 100% cotton.Soft and smooth casual wear"
                         " .Available in all sizes");
        outtextxy(550,100,"Brand : adidas   ");
        outtextxy(50,520,"                                  Adidas Men's T-Shirt");
        outtextxy(550,150,"Price:  Rs 999");


    }


    if(o==340 && p==675 && ch==13)
    {
        readimagefile("white.jpg",0,0,1080,700);
        readimagefile("watch.jpg",50,50,500,500);
        setbkcolor(WHITE);
        setcolor(BLACK);
        outtextxy(550,50,"Elegant in style.Inbuilt Alarm Clock and Stopwatch,Light to know time in darkness");
        outtextxy(550,100,"Brand : Casio   ");
        outtextxy(50,520,"                                  Casio G-shock Watch");
        outtextxy(550,150,"Price:  Rs 7,999");

    }


    if(o==510 && p==675 && ch==13)
    {
         readimagefile("white.jpg",0,0,1080,700);
        readimagefile("tv.jpg",50,50,500,400);
        setbkcolor(WHITE);
        setcolor(BLACK);
        outtextxy(550,50,"Smart LED TV,Android 8.1 Oreo");
        outtextxy(550,80,"Inbuit Facebook,Instagram,Google apps,Bluetooth 5.0");

        outtextxy(550,110,"Wi-fi connectivity,55 iches display screen");
        outtextxy(550,150,"Brand : Sony   ");
        outtextxy(50,520,"                                Sony Bravia Smart Tv");
        outtextxy(550,190,"Price:  Rs 1,89,775");
    }
    if(o==680 && p==675 && ch==13)
    {readimagefile("white.jpg",0,0,1080,700);
        readimagefile("camera.jpg",50,50,500,500);
        setbkcolor(WHITE);
        setcolor(BLACK);
        outtextxy(550,50,"16X zoom,56 MP camera,High contrast,Can be used by professionals");
        outtextxy(550,80,"Equipped with Night Mode to capture moments even in low light");

        outtextxy(550,100,"Brand : Canon   ");
        outtextxy(50,520,"                                  Canon DSLR Camera");
        outtextxy(550,150,"Price:  Rs 27,669");

    }

    if(o==850 && p==675 && ch==13)
    {
         readimagefile("white.jpg",0,0,1080,700);
        readimagefile("mobile.jpg",200,50,400,400);
        setbkcolor(WHITE);
        setcolor(BLACK);
        outtextxy(550,50,"6 GB RAM,128 GB space,VoLTE enabled,4G smartphone");
        outtextxy(550,50,"Light weight,elegant in style,Anroid 8.1 Oreo");
        outtextxy(550,100,"Brand : Samsung   ");
        outtextxy(50,520,"                                  Samsung Galaxy A10");
        outtextxy(550,150,"Price:  Rs 73,990");


    }







      }//while(1)outermost



    getch();
    return 0;
}//main()
void SortNames(struct item s[23])
{
    char strexc[40];
    int i,j,flag=0;
    for(i=0;i<23-1;i++)
    {
        flag=0;
        for(j=0;j<23-(i+1);j++)
        {
            if(strcmp(s[j].name,s[j+1].name)==1)
            {   flag=1;
                strcpy(strexc,s[j].name);
                strcpy(s[j].name,s[j+1].name);
                strcpy(s[j+1].name,strexc);
            }
        }
    }


for(i=0;i<23;i++)
{
    puts(s[i].name);

}


}


