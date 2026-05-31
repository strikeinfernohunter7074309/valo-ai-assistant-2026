#include <iostream>
#include <string>

// Configuration manager for Valorant AI Assist user preferences
struct AssistConfig {
    bool enableOverlay = true;
    int analysisSpeedMs = 16; // Optimized for 60Hz/144Hz displays
    float assistantSensitivity = 0.75f;
};

void LoadDefaultSettings() {
    AssistConfig currentSettings;
    
    std::cout << "[CONFIG] Loading user preferences..." << std::endl;
    if (currentSettings.enableOverlay) {
        std::cout << "[CONFIG] Smart UI Overlay: ENABLED" << std::endl;
    }
    std::cout << "[CONFIG] Refresh Rate set to: " << currentSettings.analysisSpeedMs << "ms" << std::endl;
    std::cout << "[CONFIG] Assistant Profile Level: " << currentSettings.assistantSensitivity << std::endl;
    std::cout << "[CONFIG] All settings successfully applied to Valorant AI Assist!" << std::endl;
}