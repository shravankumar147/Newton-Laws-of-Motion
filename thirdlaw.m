function [ v2 ] = thirdlaw( ~,~,~ )
%Newton Third Law of Motion:
%   Detailed explanation goes here
u = input('u:');
a = input('a:');
x = input('x:');
v2 = u^2 + 2*a*x;
end

