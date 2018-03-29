#include "Game.h"
void Game::welcome()
{
    string start="Welcome To The Dread School,Please read the school description";
    string descripe="\t \t \t <The Available Rooms>  \n\n \t \t \t 1-<Parking-place>  \n\n \t \t \t 2-<Garden> \n\n \t \t \t 3-<Entered-Hallawy> \n\n \t \t \t 4-<History-Class>  \n\n \t \t \t 5-<Biology-Class> \n\n \t \t \t 6-<Chemistry-Lab>  \n\n \t \t \t 7-<Computer-Lab>   \n\n \t \t \t 8-<Sicology-Class>\n\n \t \t \t 9-<Teachers-Room> \n\n \t \t \t 10-<Doctors-Room> \n\n \t \t \t 11-<Bathroom-1> \n\n \t \t \t 12-<Locker-Room>   \n\n \t \t \t 13-<Bathroom-2> \n\n \t \t \t 14-<Workers-Room>  \n\n \t \t \t 15-<Second-Hallway> \n\n \t \t \t 16-<Cellar> \n\n \t \t \t 17-<Stadium> \n\n \t \t \t 18-<Basketball-Stadium>  \n\n \t \t \t 19-<Third-Hallawy> \n\n \t \t \t 20-<Swimming-pool>  \n\n \t \t \t 21-<Headmasters-Room> \n\n \t \t \t 22-<Cleaning-Room> \n\n \t \t \t 23-<Library-Class> \n\n \t \t \t 24-<Coach-Room>  \n\n \t \t \t 25-<Math-Class>\n\n \t \t \t 26-<Eating-Room>";
    string countdown="\t Finally,CountDown Now,Are You Ready to make a chance to play?!!, \n\n if you need please wait to start the game.......";
    string endd=" <3>  <2>  <1> \n\n\n\n Now,Start The Game ^_^..";
    cout<<endl;
    cout<<"\n\n\n\n\n\n\n \t";
    for(auto ch:start)
    {
        cout<<ch;
        Sleep(30);
    }
      cout<<"\n\n\n \t\t\t";
    cout<<endl<<endl;
    for(auto ch:descripe)
    {
        cout<<ch;
        Sleep(15);
    }
    cout<<"\n\n\n \t\t\t";
    cout<<endl<<endl;
    for(auto ch:countdown){
        cout<<ch;
        Sleep(20);
    }
    cout<<"\n\n\n \t\t\t";
    cout<<endl<<endl;
    for(auto ch:endd){
        cout<<ch;
        Sleep(150);
    }
}
Game::Game()
{
    system("color f0");
    welcome();
    begin:
    system("color f4");
    system("cls");

}
void Game::start_the_maze(){
     props temp1[2];
    fixed_props Box1("Chest","Key","Nothing");
    fixed_props Box2("Chest","Key","One piece");
    fixed_props cupboard("Cupboard","Nothing","pens");
    fixed_props temp[2];
    fixed_props tempx[2];
    temp[1]=Box1;
    temp[0]=cupboard;
    tempx[1]=Box2;
    tempx[0]=cupboard;


        //entered hallawy
    string arr1[2]={"A Robe","A Thrown cup"};
    for(int i=0;i<2;i++){
        temp1[i].setname(arr1[i]);
    }

    props temp2[5];

    //Biology-Class
    string arr2[5]={"Fireworks","Some-Garbage","A Chair-Leg","Some pictures","A Torn-Jacket"};
     for(int i=0;i<5;i++){
        temp2[i].setname(arr2[i]);
    }
    props temp3[3];

    //Chemistry-lab
    string arr3[3]={"acids","A Rope","tester"};
     for(int i=0;i<3;i++){
        temp3[i].setname(arr3[i]);
    }
     props temp4[4];
    //History
    string arr4[4]={"Books","The Black-pearl","Hair","Glasses"};
    for(int i=0;i<4;i++){
        temp4[i].setname(arr4[i]);
    }
    props temp5[4];

    //computer-lab
    string arr5[4]={"Mouses","chairs","Wires","keyboards"};
    for(int i=0;i<4;i++){
        temp5[i].setname(arr5[i]);
    }
    props temp6[4];

    //MATH-class
    string arr6[4]={"protractor","some papers","iron ruler","Broken watch"};
     for(int i=0;i<4;i++){
        temp6[i].setname(arr6[i]);
    }
     props temp7[3];

    //swimming-pool
    string arr7[3]={"swimming glasses","Swimming clothes","towels"};

    for(int i=0;i<3;i++){
        temp7[i].setname(arr7[i]);
    }
    props temp8[5];

    //basketball-stadium
    string arr8[5]={"Some-Balls","torn clothes","Broken_seats","Broken basket","Gun"};

    for(int i=0;i<5;i++){
        temp8[i].setname(arr8[i]);
    }
     props temp9[5];
    //stadium
    string arr9[5]={"balls","cards","T-shirts","Key","Gun"};
     for(int i=0;i<5;i++){
        temp9[i].setname(arr9[i]);
    }
    props temp10[2];
    //parking
    string arr10[2]={"some nails","a car rubber"};
     for(int i=0;i<2;i++){
        temp10[i].setname(arr10[i]);
    }
    props  temp11[5];
    //Bathroom1
    string arr11[5]={"some pieces of glass","Toothbrush","Wipes","some garbage","Gun"};
    for(int i=0;i<5;i++){
        temp11[i].setname(arr11[i]);
    }
    props  temp12[5];
    //Bathroom2
    string arr12[5]={"some pieces of glass","Toothbrush","Wipes","some garbage","Gun"};
    for(int i=0;i<5;i++){
        temp12[i].setname(arr12[i]);
    }
    //libraray
     props  temp13[4];
    string arr13[4]={"Books","some thrown papers","pens","calculator"};
    for(int i=0;i<4;i++){
        temp13[i].setname(arr13[i]);
    }
    props temp14[2];
    //locker room
    string arr14[2]={"broom","Gun"};
     for(int i=0;i<2;i++){
        temp14[i].setname(arr14[i]);
    }
     props temp15[1];
    //Hall_way2
    string arr15[1]={"garbage"};
     for(int i=0;i<1;i++){
        temp15[i].setname(arr15[i]);
    }
    props temp16[4];
    //Eating room
    string arr16[4]={"forks","spoon","broken plate","some old bots"};
     for(int i=0;i<4;i++){
        temp16[i].setname(arr16[i]);
    }
    props temp17[3];

    //Doctor room
    string arr17[3]={"Wipes","Dr.Headset","A surgical scalpel"};
    for(int i=0;i<3;i++){
        temp17[i].setname(arr17[i]);
    }
     props temp18[1];
    //Cellar
    string arr18[1]={"garbage"};
    for(int i=0;i<1;i++){
        temp18[i].setname(arr18[i]);
    }
     props temp19[2];
    //Garden
    string arr19[2]={"some posters","a pair of scissors"};
     for(int i=0;i<2;i++){
        temp19[i].setname(arr19[i]);
    }

    //Hallway3
     props temp20[1];
    string arr20[1]={"garbage"};
    for(int i=0;i<1;i++){
    temp20[i].setname(arr20[i]);
    }
    props temp21[2];

    //coach_room
    string arr21[2]={"broken whistle","some torn T-shits"};
    for(int i=0;i<2;i++){
    temp21[i].setname(arr21[i]);
    }
    props temp22[1];
    //cleaning_room
    string arr22[1]={"Washing powders"};
    for(int i=0;i<1;i++){
    temp22[i].setname(arr22[i]);
    }
     props temp23[1];
    //sicological
    string arr23[1]={"garbage"};
    for(int i=0;i<1;i++){
    temp23[i].setname(arr23[i]);
    }
    props temp24[3];
    //teachers_room
    string arr24[3]={"Papers","Pens","rulers"};
    for(int i=0;i<3;i++){
    temp24[i].setname(arr24[i]);
    }
    props temp25[1];
    //Works_room
    string arr25[1]={"some old files"};
    for(int i=0;i<1;i++){
    temp25[i].setname(arr25[i]);
    }
     props temp26[2];
    //Headmasters
    string arr26[2]={"Papers","Seals"};
    for(int i=0;i<2;i++){
    temp26[i].setname(arr26[i]);
    }

    room Chemistry_lab ("Chemistry lab", "when you entered this room you will find a big board, some chairs ,some tables which have some chemistry acids and some tools and some books on the shelf ",temp,2 ,temp3 ,3 );

    room Library  ("Library","A great library which has a great shelf of books and great hall it contains many shelf of books for biology, chemistry, math, history, geography, ETC",temp,2 ,temp13 ,4 );

    room Biology_class ("Biology class" , "A class with a strange teacher who turned into a terrible monster at the night which called the Nogitsune which eat the human meat and in front her a big board and some chairs and some paints about the human body and the vital operations",temp,2 ,temp2 ,5 );

    room Swimming_pool("Swimming pool" , " A big swimming pool which is split into parts and there are some bags and some chairs like a stadium around it from right and left but no one here know that there is a something which hidden some where and you don't know what is that so you have to run just now",temp,2 ,temp7 ,3 );

    room Locker_room ("Locker room" , "A big room for changing clothes for the players of the school which have a big bathroom and some places to change clothes for playing and everyone has his special place to change his clothes and some tools for playing and some chairs",temp,2 ,temp14 , 2);

    room Eating_room ("The Eating room" , "You entered a strange smelled room... and you found some broken dishes on the floor and in the middle of room there were many tables each table has 6 chairs around it with some rotten food on it .",temp,2 ,temp16,4 );

    room Hallway3 ("The third Hallway" , "notice a long way with a strange door and you felt uncomfortable towards it 'like you are going to die if you opened it",temp,2 ,temp20 ,1 );

    room History_class ("History class" , " You saw many chairs and desks with people who can't move only one step because all students don't move and the master is reacting in a strange way",temp,2 , temp4 ,4 );

    room Bathroom1 ("Bathroom" , "when you enter you can find a toilet and dirty toilet papers full of blood when you try to touch anything in it you will be caught by a woman and now you have to go and there is no way and you have no choice only run ",temp,2 ,temp11 ,5 );

    room Entered_Hallway( "The First Hallway" , "An enormous hall with a dirty ground and the places where the students put their notebooks and things for study and so many people but they are like statuses, they don't move or talk and there and there is a woman hold a telephone and when you went beside here she will look to you with a great violence in her eyes and now you have to run or you will badly die",temp,2 ,temp1 ,2 );

    room Coach_room ("Coach room " , "You will find an office and some chairs are flying and a big sofa with a mouth in it..Mouth!? Yes great Mouth with a large teeth and full of blood and there is legs out from this mouth and now sure you think that these legs are the legs of the couch but sorry the couch is the monster which is standing behind you which called Berserker",temp,2 ,temp21 ,2 );

    room Doctor_room ( "Doctor room" , " A great place full of many clothes of patients and tools of doctor but second please you now hear all of this tools crashing into the walls with themselves without control and make a great noise and some people show up and disappear in just a second and finally all of sounds stopped suddenly and found a red eyes in front of your face but you will find it a status  ",temp,2 ,temp17,3 );

    room Hallway2 ( "The Second Hallway" , "A long empty way without any thing in it only blood and parts of humans bodies in everywhere and a very bad smell and it ends with a small door with some draw on it and ended by a door which belongs to room which called the cellar",temp,2 ,temp15 ,1 );

    room Bathroom2 ("The Big Bathroom" , "An enormous bathroom with many toilets and many showers are separated with thin walls but suddenly all these walls are broken and all the bathroom is suddenly full of insects and they ran awards to",temp,2 ,temp12 ,5 );

    room Basketball_stadium ("Basketball stadium" , "A big place like a theater with many places to set which you can pull them and push them at little seconds and this stadium is full of died bodies and bloody clothes on the black walls , Black walls?? Yes black walls because they are full of mud which come from a place which is unknown",temp,2 ,temp8 ,5 );
    room Stadium ("Stadium" , "When you entered this place you would find some students play American football died on the floor and he has a smashed skull and another one without eyes was hanged on the wall with some nails in his body and some balls on the ground and there were some torn clothes but be careful they will run after you now so you have to go or you will be killed soon",tempx,2 ,temp9 ,4 );
    room Cleaning_room ("Cleaning room" , "When you entered this room you will find many brooms and other cleaning tools, thanks god there is nothing strange here but you will say in a fear sound and suddenly you found the brooms and the other tools are thrown towards you without any introductions and they will barely kill you so have to run or hide anywhere if you don't want to die",temp,2 ,temp22 ,1 );
    room Garden ("Garden" , "The trees and shrubs appear to be resilient to decades of neglect but the flowerbeds all withered away long ago.",temp,2 ,temp19 ,2 );
    room Cellar ("Cellar" , " Now you can go downstairs and explore what is there but be careful I did not recommend that to you and now you can hear some noise …Do you know what is this sound? It’s the sound of your death mixed by the sound of the horses and screaming of people ",temp,2 ,temp18 ,1 );
    room Computer_lab ("Computer lab","A room with an iron door which only opened by a special card and it's unfortunately you have to enter it to check if you can go out this school or not but unfortunately too that you will find all the computers are opened on only word and this word is DEATH ",temp,2 ,temp5, 4);
    room Sicological_session ("Sicological room ","and now !! suppose that you entered this room by wrong so you have to be very clever and lucky for two reasons the first one to not get enter to this room again ,the second one and the most important that if you can go out this room alive because you will face one of the most terrified monsters which called the sicological monster which make your mind exploded slowly",temp,2 , temp23,1 );
    room Math_class ("Math class" , "Now a great class of math and calm weather and you think about what your girlfriend doing now , but suddenly all of that is evaporated in the air and you find your teacher attacks you with a big dirty teeth and you know what it mean , yes she is a monster which called werejaguar but you will realize that she isn't a monster but this is from your imagination because you slept in the class ",temp,2 ,temp6 ,4 );
    room Parking ("Parking place", "You are in the parking place now , of course you wondered now why you are here and what you are doing but you realized that you saw some people are eaten in the bus and they are your friends but you can't do any thing and now you haver to run before you eaten like them",temp,2 ,temp10 ,2 );
    room Teachers_room ("Teachers room", "Some ordinary people setting on a big table and talking but why they can't see you now because you get in the wrong room which once you entered this your body will still out and your soul only get into the room and what you heard about the bad magic and what they do you have to run away from this maze to try to help your friends which are still alive",temp,2 ,temp24 ,3 );
    room Workers_room("Workers rooms", "A great place full of many cases with lockers but second please you now hear all of this cases opening and closing with themselves without control and make a great noise and some people show up and i think they are the workers of this school and they disappear suddenly and finally all of sounds stopped and found all of them coming towards you",temp,2 ,temp25 ,1 );
    room Headmasters_room ("Headmasters room" , "when you entered this room you will find the headmasters sat in front you on his office and he smiles and now you thought that he is the man who did all of that to the school but you will find something strange happened",temp,2 ,temp26 ,2 );
    Parking.link(&Garden,"South");
    Garden.link(&Entered_Hallway,"South");
    Entered_Hallway.link(&Biology_class,"East");
    Entered_Hallway.link(&History_class,"West");
    Entered_Hallway.link(&Cleaning_room,"South");
    History_class.link(&Bathroom2,"West");
    Biology_class.link(&Bathroom1,"East");
    Biology_class.link(&Chemistry_lab,"South");
    Chemistry_lab.link(&Computer_lab,"South");
    Computer_lab.link(&Teachers_room,"East");
    Chemistry_lab.link(&Headmasters_room,"West");
    Coach_room.link(&Headmasters_room,"East");
    History_class.link(&Math_class,"South");
    Math_class.link(&Doctor_room,"East");
    Math_class.link(&Library,"West");
    Math_class.link(&Sicological_session,"South");
    Coach_room.link(&Doctor_room,"East");
    Coach_room.link(&Hallway2,"South");
    Hallway2.link(&Basketball_stadium,"South");
    Basketball_stadium.link(&Cellar,"South");
    Cellar.link(&Workers_room,"East");
    Cellar.link(&Cleaning_room,"West");
    Cellar.link(&Swimming_pool,"South");
    Swimming_pool.link(&Hallway3,"South");
    Hallway3.link(&Locker_room,"South");
    Locker_room.link(&Stadium,"South");
    int nAgents=8;
    Monster* monster1 = new Monster("Doflamingo",&Basketball_stadium);
    Monster* monster2 = new Monster("White beard",&Basketball_stadium);
    Monster* monster3 = new Monster("Smoker",&Biology_class);
    Player* player1 = new Player("Muhammed yasser(Ceaser)",&Locker_room);
    Player* player2 = new Player("Ahmed Menaim(Gym)",&Cellar);
    Player* player3 = new Player("Mahmoud Khaled(Chicken)",&Bathroom1);
    Player* player4 = new Player("Ahmed Samir(90-Min)",&Bathroom1);
    Player* player5 = new Player("Abdelrahman Khaled(Monkey D.Luffy)",&Locker_room);
    intel_monster* imonster=new intel_monster("The Black beard",&Teachers_room);
    Agent*(*agents) = new Agent*[nAgents];
    agents[0]= imonster;
    agents[1] = player1;
    agents[2] = player2;
    agents[3] = player3;
    agents[4] = player4;
    agents[5] = player5;
    agents[6] = monster1;
    agents[7] = monster2;
    agents[8] = monster3;
    int current_size=8;
    cout<<"Welcome !"<<endl;
   for(int i=0; true; i++)
    {
        if(i==current_size)
        {
            i=0;
        }
        if(!(agents[i]->getalive())) continue;

        bool ok = agents[i]->act();

        if(!ok)
        {
            cout<<"Game quites"<<endl;
            return ;
        }


}}


