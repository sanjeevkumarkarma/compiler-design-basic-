+COMPANY: CODTECH IT SOLUTIONS PVT.LTD
*NAME: Sanjeev kumar karma 
INTERN ID:CT04DG3178
DOMAIN: C++ LANGUAGE
DURATION: 4 WEEKS
MENTOR: NEELA SANTOSH KUMAR
PARAGRAPH :The above C++ code implements a classic Snake Game using the raylib graphics library. The program begins by defining constants for the screen dimensions (screenWidth, screenHeight) and the size of each cell on the grid (cellSize). Based on these values, it calculates the grid dimensions as gridWidth and gridHeight. The game is structured using a class-based approach, encapsulated in a class called SnakeGame. A custom struct Vector2Int is defined to represent 2D positions on the grid with x and y coordinates. It also overloads the == operator to allow for direct comparison between positions, which is crucial for collision detection.

The SnakeGame class contains private members for the snake’s body (vector<Vector2Int>), the position of the food (food), the snake's movement direction (dir), a timer to control movement speed, a delay value (delay) that sets how often the snake moves, and a gameOver flag. The constructor calls the Reset() function to initialize the game state.

In the Reset() method, the snake is initialized with a single segment at the center of the grid. A new food item is randomly spawned using SpawnFood(). The timer and game over flag are reset as well. The Update() method is responsible for progressing the game. It uses GetFrameTime() to increment the timer. When the timer exceeds the delay, the snake moves one step in the current direction by updating the head of the snake. It then checks for collisions: if the snake hits a wall or collides with itself, the game ends. If the snake reaches the food, the head is inserted at the front of the body, and new food is generated. If not, the snake moves forward by inserting a new head and removing the tail.

Player input is handled using IsKeyPressed(), allowing the direction of the snake to be changed with the arrow keys while preventing direct reversal. The Draw() method visualizes the game: it draws the food in red and each segment of the snake (the head in dark green and the body in green). If the game is over, it displays a “GAME OVER” message and listens for the ‘R’ key to restart the game.

The main() function initializes the window using InitWindow() and sets the target frame rate to 60 FPS. Inside the main loop, BeginDrawing() and EndDrawing() wrap around the update and draw calls to render each frame. The loop continues until the window is closed using WindowShouldClose(), after which CloseWindow() is called to release resources.

Overall, this code demonstrates clean organization, object-oriented principles, and real-time graphics rendering. It effectively integrates logic, user input, collision detection, and visual feedback. By using raylib, it avoids complex graphical setup, making the game logic more transparent. The code is ideal for beginners learning game development, as it combines basic data structures, control flow, and user interaction into a complete interactive application.
C:\Users\Lenovo\AppData\Local\Microsoft\Windows\INetCache\IE\U5D0JEIY\IMG-20250720-WA0001[1].jpg

