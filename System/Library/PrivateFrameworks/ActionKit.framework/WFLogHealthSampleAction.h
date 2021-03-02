/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFAction.h>

@class NSDate;

@interface WFLogHealthSampleAction : WFAction {

	NSDate* _currentDate;

}

@property (nonatomic,retain) NSDate * currentDate;              //@synthesize currentDate=_currentDate - In the implementation block
-(id)appIdentifier;
-(NSDate *)currentDate;
-(void)setCurrentDate:(NSDate *)arg1 ;
-(void)initializeParameters;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(BOOL)setParameterState:(id)arg1 forKey:(id)arg2 ;
-(id)outputContentClasses;
-(id)accessResourcesToBeAuthorizedImplicitlyForUpdatedParameterState:(id)arg1 forParameter:(id)arg2 ;
-(id)parametersRequiringUserInputAlongsideParameter:(id)arg1 ;
-(void)wasAddedToWorkflow:(id)arg1 ;
-(void)wasRemovedFromWorkflow:(id)arg1 ;
-(void)resourceAvailabilityChanged;
-(void)handleWithCategoryType:(id)arg1 ;
-(void)handleWithQuantityType:(id)arg1 ;
-(id)dateForParameterValueWithKey:(id)arg1 error:(id*)arg2 ;
-(void)updateParameterStates;
-(void)forceUpdateSelectedUnit;
-(void)saveObject:(id)arg1 withObjectType:(id)arg2 item:(id)arg3 ;
@end
