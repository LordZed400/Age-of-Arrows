# Age of Arrows

Age of Arrows was my first Big Project. This is a 2-Player Game made entirely in C Programming Language.  
This Program utilizes all the basic knowledge of `arrays`, `structures`, `pointers`, `functions`, `file handling`, etc.  
There is heavy utilization of the native `graphics library` as well.  
  
This is a game of Archery, where 2 Players control their individual Bows and shoot one another. The game ends when the Players are out of Arrows to shoot.  
![Game Screen](https://github.com/LordZed400/Age-of-Arrows/blob/master/Screenshots/Screenshot-13.png "Age of Arrows")
  

This game has fully functional  
- Title Screen  
![Title Screen](https://github.com/LordZed400/Age-of-Arrows/blob/master/Screenshots/Screenshot-2.png "Title")
  
- Loading Screen  
![Loading Screen](https://github.com/LordZed400/Age-of-Arrows/blob/master/Screenshots/Screenshot-3.png "Loading")
  
- Menu System  
![Menu Screen](https://github.com/LordZed400/Age-of-Arrows/blob/master/Screenshots/Screenshot-5.png "Menu")
  
- Character Selection  
![Character Selection Screen](https://github.com/LordZed400/Age-of-Arrows/blob/master/Screenshots/Screenshot-11.png "Character Selection")
  
- Highscore System  
![Highscore Screen](https://github.com/LordZed400/Age-of-Arrows/blob/master/Screenshots/Screenshot-7.png "Title Screen")
  
## Working
The `GAMEAOA.CPP` is the main code file where all the necessary Library files are included, along with custom header files.  
The custom header `DRAW.H` handles every process related to drawing graphics on the screen, while `FLOW.H` controls the flow of the program an does the calculation part.  

The `DRAW.H` library has following functions:  
- `make()` : Creates the Player
- `rearrow()` : Creates the counter for available arrows
- `arrow()` : Creates the arrows that the players shoot
- `theGame()` : Creates the Boundary for the Game
  
The `FLOW.H` library has following functions:  
- `title()` : Creates the Title Screen
- `loading()` : Creates the Loading Screen
- `selection()` : Performs operation according to the selection from the Game Menu
- `menu()` : Creates the Game Menu
- `choosePlayer()` : Creates the Character Selection Screen
- `howtoControl()` : Displays the controls
- `credits()` : Displays the name of creators
- `writeFile()` : Writes scores in `scores.dat`
- `readFile()` : Reads and displays Highscores from `scores.dat`
- `decide()` : Decide whether P1 or P2 is the winner according the their points
- `points()` : Keeps the record of points of each Player

