#include <iostream>
using namespace std;

string arr1[20], arr2[20], arr3[20], arr4[20], arr5[20];
int total = 0;

void enter()
{
    int choice;
    cout << "\nHow many students do you want to enter:\t";
    cin >> choice;
    if (total == 0)
    {
        total = total + choice;

        for (int i = 0; i < choice; i++)
        {
            cout << "\nEnter data of sudent:" << i + 1 << endl;
            cout << "\nEnter name:\t";
            cin >> arr1[i];
            cout << "\nEnter rollno:\t";
            cin >> arr2[i];
            cout << "\nEnter course:\t";
            cin >> arr3[i];
            cout << "\nEnter class:\t";
            cin >> arr4[i];
            cout << "\nEnter contact:\t";
            cin >> arr5[i];
        }
    }
    else
    {
        for (int i = total; i < total + choice; i++)
        {
            cout << "Enter data of sudent:" << i + 1 << endl;
            cout << "\nEnter name:\t";
            cin >> arr1[i];
            cout << "\nEnter rollno:\t";
            cin >> arr2[i];
            cout << "\nEnter course:\t";
            cin >> arr3[i];
            cout << "\nEnter class:\t";
            cin >> arr4[i];
            cout << "\nEnter contact:\t";
            cin >> arr5[i];
        }
        total = total + choice;
    }
}
void show()
{
    for (int i = 0; i < total; i++)
    {
        cout << "\nData of student:\t" << i + 1 << endl;
        cout << "\nName:\t" << arr1[i];
        cout << "\nRollno:\t" << arr2[i];
        cout << "\nCourse:\t" << arr3[i];
        cout << "\nClass:\t" << arr4[i];
        cout << "\nContact:\t" << arr5[i] << endl << endl;
    }
}
void search()
{
    string rollno;
    cout << "\nEnter rollno of student to be searched:\t";
    cin >> rollno;
    for (int i = 0; i < total; i++)
    {
        if (rollno == arr2[i])
        {
            cout << "\nData of student:\t" << i + 1 << endl;
            cout << "\nName:\t" << arr1[i];
            cout << "\nRollno:\t" << arr2[i];
            cout << "\nCourse:\t"<< arr3[i];
            cout << "\nClass:\t" << arr4[i];
            cout << "\nContact:\t" << arr5[i] << endl
                 << endl;
        }
    }
}

void update()
{
    string rollno;
    cout << "\nEnter rollno of student to be searched:\t";
    cin >> rollno;
    for (int i = 0; i < total; i++)
    {
        if (rollno == arr2[i])
        {
            cout << "\nPrevious Data:\n";
            cout << "\nData of student:" << i + 1 << endl;
            cout << "\nName:\t" << arr1[i];
            cout << "\nRollno:\t" << arr2[i];
            cout << "\nCourse:\t" << arr3[i];
            cout << "\nClass:\t" << arr4[i];
            cout << "\nContact:\t" << arr5[i] << endl
                 << endl;

            cout << "\nEnter new data:\n";
            cout << "\nEnter name:\t";
            cin >> arr1[i];
            cout << "\nEnter rollno:\t";
            cin >> arr2[i];
            cout << "\nEnter course:\t";
            cin >> arr3[i];
            cout << "\nEnter class:\t";
            cin >> arr4[i];
            cout << "\nEnter contact:\t";
            cin >> arr5[i];

            cout << "\nNew Data:\n";
            cout << "\nData of student:\t" << i + 1 << endl;
            cout << "\nName:\t" << arr1[i];
            cout << "\nRollno:\t" << arr2[i];
            cout << "\nCourse:\t" << arr3[i];
            cout << "\nClass:\t" << arr4[i];
            cout << "\nContact:\t" << arr5[i] << endl
                 << endl;
        }
    }
}

void deleterecord()
{

    if (total == 0)

    {

        cout << "\nNo data is entered\n" << endl;
    }

    else
    {

        int a;

        cout << "\nPress 1 to delete all record\n" << endl;

        cout << "\nPress 2 to delete specific record\n" << endl;

        cin >> a;

        if (a == 1)

        {

            total = 0;

            cout << "\nAll record is deleted..!!\n" << endl;
        }

        else if (a == 2)

        {

            string rollno;

            cout << "\nEnter the roll no of student which you wanted to delete\n" << endl;

            cin >> rollno;

            for (int i = 0; i < total; i++)

            {

                if (rollno == arr2[i])

                {

                    for (int j = i; j < total; j++)

                    {

                        arr1[j] = arr1[j + 1];

                        arr2[j] = arr2[j + 1];

                        arr3[j] = arr3[j + 1];

                        arr4[j] = arr4[j + 1];

                        arr5[j] = arr5[j + 1];
                    }

                    total--;

                    cout << "Your required record is deleted" << endl;
                }
            }
        }

        else

        {

            cout << "Invalid input";
        }
    }
}

int main()
{
    int value;
    while (true)
    {
        cout << "\nPress 1 to enter data" << endl;
        cout << "\nPress 2 to show data" << endl;
        cout << "\nPress 3 to search data" << endl;
        cout << "\nPress 4 to update data" << endl;
        cout << "\nPress 5 to delete data" << endl;
        cout << "\nPress 6 to exit" << endl;
        cin >> value;
        switch (value)
        {
        case 1:
            enter();
            break;
        case 2:
            show();
            break;
        case 3:
            search();
            break;
        case 4:
            update();
            break;
        case 5:
            deleterecord();
            break;
        case 6:
            exit(0);
            break;
        default:
            cout << "\nInvalid input" << endl;
            break;
        }
    }
    return 0;
}
