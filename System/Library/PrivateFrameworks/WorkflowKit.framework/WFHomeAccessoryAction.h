/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFAction.h>
#import <libobjc.A.dylib/WFHomeManagerEventObserver.h>

@class HFTriggerActionSetsBuilder, NSString;

@interface WFHomeAccessoryAction : WFAction <WFHomeManagerEventObserver>

@property (nonatomic,readonly) HFTriggerActionSetsBuilder * triggerActionSetsBuilder; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)homeAccessoryActionWithTriggerActionSetsBuilder:(id)arg1 ;
+(id)homeAccessoryActionWithHome:(id)arg1 ;
-(void)dealloc;
-(void)homeManagerDidUpdateHomes:(id)arg1 ;
-(id)homeName;
-(id)localizedName;
-(void)initializeParameters;
-(void)runAsynchronouslyWithInput:(id)arg1 ;
-(id)localizedDescriptionSummary;
-(id)localizedAttribution;
-(HFTriggerActionSetsBuilder *)triggerActionSetsBuilder;
-(void)performHomeAccessoryAction;
-(id)parameterSummaryString;
-(void)localizedParameterSummaryWithCompletion:(/*^block*/id)arg1 ;
-(id)localizedSummaryText;
@end
