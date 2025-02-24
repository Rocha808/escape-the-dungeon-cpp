#include <iostream>
#include <string>

using namespace std;

int main ()
{
    // variables used
    int choice, health = 100, damage;

    // game prompt
    cout << "**********Welcome to Escape The Dungeon!**********\n";
    cout << "You find yourself trapped in a dark dungeon.\n";
    cout << "You've escaped your cell and are looking for a way out but beware the guards and \n"
     << "the many dangers for you only have a certain amount of health. \n";
    cout << "Which path do you choose? (1) North down a long corridor or (2) East which leads to an upward spiraling staircase?\n";
    cin >> choice;

    // switch statment with 2 choices. Each choice having even more choices through the use of nested if else statments 
    switch (choice) {
        // Go North at prompt
        case 1:
            cout << "You choose to go North and are immediately spotted by a guard.\n";
            cout << "Do you (1)Attack him or (2)Run away? \n";
            cin >> choice;

            //Attack guard
            if (choice == 1) {
                damage = 20;
                health = health - damage;
                cout << "You attack the guard and take " << damage << " damage but successfully defeat him. You've gained a sword!\n";
                cout << "Health: " << health << endl;
                cout << "\nYou continue north and end up in front of a darkly lit and caged battle arena and notice a clear passage on the other side of the arena. You crawl inside and \n";
                cout << "a chained dragon awakens. Do you (1)Fight it, (2)Freeze, or (3)Run away?\n";
                cin >> choice;
                // Fight dragon
                if (choice == 1) {
                    damage = 60;
                    health = health - damage;
                    cout << "You are able to defeat the dragon thanks to your sword but take " << damage << "  damage.\n",
                    cout << "Health: " << health << endl;
                    cout << "\nYou continue your journey through the dungeon and see yet another guard up ahead.\n";
                    cout << "Do you (1)Attack him or (2)Find another way?\n";
                    cin >> choice;
                    // Attack 2nd guard
                    if (choice == 1) {
                        damage = 20;
                        health = health - damage;
                        cout << "You attack the guard but face defeat as a consequence of the damage taken and due to your dwindling health." << endl;
                        cout <<"Health: " << health << endl;
                    // Find another way
                    } else if (choice == 2) {
                        cout << "You find another way and see sunlight at the end. Congratulations! You've escaped the dungeon!\n";
                    } else {
                        cout << "Invalid Choice: You wait infinitely deciding on a choice to make and die of old age. RIP." << endl;
                    }
                // Freeze in front of dragon
                } else if (choice == 2) {
                    cout << "The dragon stares at you with curiosity, waiting on your next move." << endl;
                    cout << "Do you (1)Put your sword down and show peace or (2)Hold your sword ready to strike if need be?" << endl;
                    cin >> choice;
                    // Put sword down
                    if (choice == 1) {
                        cout << "The dragon trust you and you tame the beast as you both help each other break free.\n";
                        cout << "Congratulation! You've escaped the dungeon and tamed a dragon!\n";
                    // Hold sword
                    } else if (choice == 2){
                        damage = 80;
                        health = health - damage;
                        cout << "The dragon grows cautiosly and it's fiery breath deals " << damage << " damage as it scorches you to your death." << endl;
                        cout << "Health: " << health << endl;
                    } else {
                        cout << "Invalid Choice: You never make a move and you and the dragon both fall asleep.\n";
                    }
                // Run away from dragon
                } else if (choice == 3) {
                    cout << "You attempt to run away.\nDo you (1)Go back or (2)Run towards the clear passage on the other side of the arena?" << endl;
                    cin >> choice;
                    // Run back
                    if (choice == 1) {
                        cout << "You run back unharmed and but are captured by a group of alarmed guards.\n";
                    // Run to clear passage
                    } else if (choice == 2) {
                        cout << "You make a break for it but the dragon eats you in one underwhelming swipe.\n";
                    } else {
                        cout << "Invalid Choice: You run around in circles cowardly flailing your arms in the air as the dragon watches you unamused.\n";
                    }
                } else {
                    cout << "Invalid Choice: You poop your pants, dragon laughs." << endl;
                }
            // Run away from guard
            } else if (choice == 2) {
                cout << "You find an empty room to hide and succesfully get away. The room has stairs leading down to a closed door. \n";
                cout << "Do you (1)Go down the stairs, (2)Search the room, or (3)Go back out to the corridor?" << endl;
                cin >> choice;
                // Go down stairs
                if (choice == 1) {
                    cout << "You go down the stairs and open the closed door to find yet another room. There's a chest in the room.\n";
                    cout << "Also in the room is another door but this door has a circular window from which you can see evidence of sunlight.\n";
                    cout << "Do you open the (1)Chest or the (2)Door?" << endl;
                    cin >> choice;
                    // Open chest
                    if (choice == 1) {
                        cout << "You need a key to open the chest so you go to open the door instead.\n";
                        cout << "As you're nearing the door you step on a loose stone which triggers a trap from above, capturing you mid escape." << endl;
                    // Open door
                    } else if (choice == 2) {
                        cout <<"As you're nearing the door you step on a loose stone which triggers a trap from above, capturing you mid escape." << endl;
                    } else {
                        cout << "Invalid Choice: You don't open either and instead listen to the birds chirping outside the door." << endl;
                    }
                // Search the room
                } else if (choice == 2) {
                    cout << "You search the room and find a key.\n";
                    cout << "Do you go back to the (1)Corridor or down the stairs to the (2)Closed door?" << endl;
                    cin >> choice;
                    // Go back to corridor
                    if (choice == 1) {
                        cout << "You go back to the corridor to find a gang of guards searching for you and they immediately seize you." << endl;
                    // Go down stairs to closed door
                    } else if (choice == 2) {
                        cout << "You go down the stairs and open the closed door to find yet another room. There's a chest in the room.\n";
                        cout << "Also in the room is another door but this door has a circular window from which you can see evidence of sunlight.\n";
                        cout << "Do you open the (1)Chest or the (2)Door?" << endl;
                        cin >> choice;
                        //open chest
                        if (choice == 1) {
                            cout << "You need a key to open the chest.\n";
                            cout << "You use the key found earlier and open the chest to find a map of the dungeon.\n";
                            cout << "On the map you see an escape tunnel to the East from your cell and follow it to freedom.\n";
                            cout << "Congratulations! You've escaped the dungeon through a hidden escape tunnel!" << endl;
                        // open door
                        } else if (choice == 2) {
                            cout << "As you're nearing the door you step on a loose stone which triggers a trap from above, capturing you mid escape." << endl;
                        } else {
                            cout << "Invalid Choice: Remember, there's a key in your inventory which could come in handy when trying to open certain things." << endl;
                        }
                    } else {
                        cout << "Invalid Choice: You do neither and instead have a heart attack, tough luck." << endl;
                    }
                // Go back out to corridor
                } else if (choice == 3) {
                    cout << "You go back to the corridor to find a gang of guards searching for you and they immediately seize you." << endl;
                } else {
                    cout << "Invalid Choice: Guards hear you breathing and storm the room." << endl;
                }
            } else {
                cout << "Invalid Choice: You freeze and guard detains you." << endl;
            }
            break;
        // Go East at prompt
        case 2:
            cout << "You choose to go East towards the spiraling staircase. As you walk by you hear a fellow prisoner. He claims to be a wizard.\n";
            cout << "Do you (1)Help him escape or (2)Continue East?" << endl;
            cin >> choice;
            // Help wizard escape
            if (choice == 1) {
                cout << "You help the wizard escape from his cell. He asks if you will help him further by retriving his staff for he's powerless without it.\n"; 
                cout << "He says the guards seized it and placed it in their armory but he knows the way.\n";
                cout << "Do you (1)Embark on the mission or (2)Lead him East to the staircase?" << endl;
                cin >> choice;
                // Help wizard get his staff back
                if (choice == 1) {
                    cout << "You join him on his mission to retrive his staff. He says he knows where it's located but it is heavily guarded.\n";
                    cout << "You follow his lead and before you encouter the guards, he offers you a Potion of Strength which only works on mortals to temporarily increase strength.\n";
                    cout << "Do you (1)Drink the potion or (2)Suggest you both fight the guards instead?" << endl;
                    cin >> choice;
                    //Drink potion of strength
                    if (choice == 1) {
                        cout << "You drink the Potion of Strength and immediately feel a rush power running through you.\n";
                        cout << "You singlehandedly defeat all the guards and retrive the wizard his staff.\n"; 
                        cout << "The wizard, now at full power, casts spells on you which give you powers beyond your wildest dreams.\n";
                        cout << "Congratulations! You and the wizard easily fight your way out and escape the dungeon!" << endl;
                    // Y'all both fight guards
                    } else if (choice == 2) {
                        cout << "You suggest you both fight the guards instead. The numerous guards overpower and capture the two of you." << endl; 
                    } else {
                        cout << "Invalid Choice: The guards hear you discussion your options and capture you." << endl;
                    }
                //Lead wizard East to staircase 
                } else if (choice == 2) {
                    cout << "You convince him to follow you to the staircase instead.\n";
                    cout << "As you go up the spiraling staircase, the wizard notices a brick on the wall which he finds very peculiar for it seems different to him.\n";
                    cout << "He touches it and it magically opens to reveal a dark tunnel leading down that immediately pull you both in. As you both slide down the tunnel it splits into two tunnels.\n";
                    cout << "Do you take the (1)Right or (2)Left tunnel?" << endl;
                    cin >> choice;
                    // Take right tunnel
                    if (choice == 1) {
                        cout << "You choose the right tunnel.\nAs you continue to fall down the tunnel, a bright blue glowns from beneath\n";
                        cout << "You fall into a very bright body of water, an underground lake. An immense dark figure rapidly zips trough the water.\n";
                        cout << "It's a Kraken! A massive, tentacled sea monster. It quickly creates a whirpool and the strong currents are too powerful to swim in and you drown." << endl;
                    // Take left tunnel
                    } else if (choice == 2) {
                        cout << "You choose the left tunnel. It turns out to be a secret escape tunnel. You're free.\n";
                        cout << "Congratulations! You've escaped the dungeon!" << endl;
                    } else {
                        cout << "Invalid Choice: You pass out while falling down the tunnel." << endl;
                    }
                } else {
                    cout << "Invalid Choice: The wizard loses patience and escapes without you." << endl;
                }
            //Dont help wizard and go east
            } else if (choice == 2) {
                cout << "You ignore the prisoner and continue East towards the staircase.\n";
                cout << "At the top of the stairs you're met him a big armored Ogre guard. He goes to strike you.\n";
                cout << "Do you (1)Block his strike or attempt to (2)Dodge it?" << endl;
                cin >> choice;
                // Block Ogre's 1st strike
                if (choice == 1) {
                    damage = 50;
                    health = health - damage;
                    cout << "You blocked his strike but still sustained plenty of damage.\n";
                    cout << "Health: " << health << endl;
                    cout << "You run away before he can strike again and get away.\n";
                    cout << "While you explore you hear a faint noise that sounds like hammer hitting a nail.\n";
                    cout << "Do you (1)Follow the noise or (2)Ignore it?" << endl;
                    cin >> choice;
                    // Follow noise
                    if (choice == 1) {
                        cout << "You follow the noise and discover an old semmingly abandoned workshop.\n";
                        cout << "Do you (1)Stay or (2)Leave the room?" << endl;
                        cin >> choice;
                        // Stay in abandoned workshop
                        if (choice ==1) {
                            cout << "You stay and discover blacksmith recipes to creating enchanted weapons.\n";
                            cout << "You build the Shadow Dagger which allows you the wielder to move silently and become nearly invisible.\n";
                            cout << "Congratulations! You stealthily escape the dungeon using the enchanted weapon you built, the Shadow Dagger!" << endl;
                        // Leave abandoned workshop
                        } else if (choice == 2) {
                            health = health - damage;
                            cout << "You leave the room and come across the Ogre again. He strikes you but you can't dodge it in time.\n";
                            cout << "You block again but your weak body can't endure the damage another time.\n";
                            cout << "Health: " << health << endl;
                        }else {
                            cout << "Invalid Choice: The floor collapses and you fall to your death." << endl;
                        }
                    // Ignore noise and 2nd Ogre strike
                    } else if (choice == 2) {
                        health = health - damage;
                        cout << "You come across the Ogre again. He strikes you but you can't dodge it in time.\n";
                        cout << "You block again but your weak body can't endure the damage another time.\n";
                        cout << "Health: " << health << endl;
                    } else {
                        cout << "Invalid Choice: Apparently you're deaf AND blind." << endl;
                    }
                // Attempt to dodge Ogre's 1st strike
                } else if (choice == 2) {
                    cout << "You dodge it succesfully but accidentally fall back down the stairs to your death.\n";
                } else {
                    cout << "Invalid Choice: You do neither and the Ogre kills you in one blow.\n";
                }
            } else {
                cout << "Invalid Choice: But wait, the wizard suddenly remembers he can teleport himself and others by snapping his fingers.\n";
                cout << "Congratulations! You've escaped the dungeon by a miracle!" << endl;
            }
            break;
        default:
            cout << "Invalid Choice: You walk straight into a wall!" << endl;
    }

// Message displayed at the end of the game
 cout << "**********GAME OVER**********\n";
 cout << "    Thanks for playing!!!!" << endl;

    return 0;
}