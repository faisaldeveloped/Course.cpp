    short int days, hours, minutes, seconds;

    cout << "Please enter days:" << endl;
    cin >> days;

    cout << "Please enter hours:" << endl;
    cin >> hours;

    cout << "Please enter minutes:" << endl;
    cin >> minutes;

    cout << "Please enter seconds:" << endl;
    cin >> seconds;

    short int TotalSeconds = (days * 24 * 60 * 60) + (hours * 60 * 60) + (minutes * 60) + seconds;

    cout << "Total: " << TotalSeconds << " Seconds." << endl;