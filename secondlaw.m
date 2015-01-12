function [ x ] = secondlaw( ~,~,~ )
%Newton Second Law of Motion :
%   Detailed explanation goes here
u = input('u:');
a = input('a:');
t = input('t:');
x = u*t + 0.5*a*t.^2;
end

