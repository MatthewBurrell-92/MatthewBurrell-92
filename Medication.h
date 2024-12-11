/**********************************************************************
 * Header File:
 *    Medication
 * Author:
 *    Matthew Burrell
 * Summary:
 *    Store information for a medication
 ************************************************************************/

#pragma once

 /*********************************************
  * Medication
  * As previously stated
  *********************************************/
class Medication
{
public:

    /*********************************************
    * Default constructor
    * parameter: name : string
    * returns: void
    *********************************************/
    Medication(string name)
    {
        this->name = name;
    }

    /*********************************************
    * Copy constructor
    * parameter: med : Medication
    * returns: void
    *********************************************/
    Medication(Medication med)
    {
        this->name = med.getName();
    }

    /*********************************************
    * getName()
    * getter for name attribute
    * parameter: none
    * returns: name : string
    *********************************************/
    string getName()
    {
      return name;
    }

    /*********************************************
    * displayContraindications()
    * outputs each contraindication listed
    * parameter: none
    * returns: void
    *********************************************/
    void displayContraindications()
    {
      std::cout << "Contraindications are as follows: " << std::endl;
      for (std::list<std::string>::iterator it = contraindications.begin(); it != contraindications.end(); it++)
      {
          std::cout << *it << std::endl;
      }
    }

    /*********************************************
    * isIndicated()
    * returns a boolean value if indication is found in list of indications
    * parameter: indication : string
    * returns: bool
    *********************************************/
    bool isIndicated(string indication)
    {
      for (std::list<std::string>::iterator it = indications.begin(); it != indications.end(); it++)
      {
          if (*it == indication)
          {
            return true;
          }
      }
      return false;
    }

    /*********************************************
    * addContraindication()
    * adds a contraindication to the list
    * parameter: contraindication : string
    * returns: void
    *********************************************/
    void addContraindication(string contraindication)
    {
      contraindications.pushback(contraindication);
    }

    /*********************************************
    * addIndication()
    * adds an indication to the list
    * parameter: indication : string
    * returns: void
    *********************************************/
    void addIndication(string indication)
    {
      indications.pushback(indication);
    }


    // What direction to go? Does Medication class store dosage and uses?
// dosage belongs to the medication. Hoe to differentiate between the two or three doses / uses?
// Use object? stores dose. 

    /*********************************************
    * ammountToGive() - default
    * outputs amount of medication to give
    * parameter: contraindication : string
    * returns: void
    *********************************************/
    void addContraindication(string contraindication)
    {
      contraindications.pushback(contraindication);
    }






private:
    std::string name;
    Concentration concentration;
    // How to store dosage information?
    // Ketamine has three different doses, depending on use
    Dosage dose;
    std::List<string> indications;
    std::List<string> contraindications;
    
};
