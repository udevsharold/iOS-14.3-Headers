/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFTriggerBuilder.h>

@class HFConcreteTimeTriggerBuilder, NSArray, NSTimeZone;

@interface HFTimerTriggerBuilder : HFTriggerBuilder {

	unsigned long long _preferredHomeKitObjectType;
	HFConcreteTimeTriggerBuilder* _concreteTriggerBuilder;

}

@property (nonatomic,retain) HFConcreteTimeTriggerBuilder * concreteTriggerBuilder;              //@synthesize concreteTriggerBuilder=_concreteTriggerBuilder - In the implementation block
@property (nonatomic,retain) HFEventBuilder*<HFTimeEventBuilder> eventBuilder; 
@property (nonatomic,copy) NSArray * recurrences; 
@property (nonatomic,copy) NSTimeZone * timeZone; 
@property (assign,nonatomic) unsigned long long preferredHomeKitObjectType;                      //@synthesize preferredHomeKitObjectType=_preferredHomeKitObjectType - In the implementation block
-(NSTimeZone *)timeZone;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(void)setName:(id)arg1 ;
-(void)_createConcreteTriggerBuilder;
-(HFConcreteTimeTriggerBuilder *)concreteTriggerBuilder;
-(void)setConcreteTriggerBuilder:(HFConcreteTimeTriggerBuilder *)arg1 ;
-(BOOL)_supportsEventBasedTimeTriggers;
-(BOOL)_currentStateRequiresEventBasedTimeTriggers;
-(void)setEventBuilder:(HFEventBuilder*<HFTimeEventBuilder>)arg1 ;
-(unsigned long long)preferredHomeKitObjectType;
-(void)setPreferredHomeKitObjectType:(unsigned long long)arg1 ;
-(id)_performValidation;
-(BOOL)supportsConditions;
-(BOOL)supportsEndEvents;
-(id)commitCreateTrigger;
-(id)commitEditTrigger;
-(id)naturalLanguageNameOfType:(unsigned long long)arg1 ;
-(void)setRecurrences:(NSArray *)arg1 ;
-(NSArray *)recurrences;
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithExistingObject:(id)arg1 inHome:(id)arg2 context:(id)arg3 ;
-(HFEventBuilder*<HFTimeEventBuilder>)eventBuilder;
@end
