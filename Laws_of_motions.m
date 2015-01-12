%% Newton Law's of Motion
%Newton first law of motion :
%
%%
% $v = u + at$
%Newton first law of motion :
%%
% $x = ut + \frac{1}{2}at^2$

%Newton first law of motion :
%%
% $v^2 = u^2+2ax$ 


%%
mynumber = input('Enter a number:');

switch mynumber
    case 1
        disp('Newton first law of motion');
        v=firstlaw;
        display(v);
       
    case 2
        disp('Newton second law of motion');
        x = secondlaw;
        display(x);
    otherwise
        disp('Newton third law of motion');
        v2 = thirdlaw;   
end
