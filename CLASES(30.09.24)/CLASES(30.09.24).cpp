#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string model;
    string country;
    int year;
    double price;
public:
    Car() : model(""), country(""), year(0), price(0.0) {}
    Car(const string& model, const string& country, int year, double price)
        : model(model), country(country), year(year), price(price) {}
    void input() {
        cout << "Input car model: ";
        cin.ignore();
        getline(cin, model);
        cout << "Input country of start: ";
        getline(cin, country);
        cout << "Input year of start: ";
        cin >> year;
        cout << "Input price: ";
        cin >> price;
    }
    void print() const {
        cout << "Model: " << (model.empty() ? "No qualification" : model) << endl;
        cout << "Country: " << (country.empty() ? "No qualification" : country) << endl;
        cout << "Year of start: " << year << endl;
        cout << "Price: $" << price << endl;
    }
};

int main() {
    Car car1;
    car1.input();
    car1.print();
    Car car2("Toyota Supra", "Japan", 2020, 24000.50);
    car2.print();
}

