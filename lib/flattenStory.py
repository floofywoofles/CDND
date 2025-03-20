import json
import sys
import os

args = sys.argv

if len(args) < 1:
    print("Invalid number of argumens")
    exit(1)

storyFile = args[1]

if not os.path.exists(storyFile):
    print("Invalid path to story file")
    exit(1)

with open(storyFile, "r") as f:
    storyData = json.load(f)

storyTree = storyData["tree"]

for i in range(len(storyTree)):
    storyOption = storyTree[i]
    print(f"{i}: {storyOption}")