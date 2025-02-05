def currency_converter(amount, from_currency, to_currency):
    exchange_rates = {
        'USD': {'INR': 83.10, 'EUR': 0.92, 'JPY': 148.52},
        'INR': {'USD': 0.012, 'EUR': 0.011, 'JPY': 1.79},
        'EUR': {'USD': 1.09, 'INR': 90.23, 'JPY': 161.14},
        'JPY': {'USD': 0.0067, 'INR': 0.56, 'EUR': 0.0062}
    }
    if from_currency == to_currency:
        return amount
    elif from_currency in exchange_rates and to_currency in exchange_rates[from_currency]:
        rate = exchange_rates[from_currency][to_currency]
        return amount * rate
    else:
        return "Conversion not available"
amount = float(input("Enter the amount to convert: "))
from_currency = input("Enter the from currency (USD, INR, EUR, JPY): ").upper()
to_currency = input("Enter the to currency (USD, INR, EUR, JPY): ").upper()
result = currency_converter(amount, from_currency, to_currency)
if isinstance(result, str):
    print(result)
else:
    print(f"{amount} {from_currency} = {result:.2f} {to_currency}")
