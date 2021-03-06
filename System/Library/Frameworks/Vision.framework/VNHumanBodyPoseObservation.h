/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/VNRecognizedPointsObservation.h>

@class NSArray;

@interface VNHumanBodyPoseObservation : VNRecognizedPointsObservation

@property (copy,readonly) NSArray * availableJointNames; 
@property (copy,readonly) NSArray * availableJointsGroupNames; 
-(NSArray *)availableJointNames;
-(NSArray *)availableJointsGroupNames;
-(id)recognizedPointForJointName:(id)arg1 error:(id*)arg2 ;
-(id)recognizedPointsForJointsGroupName:(id)arg1 error:(id*)arg2 ;
@end

