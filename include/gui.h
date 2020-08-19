#ifndef NX_SHELL_GUI_H
#define NX_SHELL_GUI_H

#include <vector>
#include <string>
#include <SDL.h>
#include <switch.h>

enum MENU_STATES {
    MENU_STATE_HOME,
    MENU_STATE_OPTIONS,
    MENU_STATE_DELETE,
    MENU_STATE_PROPERTIES,
    MENU_STATE_SETTINGS,
    MENU_STATE_IMAGEVIEWER
};

typedef struct {
    int state = 0;
    bool copy = false;
    bool move = false;
    int selected = 0;
    int file_count = 0;
    std::string selected_filename;
    FsDirectoryEntry *entries = nullptr;
    std::vector<bool> checked;
    std::vector<bool> checked_copy;
    std::string checked_cwd;
    int checked_count = 0;
    s64 used_storage = 0;
    s64 total_storage = 0;
} MenuItem;

namespace GUI {
    void ResetCheckbox(MenuItem *item);
    int RenderMainMenu(SDL_Window *window);
}

#endif
