#include <iostream>
#include <graphics.h>
#include <conio.h>
#include <vector>
#include <ctime>

class Asteroid {
public:
    Asteroid(double x, double y, double velocity_x, double velocity_y)
        : x(x), y(y), velocity_x(velocity_x), velocity_y(velocity_y) {}

    void move(double time_step) {
        x += velocity_x * time_step;
        y += velocity_y * time_step;
    }

    void draw() {
        setcolor(WHITE); // Set the drawing color to white
        circle(int(x), int(y), 10); // Draw the asteroid as a white circle
    }

    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }

    void reposition(int screen_width, int screen_height) {
        // Reposition the asteroid at the top of the screen when it reaches the bottom
        if (y > screen_height) {
            x = rand() % screen_width;
            y = -10; // Place it just above the top of the screen
        }
    }

private:
    double x;
    double y;
    double velocity_x;
    double velocity_y;
};

class Player {
public:
    Player(double x, double y)
        : x(x), y(y) {}

    void draw() {
        rectangle(int(x - 20), int(y - 20), int(x + 20), int(y + 20)); // Draw the player as a rectangle
    }

    void moveLeft() {
        x -= 5.0;
    }

    void moveRight() {
        x += 5.0;
    }

    void moveUp() {
        y -= 5.0;
    }

    void moveDown() {
        y += 5.0;
    }

    double getX() const {
        return x;
    }

    double getY() const {
        return y;
    }

private:
    double x;
    double y;
};

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI"); // Initialize graphics

    srand(time(0)); // Initialize random seed

    std::vector<Asteroid> asteroids;

    for (int i = 0; i < 5; ++i) {
        double x = rand() % getmaxx();
        double y = rand() % getmaxy();
        double velocity_x = rand() % 5 + 1; // Random speed between 1 and 5
        double velocity_y = rand() % 5 + 1; // Random speed between 1 and 5
        asteroids.push_back(Asteroid(x, y, velocity_x, velocity_y));
    }

    Player player(200.0, 400.0); // Initialize player object

    while (true) {
        cleardevice(); // Clear the screen

        for (int i = 0; i < asteroids.size(); ++i) {
            asteroids[i].draw(); // Draw each asteroid
            asteroids[i].move(1.0); // Move each asteroid forward in time by 1 unit
            asteroids[i].reposition(getmaxx(), getmaxy()); // Reposition the asteroid if it's off-screen

            // Check if the player has collided with any of the asteroids
            double asteroidX = asteroids[i].getX();
            double asteroidY = asteroids[i].getY();
            double playerX = player.getX();
            double playerY = player.getY();

            if (abs(asteroidX - playerX) < 20 && abs(asteroidY - playerY) < 20) {
                outtextxy(200, 200, "Game Over! Asteroid hit the player.");
                delay(2000); // Wait for 2 seconds before closing the graphics window
                closegraph(); // Close graphics
                return 0;
            }
        }

        player.draw(); // Draw the player

        if (kbhit()) {
            char key = getch();
            switch (key) {
                case 'a':
                    player.moveLeft();
                    break;
                case 'd':
                    player.moveRight();
                    break;
                case 'w':
                    player.moveUp();
                    break;
                case 's':
                    player.moveDown();
                    break;
            }
        }

        delay(100); // Delay to slow down animation
    }

    return 0;
}

