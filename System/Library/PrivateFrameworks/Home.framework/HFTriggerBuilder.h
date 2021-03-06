/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemBuilder.h>

@protocol HFTriggerBuilderContextProviding;
@class NSString, HFTriggerActionSetsBuilder, HFConditionCollection, HFMutableSetDiff, HMTrigger, NSArray, HFDurationEventBuilder;

@interface HFTriggerBuilder : HFItemBuilder {

	BOOL _enabled;
	NSString* _name;
	NSString* _displayName;
	HFTriggerActionSetsBuilder* _triggerActionSets;
	id<HFTriggerBuilderContextProviding> _context;
	HFConditionCollection* _conditionCollection;
	HFMutableSetDiff* _endEventBuildersDiff;

}

@property (nonatomic,retain) HFTriggerActionSetsBuilder * triggerActionSets;                                      //@synthesize triggerActionSets=_triggerActionSets - In the implementation block
@property (nonatomic,retain) HFMutableSetDiff * endEventBuildersDiff;                                             //@synthesize endEventBuildersDiff=_endEventBuildersDiff - In the implementation block
@property (nonatomic,retain) id<HFTriggerBuilderContextProviding> context;                                        //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) HFConditionCollection * conditionCollection;                                         //@synthesize conditionCollection=_conditionCollection - In the implementation block
@property (nonatomic,readonly) BOOL supportsConditions; 
@property (nonatomic,readonly) BOOL supportsEndEvents; 
@property (nonatomic,readonly) HMTrigger * trigger; 
@property (nonatomic,copy) NSString * name;                                                                       //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                                                //@synthesize displayName=_displayName - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                                        //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) NSArray * endEventBuilders; 
@property (nonatomic,readonly) BOOL requiresConfirmationToRun; 
@property (nonatomic,readonly) BOOL secureActionsRequireConfirmationToRun; 
@property (nonatomic,readonly) BOOL requiresLocationServicesAuthorization; 
@property (nonatomic,readonly) BOOL requiresHomeHub; 
@property (nonatomic,readonly) BOOL requiresUpdatedHomeHub; 
@property (nonatomic,readonly) BOOL requiresFMFDeviceToRun; 
@property (getter=areActionsAffectedByEndEvents,nonatomic,readonly) BOOL actionsAffectedByEndEvents; 
@property (nonatomic,readonly) BOOL isShortcutOwned; 
@property (nonatomic,readonly) HFDurationEventBuilder * designatedDurationEventBuilder; 
+(Class)homeKitRepresentationClass;
+(id)triggerBuilderForTrigger:(id)arg1 inHome:(id)arg2 context:(id)arg3 ;
-(HMTrigger *)trigger;
-(void)setName:(NSString *)arg1 ;
-(id)_updateName;
-(void)setTrigger:(HMTrigger *)arg1 ;
-(BOOL)enabled;
-(void)setEndEvent:(id)arg1 ;
-(id)initWithExistingObject:(id)arg1 inHome:(id)arg2 ;
-(void)setTriggerActionSets:(HFTriggerActionSetsBuilder *)arg1 ;
-(void)setConditionCollection:(HFConditionCollection *)arg1 ;
-(void)setEndEventBuildersDiff:(HFMutableSetDiff *)arg1 ;
-(HFMutableSetDiff *)endEventBuildersDiff;
-(void)removeEndEventBuilder:(id)arg1 ;
-(void)removeAllEndEventBuilders;
-(void)addEndEventBuilder:(id)arg1 ;
-(id)_deleteTrigger:(id)arg1 fromHome:(id)arg2 ;
-(id)_commitAddTriggerToHome:(id)arg1 ;
-(id)_updateAnonymousActionSet;
-(id)_updateEnabledState;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)initWithHome:(id)arg1 ;
-(BOOL)areActionsAffectedByEndEvents;
-(void)setContext:(id<HFTriggerBuilderContextProviding>)arg1 ;
-(id)replaceCurrentTriggerWithTrigger:(id)arg1 ;
-(NSArray *)endEventBuilders;
-(HFConditionCollection *)conditionCollection;
-(HFTriggerActionSetsBuilder *)triggerActionSets;
-(BOOL)requiresConfirmationToRun;
-(BOOL)secureActionsRequireConfirmationToRun;
-(BOOL)requiresLocationServicesAuthorization;
-(BOOL)requiresFMFDeviceToRun;
-(NSString *)name;
-(BOOL)isShortcutOwned;
-(id)_performValidation;
-(id<HFTriggerBuilderContextProviding>)context;
-(void)removeServiceLikeItem:(id)arg1 ;
-(BOOL)markTriggerAsHomeAppCreated;
-(BOOL)supportsConditions;
-(BOOL)supportsEndEvents;
-(id)commitCreateTrigger;
-(id)commitEditTrigger;
-(id)naturalLanguageNameOfType:(unsigned long long)arg1 ;
-(void)setMarkTriggerAsHomeAppCreated:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithExistingObject:(id)arg1 inHome:(id)arg2 context:(id)arg3 ;
-(id)deleteTrigger;
-(id)commitItem;
-(id)initWithHome:(id)arg1 context:(id)arg2 ;
-(NSString *)displayName;
-(id)_updateActionSets;
-(id)_updateConditions;
-(id)_updateEndEvents;
-(id)_uniquelyRenameTrigger:(id)arg1 pendingReplaceByNewTrigger:(id)arg2 ;
-(void)_didReplaceBackingTrigger;
-(void)updateEndEventBuilder:(id)arg1 ;
-(BOOL)requiresHomeHub;
-(BOOL)requiresUpdatedHomeHub;
-(HFDurationEventBuilder *)designatedDurationEventBuilder;
-(id)validateTrigger;
@end

