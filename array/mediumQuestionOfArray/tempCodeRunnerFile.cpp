trix(matrix, rows, cols);
cout << "\nModified Matrix:\n";
for (const auto& it : matrix)
{
    for (const auto& ele : it)
    {
        cout << ele << " ";
    }
    cout << "\n";
}
