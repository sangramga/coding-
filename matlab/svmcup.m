val = 44
individual = 57
total = 265
individualCup = int32(0.7*individual)+44

totalCup = int32(0.7*(total - individual))
selectedProjections = []
groupTrain = []
selectedProjectionsTest = []
for i = val:individualCup
    selectedProjections = [ selectedProjections;score(i,:)]
    groupTrain = [groupTrain;1]
end
for i = individual+1:57
    selectedProjectionsTest =[ selectedProjectionsTest ;score(i,:)]
end
val = val +individual
totalCup = totalCup + val
for i= val:totalCup
    selectedProjections = [ selectedProjections;score(i,:)]
    groupTrain = [groupTrain;0]
end
for i = totalCup+1:265
    selectedProjectionsTest =[ selectedProjectionsTest ;score(i,:)]
end
    
mysvm =  svmtrain(selectedProjections,groupTrain);
groupResult = svmclassify(mysvm,selctedProjectionsTest);