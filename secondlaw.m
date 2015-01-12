function [ x ] = secondlaw( ~,~,~ )
%UNTITLED3 Summary of this function goes here
%   Detailed explanation goes here
u = input('u:');
a = input('a:');
t = input('t:');
x = u*t + 0.5*a*t.^2;
end

