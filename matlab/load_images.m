function [Images,w,h] = load_images(filelist,downscale_f)
%LOAD_IMAGES Load a set of images listed in a file.
%
%            [IMGS,W,H] = LOAD_IMAGES(FILELIST) Treat each line of
%            the file named FILELIST as the filename of a PGM image,
%            and load each image as one column of the return array
%            IMGS.
%
%            LOAD_IMAGES(FILELIST,DOWNSCALE_F) Do the same thing,
%            but downscale each image's width and height by a factor
%            of DOWNSCALE_F.  Useful if the images are too big to be
%            loaded into memory all at once.

% Matthew Dailey 2000
  
  if nargin < 1 | nargin > 2
    error('usage: load_images(filelist[,downscale_f]');
  end;
  if nargin == 1
    downscale_f = 1.0;
  end;
  Images = []; old_w = 0; old_h = 0; w=0; h=0;

  % Open input file

  numimgs = linecount(filelist);
  fid = fopen(filelist,'r');
  if fid < 0 | numimgs < 1
    error(['Cannot get list of images from file "' filelist, '"']);
  end;

  % Get the images

  for i = 1:numimgs
    imgname = fgetl(fid);
    if ~isstr(imgname)            % EOF is not a string
      break;                      % Exit from loop on EOF
    end;
    fprintf(1,'loading PGM file %s\n',imgname);
    Img = readpgm(imgname);       % Read this image as a 2D array
    if i==1                       % If this is first image, figure things out
      old_w = size(Img,2);        %   - like sizes of the downscaled images
      old_h = size(Img,1);
      if downscale_f <= 1.0
	w = old_w; h = old_h;
      else
	w = round(old_w/downscale_f); h = round(old_h/downscale_f);
      end;
      Images = zeros(w*h,numimgs);   % - preallocate size of the return matrix
    end;
    if downscale_f > 1.0
      Img = im_resize(Img,w,h);      % downscale using bicubic spline interp
    end;
    Images(1:w*h,i) = reshape(Img',w*h,1);   % Make a column vector
  end;
  fclose(fid);                    % Close the filelist when done

  fprintf(1,'Read %d images.\n',numimgs);
