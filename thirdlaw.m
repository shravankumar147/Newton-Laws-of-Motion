function [ v2 ] = thirdlaw( ~,~,~ )
%UNTITLED4 Summary of this function goes here
%   Detailed explanation goes here
u = input('u:');
a = input('a:');
x = input('x:');
v2 = u^2 + 2*a*x;
end

