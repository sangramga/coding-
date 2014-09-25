groupPnda = [];
cd cannon
dirs = dir('*.jpg');
for i =1:length(dirs)
groupPnda = [groupPnda;0];
end
cd ..
cd cup/
dirs = dir('*.jpg');
for i =1:length(dirs)
groupPnda = [groupPnda;0];
end
cd ..
cd lamp/
dirs = dir('*.jpg');
for i =1:length(dirs)
groupPnda = [groupPnda;0];
end
cd ..
cd lotus/
dirs = dir('*.jpg');
for i =1:length(dirs)
groupPnda = [groupPnda;0];
end
cd ..
cd panda/
dirs = dir('*.jpg');
for i =1:length(dirs)
groupPnda = [groupPnda;1];
end
cd ..