#ifndef USER_INTERFACE_H
#define USER_INTERFACE_H

// Function declarations for user_interface.c

/**
 * @brief Initializes the user interface.
 */
void ui_init(void);

/**
 * @brief Displays a message to the user.
 * 
 * @param message The message to display.
 */
void ui_display_message(const char *message);

/**
 * @brief Gets input from the user.
 * 
 * @param buffer The buffer to store the input.
 * @param size The size of the buffer.
 * @return int Returns 0 on success, or -1 on error.
 */
int ui_get_input(char *buffer, int size);

#endif // USER_INTERFACE_H