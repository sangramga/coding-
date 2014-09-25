training = [];
group = [];
cd cannon
class = 1;
files = dir('*.jpg');
for i = 1:length(files)
    I = imread(files(i).name);
    if(ndims(I)==3)
        I = rgb2gray(I);
    end
    I = imresize(I,[200,200]);
    I = reshape(I,1,40000);
    I = im2double(I);
    training = [training ; I];
    group = [group;class];
end
cd ..
cd cup
class =0;
files = dir('*.jpg');
for i = 1:length(files)
    I = imread(files(i).name);
    if(ndims(I)==3)
        I = rgb2gray(I);
    end
    I = imresize(I,[200,200]);
    I = reshape(I,1,40000);
    I = im2double(I);
    training = [training ; I];
    group = [ group;class];
end
cd ..
cd lamp
class = 0;
files = dir('*.jpg');
for i = 1:length(files)
    I = imread(files(i).name);
    if(ndims(I)==3)
        I = rgb2gray(I);
    end
    I = imresize(I,[200,200]);
    I = reshape(I,1,40000);
    I = im2double(I);
    training = [training ; I];
    group = [group;class];
end
cd ..
cd lotus
class = 0;
files = dir('*.jpg');
for i = 1:length(files)
    I = imread(files(i).name);
    if(ndims(I)==3)
        I = rgb2gray(I);
    end
    I = imresize(I,[200,200]);
    I = reshape(I,1,40000);
    I = im2double(I);
    training = [training ; I];
    group = [group;class];
end
cd ..
cd panda
class = 0;
files = dir('*.jpg');
for i = 1:length(files)
    I = imread(files(i).name);
    if(ndims(I)==3)
        I = rgb2gray(I);
    end
    I = imresize(I,[200,200]);
    I = reshape(I,1,40000);
    I = im2double(I);
    training = [training ; I];
    group = [group;class];
end
cd ..