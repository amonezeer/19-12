#include <iostream>
using namespace std;

class Contact
{
    char* fullName;
    char* homePhone;
    char* workPhone;
    char* mobilePhone;
    char* additionalInfo;

public:
    Contact(const char* name, const char* home, const char* work, const char* mobile, const char* info) : homePhone(nullptr), workPhone(nullptr), mobilePhone(nullptr), additionalInfo(nullptr)
    {
        int nameLength = 0;
        while (name[nameLength] != '\0')
        {
            nameLength++;
        }
        fullName = new char[nameLength + 1];
        for (int i = 0; i <= nameLength; i++)
        {
            fullName[i] = name[i];
        }

        int homeLength = 0;
        while (home[homeLength] != '\0')
        {
            homeLength++;
        }
        homePhone = new char[homeLength + 1];
        for (int i = 0; i <= homeLength; i++)
        {
            homePhone[i] = home[i];
        }

        int workLength = 0;
        while (work[workLength] != '\0')
        {
            workLength++;
        }
        workPhone = new char[workLength + 1];
        for (int i = 0; i <= workLength; i++)
        {
            workPhone[i] = work[i];
        }

        int mobileLength = 0;
        while (mobile[mobileLength] != '\0')
        {
            mobileLength++;
        }
        mobilePhone = new char[mobileLength + 1];
        for (int i = 0; i <= mobileLength; i++)
        {
            mobilePhone[i] = mobile[i];
        }

        int infoLength = 0;
        while (info[infoLength] != '\0')
        {
            infoLength++;
        }
        additionalInfo = new char[infoLength + 1];
        for (int i = 0; i <= infoLength; i++)
        {
            additionalInfo[i] = info[i];
        }
    }

    ~Contact()
    {
        delete[] fullName;
        delete[] homePhone;
        delete[] workPhone;
        delete[] mobilePhone;
        delete[] additionalInfo;
    }

    const char* getFullName() const { return fullName; }
    const char* getHomePhone() const { return homePhone; }
    const char* getWorkPhone() const { return workPhone; }
    const char* getMobilePhone() const { return mobilePhone; }
    const char* getAdditionalInfo() const { return additionalInfo; }

    void displayContact() const
    {
        cout << "Full Name: " << fullName << endl;
        cout << "Home Phone: " << homePhone << endl;
        cout << "Work Phone: " << workPhone << endl;
        cout << "Mobile Phone: " << mobilePhone << endl;
        cout << "Additional Info: " << additionalInfo << endl;
    }
};

int main()
{
    Contact c("Genri Boe", "1230981231", "0973957421", "561123891", "Some additional info");
    c.displayContact();
    return 0;
}