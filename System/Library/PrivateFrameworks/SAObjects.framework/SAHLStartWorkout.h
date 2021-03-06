/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:29 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class SAHLWorkoutGoal, SAHLWorkoutType, NSString;

@interface SAHLStartWorkout : SADomainCommand

@property (assign,nonatomic) BOOL isOpenGoal; 
@property (assign,nonatomic) BOOL skipActivitySetup; 
@property (nonatomic,retain) SAHLWorkoutGoal * workoutGoal; 
@property (nonatomic,retain) SAHLWorkoutType * workoutType; 
@property (nonatomic,copy) NSString * workoutUserMode; 
+(id)startWorkout;
+(id)startWorkoutWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SAHLWorkoutType *)workoutType;
-(BOOL)isOpenGoal;
-(SAHLWorkoutGoal *)workoutGoal;
-(void)setIsOpenGoal:(BOOL)arg1 ;
-(BOOL)skipActivitySetup;
-(void)setSkipActivitySetup:(BOOL)arg1 ;
-(void)setWorkoutGoal:(SAHLWorkoutGoal *)arg1 ;
-(NSString *)workoutUserMode;
-(void)setWorkoutUserMode:(NSString *)arg1 ;
-(void)setWorkoutType:(SAHLWorkoutType *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end

