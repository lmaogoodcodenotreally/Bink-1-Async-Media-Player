import os
import asyncio
import win32gui
import win32con
import ctypes

async def check_bink_media_player():
    for file in sorted(os.listdir(os.getcwd())):
        if file.endswith(".bik"):
            os.system(f"bink_media_player.exe {file}")
            while True:
                window_handle = win32gui.FindWindow(None, "Bink Media Player")
                if window_handle:
                    await asyncio.sleep(0.1)
                else:
                    break
    ctypes.windll.user32.MessageBoxW(None, "All .bik files have been played.", "Success", win32con.MB_OK)

if __name__ == "__main__":
    asyncio.run(check_bink_media_player())