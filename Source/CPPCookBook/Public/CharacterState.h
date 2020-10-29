#pragma once

UENUM()
enum CharacterState
{
    Stopped       UMETA(DisplayName = "Stopped"),
    Moving        UMETA(DisplayName = "Moving"),
    Attacking     UMETA(DisplayName = "Attacking"),
};