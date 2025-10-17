/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aakritah <aakritah@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 14:22:40 by aakritah          #+#    #+#             */
/*   Updated: 2025/10/17 15:30:29 by aakritah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

class Animal {
public:
    virtual void makeSound() { std::cout << "Some generic sound\n"; }
};

class Dog : public Animal {
public:
    void makeSound()  { std::cout << "Woof!\n"; }
};

class Cat : public Animal {
public:
    void makeSound()  { std::cout << "Meow!\n"; }
};

void playSound(Animal* a) {
    a->Animal::makeSound();
    a->makeSound();
}

int main() {
    Dog d;
    // Cat c;
    playSound(&d); // Woof!
    // d.Animal::makeSound();
    // d.makeSound();
    // playSound(&c); // Meow!
}
