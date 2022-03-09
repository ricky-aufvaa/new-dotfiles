volume=$(pactl list sinks | python -c 'if 1:
    import sys

    target_sink = sys.argv[1]
    sink = None
    for line in sys.stdin:
        line = line.strip()
        if line.startswith("Sink "):
            sink = line.split(" ")[1].strip("#")
        if line.startswith("Volume: "):
            volume = line.split("/")[1].strip(" %")
            if sink == target_sink:
                print(volume)
' "$sink")
