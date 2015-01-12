function [ v ] = firstlaw( ~,~,~ )
%Newton first law of motion. Summary of this function goes here
%   Detailed explanation goes here
u = input('u:');
a = input('a:');
t = input('t:');
v = u + a*t;
fprintf('Your speed after %d sec is %d m/s\n',t,v)
end

