#include <iostream>
#include <random>
#include <algorithm>

std::random_device rd;     //used once to initialise
std::mt19937 rng(rd());    // Random-number engine Mersenne-Twister
std::uniform_int_distribution<int> dist(1, 3); // Distribution of random numbers

int main() {
  std::string choice;//player's choice
  
  std::cout << "Welcome to Rock, Paper, Scissors!\n";
  std::cout << "Please enter your choice: ";
  std::cin >> choice;
  
  //displays player's choice
  std::cout << "You chose " << choice << "!\n";
  
  std::string choices[3] = {"Rock", "Paper", "Scissors"};//array of choices
  
  int choice_num = dist(rng);//random number between 1 and 3
  
  //displayers computer's choice (subtract 1 to get the index of the choice)
  std::cout << "The computer chose " << choices[choice_num - 1] << "!\n";

  //makes choice lowercase
  std::transform(choice.begin(), choice.end(), choice.begin(), ::tolower);

  //Displays outcome of game based on player and computer choices
  if (choice == "rock" && choice_num == 1) {
    std::cout << "It's a tie!\n";
  
  } else if (choice == "rock" && choice_num == 2) {
      std::cout << "You lose!\n";
    
  } else if (choice == "rock" && choice_num == 3) {
      std::cout << "You win!\n";
    
  } else if (choice == "paper" && choice_num == 1) {
      std::cout << "You win!\n";
    
  } else if (choice == "paper" && choice_num == 2) {
      std::cout << "It's a tie!\n";
    
  } else if (choice == "paper" && choice_num == 3) {
      std::cout << "You lose!\n";
    
  } else if (choice == "scissors" && choice_num == 1) {
      std::cout << "You lose!\n";
    
  } else if (choice == "scissors" && choice_num == 2) {
      std::cout << "You win!\n";
    
  } else if (choice == "scissors" && choice_num == 3) {
      std::cout << "It's a tie!\n";
    
  } else {
      std::cout << "Invalid choice. Please try again.\n";
  }
}
