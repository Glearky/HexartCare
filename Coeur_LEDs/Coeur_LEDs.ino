#include "param.h"


const int L1C = 3;
const int L2C = 4;
const int L3C = 5;
const int L4C = 6;
const int L5C = 7;
const int L6C = 8;
const int L7C = 9;
const int L8C = 10;
const int L9C = 11;
const int L10C = 12;
/*-----------------------------------------------*/
void setup()
{
  pinMode(L1C, OUTPUT);
  pinMode(L2C, OUTPUT);
  pinMode(L3C, OUTPUT);
  pinMode(L4C, OUTPUT);
  pinMode(L5C, OUTPUT);
  pinMode(L6C, OUTPUT);
  pinMode(L7C, OUTPUT);
  pinMode(L8C, OUTPUT);
  pinMode(L9C, OUTPUT);
  pinMode(L10C, OUTPUT);
}
/*-----------------------------------------------*/
void loop()
{                                                                                                                                                           
  if (TYPE == 0)
  {
    for (int i = INI; i < 13 ; i)
    {
      digitalWrite(i, HIGH);
    }
    delay(1000);

    for (int i = INI; i < 13 ; i)
    {
      digitalWrite(i, LOW);
    }
    delay(1000);
  }
  /*-----------------------------------------------*/
  if (TYPE == 1)
  {
    for(int i = INI; i < 13 ; i++ & i++)
      {
        digitalWrite(i,HIGH);
        
      } 
      delay(500);
    
      for(int i = INI; i < 13 ; i++ & i++)
      {
        digitalWrite(i,LOW);
        
      }
      delay(500);
        for(int i = INI2; i < 13 ; i++ & i++)
      {
        digitalWrite(i,HIGH);
        
      } 
      delay(500);

      for(int i = INI2; i < 13 ; i++ & i++)
      {
        digitalWrite(i,LOW);
        
      }
      delay(500);
  }
  /*-----------------------------------------------*/
  if (TYPE == 2)
  {
    for (int i = INI; i < 13 ; i ++ & i++ & i++)
    {
      digitalWrite(i, HIGH);
    }
    delay(50);

    for (int i = INI; i < 13 ; i ++ & i++ & i++)
    {
      digitalWrite(i, LOW);
    }
    delay(50);
    for (int i = INI2; i < 13 ; i ++ & i++ & i++)
    {
      digitalWrite(i, HIGH);
    }
    delay(50);

    for (int i = INI2; i < 13 ; i ++ & i++ & i++)
    {
      digitalWrite(i, LOW);
    }
    delay(50);
        for (int i = INI3; i < 13 ; i ++ & i++ & i++)
    {
      digitalWrite(i, HIGH);
    }
    delay(50);

    for (int i = INI3; i < 13 ; i ++ & i++ & i++)
    {
      digitalWrite(i, LOW);
    }
    delay(50);
  }
  /*-----------------------------------------------*/
  if (TYPE == 3)
  {
    digitalWrite(L1C, HIGH);
    
    digitalWrite(L2C, HIGH);
    
    digitalWrite(L3C, HIGH);
    
    digitalWrite(L4C, HIGH);
    delay(50);
    digitalWrite(L1C, LOW);
    delay(50);
    digitalWrite(L5C, HIGH);
    delay(50);
    digitalWrite(L2C, LOW);
    delay(50);
    digitalWrite(L6C, HIGH);
    delay(50);
    digitalWrite(L3C, LOW);
    delay(50);
    digitalWrite(L7C, HIGH);
    delay(50);
    digitalWrite(L4C, LOW);
    delay(50);
    digitalWrite(L8C, HIGH);
    delay(50);
    digitalWrite(L5C, LOW);
    delay(50);
    digitalWrite(L9C, HIGH);
    delay(50);
    digitalWrite(L6C, LOW);
    delay(50);
    digitalWrite(L10C, HIGH);
    delay(50);
    digitalWrite(L7C, LOW);
    delay(50);
    digitalWrite(L1C, HIGH);
    delay(50);
    digitalWrite(L8C, LOW);
    delay(50);
    digitalWrite(L2C, HIGH);
    delay(50);
    digitalWrite(L9C, LOW);
    delay(50);
    digitalWrite(L3C, HIGH);
    delay(50);
    digitalWrite(L10C, LOW);
    delay(50);
  }
  /*-----------------------------------------------*/
  if (TYPE == 4)
  {
    for (int i = INI; i < 13 ; i ++)
    {
      digitalWrite(i, HIGH);
    }
    delay(500);

    for (int i = INI; i < 13 ; i ++)
    {
      digitalWrite(i, LOW);
    }
    delay(1000);
  }
  /*-----------------------------------------------*/
  if (TYPE == 5)
  {
  
    digitalWrite(4, HIGH);
    digitalWrite(12, HIGH);
    delay(50);
    
    digitalWrite(3, HIGH);
    delay(50);
    
    digitalWrite(5, HIGH);
    digitalWrite(11, HIGH);
    delay(50);

    digitalWrite(6, HIGH);
    digitalWrite(10, HIGH);
    delay(50);

    digitalWrite(7, HIGH);
    digitalWrite(9, HIGH);
    delay(50);
    
    digitalWrite(8, HIGH);
    
    delay(50);

    digitalWrite(4, LOW);
    digitalWrite(12, LOW);
    delay(50);
    
    digitalWrite(3, LOW);
    delay(50);

    digitalWrite(5, LOW);
    digitalWrite(11, LOW);
    delay(50);
    
    digitalWrite(6, LOW);
    digitalWrite(10, LOW);
    delay(50);

    digitalWrite(7, LOW);
    digitalWrite(9, LOW);
    delay(50);
    
    digitalWrite(8, LOW);
    
    delay(50);

    digitalWrite(8, HIGH);
    
    delay(50);

    digitalWrite(7, HIGH);
    digitalWrite(9, HIGH);
    delay(50);
    
    digitalWrite(6, HIGH);
    digitalWrite(10, HIGH);
    delay(50);

    digitalWrite(5, HIGH);
    digitalWrite(11, HIGH);
    delay(50);
    
    digitalWrite(3, HIGH);
    delay(50);
    
    digitalWrite(4, HIGH);
    digitalWrite(12, HIGH);
    delay(50);

    digitalWrite(8, LOW);
    
    delay(50);
    
    digitalWrite(7, LOW);
    digitalWrite(9, LOW);
    delay(50);

    digitalWrite(6, LOW);
    digitalWrite(10, LOW);
    delay(50);

    digitalWrite(5, LOW);
    digitalWrite(11, LOW);
    delay(50);

    digitalWrite(3, LOW);
    delay(50);

    digitalWrite(4, LOW);
    digitalWrite(12, LOW);
    delay(50);
  }
}

