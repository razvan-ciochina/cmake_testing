#pragma once

class BaseDep
{
public:
    BaseDep(int start, int end);
    int random_number();
private:
    int _start;
    int _end;
};
