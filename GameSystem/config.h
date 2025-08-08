// config.h
#ifndef CONFIG_H
#define CONFIG_H

#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#include <EEPROM.h>
#include <Ethnocentric_Rg_It5pt7b.h>


// Button Pins
#define PIN_BUTTON_UP 4
#define PIN_BUTTON_DOWN 5
#define PIN_BUTTON_LEFT 15
#define PIN_BUTTON_RIGHT 18

// Display Pins
#define PIN_SCL 22
#define PIN_SDA 21

// Display Setup
#define SCREEN_WIDTH 128
#define SCREEN_HEIGHT 64
#define OLED_RESET -1
#define SCREEN_ADDRESS 0x3C

// Game Constants
#define MAX_GAMES 8
#define BUTTON_DELAY 150

// Game IDs
enum GameID {
  GAME_SNAKE = 0,
  GAME_TETRIS = 1,
  GAME_FLAPPY = 2,
  GAME_2048 = 3,
  GAME_BREAKOUT = 4,
  GAME_FROGGER = 5,
  GAME_HELICOPTER = 6,
  GAME_PACMAN = 7
};

// Game States
enum GameState {
  STATE_MENU,
  STATE_PLAYING,
  STATE_GAME_OVER,
  STATE_GAME_WON
};

// Global display object
extern Adafruit_SSD1306 display;

#endif