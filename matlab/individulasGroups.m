indivCannon = [];
cd cannon
dirs = dir('*.jpg');
for i =1:length(dirs)
indivCannon = [indivCannon;1];
end
cd ..
indivCup = [];
cd cup/
dirs = dir('*.jpg');
for i =1:length(dirs)
indivCup = [indivCup;1];
end
cd ..
indivLamp = [];
cd lamp/
dirs = dir('*.jpg');
for i =1:length(dirs)
indivLamp = [indivLamp;1];
end
cd ..
indivLotus = [];
cd lotus/
dirs = dir('*.jpg');
for i =1:length(dirs)
indivLotus = [indivLotus;1];
end
cd ..
indivPanda = [];
cd panda/
dirs = dir('*.jpg');
for i =1:length(dirs)
indivPanda = [indivPanda;1];
end
cd ..
