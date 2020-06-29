
{
    this->name = new char[20];
    strcpy(this->name, name);
    this->age = age;
    cout << "인자 있는 생성자" << endl;
}