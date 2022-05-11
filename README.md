---
# Dero-Testnet-Baccarat
Ui for Dero Testnet Baccarat Smart Contract.

![logo_optimized](https://user-images.githubusercontent.com/84689659/165416164-7e63fc07-e2ef-4391-9e6b-ed8eeaa6d2af.png)

Written in C++/Qt. Used Qt 5.12.8 to build the Ui. This app is made to play Dero Baccarat on **Dero StarGate Testnet**. 

The smart contract is a simple version of the casino game Baccarat. It uses a _Dero Testnet token_ called Chips for betting. Users can trade _Testnet Dero_ for Chips, & Chips can also be converted back into _Testnet Dero_. For more info on the game mechanics read the menu when the app starts, you can also refer to the game smart contract. Plese report any issues found, thanks for testing!

- Dero Baccarat Testnet Contract: [8817f03755a562cc1f34c6e90389ef9cc416a32d6084c0ebb4b245bc76da5c9d](https://testnetexplorer.derohe.com/tx/8817f03755a562cc1f34c6e90389ef9cc416a32d6084c0ebb4b245bc76da5c9d)

- Chips Token Testnet Contract: [a30c6602a791fae5464b974ca268e3720c2bae870d20804a8694b0f0917b8bce](https://testnetexplorer.derohe.com/tx/a30c6602a791fae5464b974ca268e3720c2bae870d20804a8694b0f0917b8bce)

![image](https://user-images.githubusercontent.com/84689659/167892065-c6f07733-5d66-42d1-88fa-e44ef392af0d.png)
### Donations
- **Dero Address**: dero1qyr8yjnu6cl2c5yqkls0hmxe6rry77kn24nmc5fje6hm9jltyvdd5qq4hn5pn

![DeroDonations](https://user-images.githubusercontent.com/84689659/165414903-44164e7e-4277-44f8-b1fe-8d139f559db1.jpg)


## Requirements to play
To be able to play you will need to have a synced **Dero Testnet daemon** running and a registered **Dero Testnet wallet**.

For more info on how to set up Dero Testnet you can read their documentation [here](https://docs.dero.io/rtd_pages/basic_deploysc.html#setting-up-a-testnet-environment)

## Build

- ### Linux

**Install dependencies**
```
sudo apt update
sudo apt install build-essential qt5-qmake curl libcurl4-openssl-dev
sudo apt install --no-install-recommends qtbase5-dev qttools5-dev libqt5svg5-dev
```

**Download repo & build**
```
git clone https://github.com/SixofClubsss/Dero-Testnet-Baccarat.git
cd Dero-Testnet-Baccarat/Testnet-Baccarat
qmake
make
```

**Start app**
```
./Testnet-Baccarat
```

#
![MenuScreen](https://user-images.githubusercontent.com/84689659/167893273-bf295531-145b-49c7-a9f5-53a80c997e3a.jpg)
#
