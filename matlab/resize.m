cd cup
cups = dir('*.jpg');
Array = [ ];
for i = 1:30
    I = imread(cups(i).name);
    if(ndims(I)==3)
        I = rgb2gray(I);
    end
    I = im2double(I);
    I = imresize(I,[300,300]);
    Array  = [Array,reshape(I,90000,1)];    
end
cupCoeff = pca(Array);
 M = mean(Array ,2);
 Array1 = bsxfun(@minus,Array,M);
 for i = 1:30
     I = Array1(:,i);
     I = reshape(I,300,300);
     I = im2uint8(I);
     imwrite(I,cups(i).name);
 end
 cd ..
 cd cannon
cannons = dir('*.jpg');
Array = [ ];
for i = 1:30
    I = imread(cannons(i).name);
    if(ndims(I)==3)
        I = rgb2gray(I);
    end
    I = im2double(I);
    I = imresize(I,[300,300]);
    Array  = [Array,reshape(I,90000,1)];    
end
cannonCoeff = pca(Array);
 M = mean(Array ,2);
 Array1 = bsxfun(@minus,Array,M);
 for i = 1:30
     I = Array1(:,i);
     I = reshape(I,300,300);
     I = im2uint8(I);
     imwrite(I,cannons(i).name);
 end
 cd ..
 
cd lotus
lotuss = dir('*.jpg');
Array = [ ];
for i = 1:30
    I = imread(lotuss(i).name);
    if(ndims(I)==3)
        I = rgb2gray(I);
    end
    I = im2double(I);
    I = imresize(I,[300,300]);
    Array  = [Array,reshape(I,90000,1)];    
end
lotusCoeff = pca(Array);
 M = mean(Array ,2);
 Array1 = bsxfun(@minus,Array,M);
 for i = 1:30
     I = Array1(:,i);
     I = reshape(I,300,300);
     I = im2uint8(I);
     imwrite(I,lotuss(i).name);
 end
 cd ..
 
cd panda
pandas = dir('*.jpg');
Array = [ ];
for i = 1:30
    I = imread(pandas(i).name);
    if(ndims(I)==3)
        I = rgb2gray(I);
    end
    I = im2double(I);
    I = imresize(I,[300,300]);
    Array  = [Array,reshape(I,90000,1)];    
end
pandaCoeff = pca(Array);
 M = mean(Array ,2);
 Array1 = bsxfun(@minus,Array,M);
 for i = 1:30
     I = Array1(:,i);
     I = reshape(I,300,300);
     I = im2uint8(I);
     imwrite(I,pandas(i).name);
 end
 cd ..
 
cd lamp
lamps = dir('*.jpg');
Array = [ ];
for i = 1:30
    I = imread(lamps(i).name);
    if(ndims(I)==3)
        I = rgb2gray(I);
    end
    I = im2double(I);
    I = imresize(I,[300,300]);
    Array  = [Array,reshape(I,90000,1)];    
end
lampCoeff = pca(Array);
 M = mean(Array ,2);
 Array1 = bsxfun(@minus,Array,M);
 for i = 1:30
     I = Array1(:,i);
     I = reshape(I,300,300);
     I = im2uint8(I);
     imwrite(I,lamps(i).name);
 end
 cd ..
