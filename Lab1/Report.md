# ITI8520 Lab 1: Extended Double Pelican Crossing System

**Author:** [Adetunji Adeyimika]  
**Date:** [06.05.2025]  
**Project:** Model-driven development of traffic light control system

## Summary

This project demonstrates model-based systems engineering (MBSE) principles applied to an Extended Double Pelican Crossing traffic light control system. The system manages pedestrian crossings on a dual carriageway with public transport priority features.

## System Overview

The Extended Pelican Crossing Controller manages:
- Traffic lights for vehicles and pedestrians on both carriageways
- Public transport priority using radar and inductive loop sensors
- Safety interlocks preventing conflicting signals
- Automated dual carriageway coordination

## Artifacts Created

### 1. Vision and Context
- **Vision Statement**: Comprehensive problem definition and safety analysis
- **Context Diagram**: System boundary and external actors/interfaces

### 2. Requirements Hierarchy
- **System Requirements (SR-xxx)**: 6 high-level functional and safety requirements
- **Software High-Level Requirements (HLR-xxx)**: 4 software-specific requirements
- **Software Low-Level Requirements (LLR-xxx)**: 4 detailed implementation requirements
- **Traceability**: Complete derive relationships SR→HLR→LLR

### 3. Architecture Design
- **System BDD**: Hardware/software subsystem decomposition
- **System IBD**: Internal architecture showing component interactions
- **Component allocation**: Clear separation of hardware and software elements

### 4. Behavioral Modeling
- **Activity Diagram**: Pedestrian crossing sequence workflow
- **State Machine**: Traffic light controller state transitions
- **Decision points**: Safety validation and error handling

### 5. Parametric Modeling
- **Radar Range Equation**: Physics-based model for vehicle detection
- **Signal-to-Noise Ratio**: Target detection threshold calculation
- **Parameter flow**: Connected constraint blocks showing radar operation

### 6. Verification
- **Test Cases**: 5 test cases covering functional and safety requirements
- **Verification relationships**: Test cases linked to requirements via «verify»

## Design Decisions

### Safety-First Approach
- Implemented safety interlocks as Critical priority requirements
- Added multiple validation points in crossing sequence
- Fail-safe default states (green vehicles, red pedestrians)

### Public Transport Integration
- Dual sensor approach (radar + inductive loop) for reliability
- Configurable timing parameters (Ttp, Tpd, Tcw)
- Priority without compromising pedestrian safety

### Modular Architecture
- Clear separation between hardware interfaces and control logic
- Independent safety monitor for watchdog functionality
- Scalable sensor processing for future enhancements

## Key Requirements Traceability

| System Requirement | Derived HLR | Derived LLR | Verified by Test Case |
|-------------------|-------------|-------------|----------------------|
| SR-F-001: Basic Traffic Control | HLR-TLC-001 | LLR-LC-001 | TC-003 |
| SR-F-003: Crossing Initiation | HLR-IP-001, HLR-SC-001 | LLR-BM-001, LLR-BM-002 | TC-001 |
| SR-S-001: Safety Interlocks | HLR-TLC-003 | LLR-SI-001 | TC-002 |
| SR-F-004: Dual Coordination | HLR-SC-002 | - | TC-004 |
| SR-F-005: PT Priority | HLR-SC-003 | - | TC-005 |

## Challenges and Solutions

### Challenge 1: Complex State Management
**Problem**: Managing multiple concurrent timers and states
**Solution**: Hierarchical state machine with clear state transitions and timeouts

### Challenge 2: Safety Requirements
**Problem**: Preventing conflicting green signals
**Solution**: Lookup table-based safety interlocks with hardware backup

### Challenge 3: Public Transport Priority
**Problem**: Balancing PT priority with pedestrian safety
**Solution**: Priority scheduling that respects ongoing crossing sequences

## Model Statistics

- **Total Requirements**: 15 (6 System + 4 HLR + 5 LLR)
- **Test Cases**: 5 covering all critical functionality
- **Architecture Components**: 6 main subsystems
- **Behavioral Models**: 2 (Activity + State Machine)
- **Parametric Models**: 2 constraint blocks with 11 parameters

## Lessons Learned

1. **Early safety analysis** is crucial for safety-critical systems
2. **Traceability relationships** must be maintained throughout development
3. **Parametric modeling** effectively captures physics-based constraints
4. **Model-based approach** improves consistency and maintainability

