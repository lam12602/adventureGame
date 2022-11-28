#include <iostream>
#include "Player.h"
#include "Area.h"
#include "Monster.h"

int main()
{
    @@ - 25, 16 + 26, 24 @@ int main()
        Area belfry("Belfry", "This Belfry is full of bats. Lots and lots of bats. Bats in the Belfry. Below you is the Throneroom.");

    // Setup exits for each area
    entrance.exits.push_back(&hallway);
    hallway.exits.push_back(&entrance);
    hallway.exits.push_back(&throneroom);
    throneroom.exits.push_back(&hallway);
    throneroom.exits.push_back(&crack);
    throneroom.exits.push_back(&belfry);
    crack.exits.push_back(&throneroom);
    crack.exits.push_back(&chamber);
    chamber.exits.push_back(&crack);
    belfry.exits.push_back(&throneroom);
    entrance.AddExit(&hallway);
    hallway.AddExit(&entrance);
    hallway.AddExit(&throneroom);
    throneroom.AddExit(&hallway);
    throneroom.AddExit(&crack);
    throneroom.AddExit(&belfry);
    crack.AddExit(&throneroom);
    crack.AddExit(&chamber);
    chamber.AddExit(&crack);
    belfry.AddExit(&throneroom);

    // Create Monsters
    Monster goblin("Goblin", "A smelly green goblin.", 50, 5);
    Monster goblinKing("GoblinKing", "Some kind of rock star with very tight pants.", 200, 50);
    Monster spider("Spider", "A giant spider. Just wants to catch and eat giant flies - your friend, really.", 100, 10);

    hallway.AddMonster(&goblin);
    throneroom.AddMonster(&goblinKing);

    // Create the player
    std::cout << "Please name your character: " << std::endl;
    @@ - 49, 14 + 58, 14 @@ int main()

        // We tell them to start in the entrance room, and use the name and description they provide.
        Player myPlayer(playerName, playerDescription);
    myPlayer.currentArea = &entrance;
    myPlayer.SetCurrentArea(&entrance);

    bool exit = false;

    while (exit == false)
    {
        // Print out where the player currently is, and their current health.
        std::cout << "You are in the " << myPlayer.currentArea->name << std::endl;
        std::cout << "You are in the " << myPlayer.GetCurrentArea()->GetName() << std::endl;

        std::cout << "What do you want to do?" << std::endl << std::endl;

        @@ - 72, 16 + 81, 15 @@ int main()
            if (choice == "area")
            {
                // Go to our current area and Look at it!
                myPlayer.currentArea->Look();
                myPlayer.GetCurrentArea()->Look();
            }
            else if (choice == "self")
            {
                myPlayer.Look();
            }
            else
            {
                std::cout << "Sorry, I didn't understand the target \"" << choice << "\"" << std::endl;
                std::cout << "Try looking at the area around you, yourself, or a specific item, feature, or monster!" << std::endl << std::endl;
                myPlayer.GetCurrentArea()->LookAtContents(choice);
            }
    }
        else if (choice == "go")
        @@ - 91, 7 + 99, 14 @@ int main()
        std::cin >> choice;

        // Try going from the current area to the target area
        myPlayer.currentArea->Go(&myPlayer, choice);
        myPlayer.GetCurrentArea()->Go(&myPlayer, choice);
}
        else if (choice == "attack")
        {
        std::cout << "What do you want to attack?" << std::endl << std::endl;

        std::cin >> choice;
        myPlayer.GetCurrentArea()->AttackContents(choice, &myPlayer);
        }
        else if (choice == "exit")
        {
        @@ - 105, 6 + 120, 7 @@ int main()
            // Add to these as you add more commands!
            std::cout << "     look" << std::endl;
        std::cout << "     go" << std::endl;
        std::cout << "     attack" << std::endl;
        std::cout << "     exit" << std::endl;
        std::cout << "     help" << std::endl;

        @@ - 115, 6 + 131, 13 @@ int main()
            std::cout << "Sorry, I didn't understand the command \"" << choice << "\"" << std::endl;
        std::cout << "Try typing \"help\" for a list of commands." << std::endl << std::endl;
        }


        if (myPlayer.GetAlive() == false)
        {
            std::cout << "You have died. Game over." << std::endl << std::endl;
            exit = false;
        }
    }

}


