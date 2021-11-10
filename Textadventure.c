
#include<stdio.h>


int main (void)

{
    //classes//
    int wizard = 1;
    int barbarian = 2;
    int assassin = 3;
    int gunslinger = 4;
    char playername[256];
    int characterselect; //player input determines class//
    //gunslinger weapon types//
    int pistol = 1;
    int rifle = 2;
    int nuke = 3;
    int guntype;
   //babrbarian weapon types//
    int barbarianmelee;
    int axe = 1;
    int club = 2;
    int spikegloves = 3;
    //wizard spell casting types//
    int spelltype;
    int elemental = 1;
    int chaos = 2;
    int summoning = 3;
    //assassin weapon types//
    int dualblades = 1;
    int daggerandgrapple = 2;
    int wristxbow = 3;
    int stealthweapon;
    //character attributes//
    int charisma;
    int intelligence;
    int strength;
    int agility;
    int resilliance;
    int perception;
    int points = 34;//track points available//
    int skillpoints = 0;//max skill points a player can have//
    //gamestate
    int gamestate;//keeps track of choices and player attributes




//game intro//
    printf("'Hello traveler, you seem to have fallen asleep on your horse'\n");
    printf("\nYou jerk awake as your gaze meets a rather short old man with a strangely melodic British accent\n");
    printf("\nYou clamber for your weapon but you find nothing there\nStrangely enough, you don't remember much from before your little nap\n");
    printf("\nThe stranger seems to take note of this\n");
    printf("\n'Having some trouble getting everything in order are we?'");
    printf("\nYou turn back to tell the stranger to mind his business, but he has managed to vanish from sight\n");
    printf("\n'I can help jog your memory along and get you set on your way with some equipment'");
    printf("\nThe mans voice echoed as if coming from within your own head\n");
    printf("\nThe world around you fades to white, leaving just you and the voice in the void\n");
    printf("\n'Lets start simple shall we? Why don't you try remembering your name for me?'\n");
    printf("\n**************************************************************************************************************************************************************************\n");




    for(int count = 1 ; count >= 1 ; count--)
   {

        printf("\nTell the voice your name\n");//name select//
        scanf("%s" , playername);

        printf("\nHello %s\n" , playername);
   }
    do
   {
   printf("\nWhat is your class?\n");
   printf("Enter 1 for wizard, 2 for barbarian, 3 for assassin, and 4 for gunslinger \n");//class select//
   scanf("%d" , &characterselect);
   }
    while(characterselect <1 || characterselect >4);

    if(characterselect == wizard)//selected wizard//

    {
            do
    {

        printf("\nYou're a wizard, %s\n" , playername);
        printf("\nWhat kind of spells would you like to cast?\n");
        printf("Type 1 for elemental, type 2 for chaos, type 3 for summoning\n");
        scanf("%d" , &spelltype);
    }
        while(spelltype < 1 || spelltype >3);

        if(spelltype == elemental)//selected elemental//
        {
            printf("\n*****************************************************************************************************************************\n");
            printf("\nYou saw the other two options right?\n");
            printf("Okay, %s, you can have your boring little weather powers\n" , playername);
            printf("I guess thats an interesting enough way to play for most coma patients,\nSo it should be more than enough for you\n");
        }
            if (spelltype == chaos)//selected chaos//
        {
            printf("\n*****************************************************************************************************************************\n");
            printf("\nOoooo, someone isn't like other players\n");
            printf("How very unique of you, %s\n" , playername);
            printf("What do you think your abilities will be like?\n");
            printf("Oh wait, you wouldn't know, because there is literally no description as to what this does\n");
            printf("Oh well, I'll still try my hardest to make this game fun for you\n");
        }
                if (spelltype == summoning)//selected chaos//
                {
                    printf("\n*****************************************************************************************************************************\n");
                    printf("\nAwww, does little %s need someone to do his fighting for him?\n" , playername);
                    printf("It's okay, I understand\nFighting is scary\n");
                    printf("Not to worry, I'll give you the beefiest summoning spells that we have available\n");
                }

    }

    if(characterselect == barbarian)//selected barbarian//
    {
    do
    {
        printf("\nOkay, %s, how would you like to brutalize your enemies, psycho?\n" , playername);
        printf("Type 1 for an Axe, type 2 for wooden club, type 3 for spiked boxing gloves\n");
        scanf("%d" , &barbarianmelee);
    }

    while(barbarianmelee < 1 || barbarianmelee > 3);

            if(barbarianmelee == axe)//selected axe//
            {
                printf("\n*****************************************************************************************************************************\n");
                printf("\nOkay, I'll tell you what\n");
                printf("I'll set the axe down over there\n");
                printf("And you can go grab it, when I'm far...far away\n");
            }
                if(barbarianmelee == club)//selected club//
                {
                    printf("\n*****************************************************************************************************************************\n");
                    printf("\nOh boy, I'm sure that'll be a VERY effective weapon, %s\n" , playername);
                    printf("Sarcastic?\n");
                    printf("Me?\n");
                    printf("Never.\n");
                    printf("I'm quite certain that your foes will tremble as you chase after them with a...stick\n");
                }
                    if(barbarianmelee == spikegloves)//selected gloves//
                    {
                        printf("\n*****************************************************************************************************************************\n");
                        printf("\nWow, thats a....bold choice\n");
                        printf("no, I'm sure it'll be very usefull...\n");
                        printf("Not sure if its quite worth the odd looks, but thats a personal choice isn't it, %s?\n", playername);
                    }
    }
    if (characterselect == assassin)//selected assassin//
    {
    do
    {
        printf("\nI'm sure you'll feel right at home watching people from the shadows\n");
        printf("\nPick your weapon, %s:\n" , playername);
        printf("Type 1 for dual blades, type 2 for a grapple and dagger, type 3 for a concealed wrist crossbow\n");
        scanf("%d" , &stealthweapon);
    }
    while(stealthweapon < 1 || stealthweapon > 3);

        if (stealthweapon == dualblades)//selected dual blades//
        {
            printf("\n*****************************************************************************************************************************\n");
            printf("\nA little overkill, but if stabbing someone straight through the heart doesn't work the first time\n");
            printf("Stab, stab again... someone else, that is\n");
        }
                if(stealthweapon == daggerandgrapple)//selected dagger and grapple//
                {
                    printf("\n*****************************************************************************************************************************\n");
                    printf("\nWell that should be a lot of fun\n");
                    printf("Tell me, when you picked that did you picture yourself swing from roof to roof?\n");
                    printf("Thats what I thought, you complete child\n");
                    printf("I'll tell you what, %s, you go play with your rope and knife, and I'll start handing out actually useful equipment to players\n" , playername);

                }
                    if(stealthweapon == wristxbow)//player selected wrist crossbow//

                    {
                        printf("\n*****************************************************************************************************************************\n");
                        printf("\nHmmmm\n");
                        printf("It certainly isn't a terrible choice\n");
                        printf("I suppose you're just really relying on the power of impractical\nprojectile weapons to keep enemies at a distance\n");
                        printf("You know what? I respect that, %s, here you go\n" , playername);
                        printf("*%s is handed a very tiny crossbow, hopefully it's lethal\n" , playername);
                    }
    }
    if (characterselect == gunslinger)//selected gunslinger//
    {
    do
    {
        printf("\nI didn't want to put in an easy mode, but you found one anyways\n");
        printf("\nPick a starter weapon:\n");
        printf("Type 1 for pistol, type 2 for marksman's rifle, type 3 for Tactical Nuke Strike:\n");
        scanf("%d" , &guntype);
    }
    while(guntype < 1 || guntype > 4);

        if (guntype == pistol)//selected pistol//
        {
            printf("\n*****************************************************************************************************************************\n");
            printf("\nBasic but respectable, I supose, here is your pistol. %s\n" , playername);
            printf("Kinda boring though considering we just waved the option of having a tactical nuke in your face though\n");
            printf("Ah well, not every player can be as interesting as I'd hope for");
        }
            if (guntype == rifle)//selected rifle//
            {
                printf("\n*****************************************************************************************************************************\n");
                printf("\nWay to turn a fantasy RPG into Call of Duty...\n");
                printf("Well at least it isn't automa-\n");
                printf("What's that?\n");
                printf("It's an AK-47?!\n");
                printf("We gave the assassin a knife, how is he supposed to compete with that?!\n");
                printf("*Turns back to %s\n" , playername);
                printf("Fine, here.\n");
                printf("*Hands %s the rifle\n" , playername);
            }
                if (guntype == nuke)//selected nuke//
                {
                    printf("\n*****************************************************************************************************************************\n");
                    printf("\nwait...was that supposed to be in the game?\n");
                    printf("Hold on a second, let me go check\n");
                    printf("...\n");
                    printf("....\n");
                    printf("....\n");
                    printf("Alright, fine.\n");
                    printf("It looks like some lazy developer decided it would be fun to entirely ruin the game's balance\n");
                    printf("Here are your launch keys oh 'mighty %s'...I guess\n" , playername);

                }


    }
    printf("\n***********************************************************************************************************************************\n");
    printf("\nOkay, %s, you we're starting to have a pretty solid picture of you\n" , playername);//character attribute setup begins here//
    printf("\nI just have a few more questions regarding your *ahem* 'personality'\n");
    printf("\nOh just a few things, your AGILITY, RESILLIANCE, INTELLIGENCE, CHARISMA, STRENGTH, and your PERSEPTION");

   do
   {
    printf("\n You have %d skill points left\n" , points);
    printf("\nOn a scale form 0 to 10, how intelligent would you say you are?\n");
    scanf("%d" , &intelligence);
    printf("\n*****************************************************************************************************************************\n");
   }
   while(intelligence > 10 || intelligence < 0 || skillpoints < 0);

        if (intelligence >= 6)
        {
            printf("\nWow, thats better than I thought...by a lot\n");
        }
        else{
            printf("\nYes, I'd say that's just about right\n");
        }

        skillpoints = (points - intelligence);

     do
    {
    printf("\nYou have %d skill points left\n" , skillpoints);
    printf("\nOkay, on a scale from 0 to 10, how confident are you that you could beat the Rock in an arm wrestling contest\n");
    scanf("%d" , &strength);
    printf("\n*****************************************************************************************************************************\n");
    }
    while(strength > 10 || intelligence < 0 || skillpoints < 0);


        if(strength >= 6)
        {
            printf("\nHm...\n");
            printf("Ill take your word for it\n");
        }
        else
        {
            printf("\nI appreciate your honesty\n");
        }
        skillpoints = (points - strength - intelligence);//formulate current skill points//

    do
    {
    printf("\nYou have %d points left\n" , skillpoints);//update player skill points//
    printf("\nSo I don't want to be rude, because I REALLY do like you, but(based on a 10 point scale, of course), would you say you're a...'people person?'\n");
    scanf("%d" , &charisma);
    printf("\n*****************************************************************************************************************************\n");
    }
    while(charisma > 10 || charisma < 0 || skillpoints < 0);

        if(charisma >= 6)
        {
            printf("\nYes, Yes, I was going to say you must be, with a shining personality like...that...\n");
        }
        else
        {
            printf("\nNooooooooooo, I mean...I wont argue if you insist\n");
        }

        skillpoints = (points - intelligence - charisma - strength);

        do
        {
        printf("\nYou have %d skill points left\n" , skillpoints);
        printf("\nOkay, I'm gonna throw a rock at you now,\n don't worry, just a small one!\n");
        printf("\nI just need you to tell me on a scale of 0-10 (10 somehow being the least painful) how much it hurts you\nOkay?\n");
        printf("\nHow much does it hurt?\n");
        scanf("%d" , &resilliance);
        printf("\n*****************************************************************************************************************************\n");
        }
        while(resilliance > 10 || resilliance < 0 || skillpoints < 0);

            if (resilliance >= 6)
            {
                printf("\nWow.\n\nReally?\n\nThats pretty impressive, it was a pretty big rock\n");
            }

            else
            {
                printf("\nOoooo, I'm so sorry, I didn't mean to aim for...that\n");
            }
            skillpoints = (points - intelligence - charisma - strength - resilliance);


        do
        {
        printf("\nYou have %d skill points left\n" , skillpoints);
        printf("\nOnly a couple more questions, now, do a back flip for me\n");
        printf("\nThats right, go on\n\n*%s PERFORMS A BACKFLIP\n" , playername);
        printf("\nAlright then, be honest, on a scale of 0-10 how agile to you think you were?\n");
        scanf("%d" , &agility);
        printf("\n*****************************************************************************************************************************\n");
        }
        while(agility > 10 || agility < 0 || skillpoints < 0);

            if (agility >= 6)
            {
                printf("\nI agree, I was honestly very impressed with how well you stuck the landing\n");
            }
            else
            {
                printf("\nYes, I'm very sorry, if I had only known you would land like...that\n");
            }
           do
           {
            skillpoints = (points - agility - intelligence - charisma - strength - resilliance);
            printf("\nYou have %d skill points left\n" , skillpoints);

            printf("\nLast question, on a scale of 0-10, how badly do you need glasses, one being the most necessary\n");
            scanf("%d" , &perception);
            printf("\n*****************************************************************************************************************************\n");
           }
           while(perception > 10 || perception < 0 || skillpoints < 0);//prevent user from inputing incorrect value//

                if (perception >= 6)

                {
                    printf("\nOh...okay, guess I'll just throw these away, oh 'all seeing %s\n" , playername);
                }
                else
                {
                    printf("\nThats unfortunate, I'm not so sure these glasses will go super well with this games fantasy themes\n");
                    printf("\nBut if you need them, you need them\n");
                }
                skillpoints = (points - charisma - perception - strength - agility - intelligence - resilliance);
                printf("\nYou have %d skill points left\n" , skillpoints);
            printf("\n***********************************************************************************************************************************************\n");

            printf("\nEND OF CHARACTER CREATION");
            printf("\n*****************************************************************************************************************************\n");
            printf("\nCHAPTER 1");

            //end of character creation//




}



