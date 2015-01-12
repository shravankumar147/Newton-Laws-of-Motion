function [ v ] = firstlaw( varargin )
%Newton first law of motion. Summary of this function goes here
%   Detailed explanation goes here
% firstlaw
% u:4
% a:5
% t:6
% Your speed after 6 sec is 34 m/s
u = input('u:');
a = input('a:');
t = input('t:');
v = u + a*t;
fprintf('Your speed after %d sec is %d m/s\n',t,v)
end

