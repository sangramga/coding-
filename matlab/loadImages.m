function [ Array ] = loadImages()
dirs = dir('*.jpg');
Array = [ ];
for i = 1:length(dirs)
    I = imread(dirs(i).name);
    if(ndims(I)==3)
        I = rgb2gray(I);
    end
    I = im2double(I);
    I = imresize(I,[200,200]);
    Array  = [Array;reshape(I,1,40000)];    
end

end

