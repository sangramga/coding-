
cd cup
cups = dir('*.jpg');
Array = [ ];
for i = 1:length(cups)
    I = imread(cups(i).name);
    if(ndims(I)==3)
        I = rgb2gray(I);
    end
    I = im2double(I);
    I = imresize(I,[200,200]);
    Array  = [Array;reshape(I,1,40000)];    
end
 [cupCoeff, score, LATENT, TSQUARED, EXPLAINED, MU] = pca(Array);
recons = score * cupCoeff';
mkdir cupReconstructed
cd cupReconstructed
for i = 1:length(cups)
    I = recons(i,:);
    I = reshape(I,200,200);
    imwrite(I,cups(i).name);
end
 cd ..
 % taking defferent number of eigen vectors for reconstruction
val = [];
for i = 10:55
    score1 = score(:,1:i);
    cupCoeff1 = cupCoeff(:,1:i);
    recons1 = score1 * cupCoeff1';
    diff = Array - recons1;
    val = [val;norm(diff)];
    i = i+5;
end
plot(val)