%% Traffic Light Controller Parameters
% File: params.m
% Description: Parameter definitions for Simulink traffic light model

%% Timing Parameters (in seconds)
AMBER_DURATION = 3;           % Duration of amber phase
PEDESTRIAN_CROSSING_TIME = 15; % Duration of pedestrian green phase  
MIN_GREEN_TIME = 10;          % Minimum green time for vehicles
BUTTON_DEBOUNCE_TIME = 1;     % Button debounce period

%% Signal Values
% Traffic Light States (enumeration values)
RED = 1;
YELLOW = 2; 
GREEN = 3;

% Pedestrian Light States
PED_RED = 0;
PED_GREEN = 1;

% Button States
BUTTON_RELEASED = 0;
BUTTON_PRESSED = 1;

%% Simulation Parameters
SIMULATION_TIME = 60;         % Total simulation time (seconds)
SAMPLE_TIME = 1;              % Fixed sample time (1 second)

%% Display parameters
fprintf('Traffic Light Parameters Loaded:\n');
fprintf('  Amber Duration: %d seconds\n', AMBER_DURATION);
fprintf('  Pedestrian Crossing: %d seconds\n', PEDESTRIAN_CROSSING_TIME);
fprintf('  Min Green Time: %d seconds\n', MIN_GREEN_TIME);
fprintf('  Sample Time: %d second\n', SAMPLE_TIME);