Array = [];
cd cup
B= loading();
Array = [Array; B];
cd ..
cd cannon
B= loading();
Array = [Array; B];
cd ..
cd lamp
B= loading();
Array = [Array; B];
cd ..
cd lotus
B= loading();
Array = [Array; B];
cd ..
cd panda
B= loading();
Array = [Array; B];
cd ..
[coeff, score, LATENT, TSQUARED, EXPLAINED, MU] = pca(Array);
val = [];

for i = 10:265
    score1 = score(:,1:i);
    coeff1 = coeff(:,1:i);
    recons1 = score1 * coeff1';
    for i =1:265
        recons1(i,:) = recons1(i,:) + MU; 
    end
    diff = Array - recons1;
    val = [val;norm(diff)];
    i = i+5;
end
plot(val)