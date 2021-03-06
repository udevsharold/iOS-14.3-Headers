/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WFHandleIntentAction.h>

@class INIntent, NSString, INIntentExecutionInfo;

@interface WFHandleDonatedIntentAction : WFHandleIntentAction {

	BOOL _forceExecutionOnPhone;
	INIntent* _intent;
	NSString* _groupIdentifier;
	NSString* _title;
	NSString* _subtitle;
	INIntentExecutionInfo* _resolvedExecutionInfo;

}

@property (nonatomic,readonly) BOOL forceExecutionOnPhone;                                 //@synthesize forceExecutionOnPhone=_forceExecutionOnPhone - In the implementation block
@property (nonatomic,readonly) NSString * groupIdentifier;                                 //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * title;                                           //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                                        //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) INIntentExecutionInfo * resolvedExecutionInfo;              //@synthesize resolvedExecutionInfo=_resolvedExecutionInfo - In the implementation block
@property (nonatomic,retain) INIntent * intent;                                            //@synthesize intent=_intent - In the implementation block
+(id)intentActionWithShortcut:(id)arg1 forceExecutionOnPhone:(BOOL)arg2 groupIdentifier:(id)arg3 error:(id*)arg4 ;
-(long long)intentCategory;
-(NSString *)groupIdentifier;
-(id)localizedSubtitle;
-(id)appIdentifier;
-(id)initWithIntent:(id)arg1 ;
-(id)intentDescription;
-(NSString *)subtitle;
-(id)slots;
-(INIntent *)intent;
-(id)name;
-(id)serializedParameters;
-(id)localizedName;
-(void)setIntent:(INIntent *)arg1 ;
-(NSString *)title;
-(id)metricsIdentifier;
-(void)continueInAppWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)initializeParameters;
-(id)localizedDescriptionSummary;
-(id)initWithIntent:(id)arg1 forceExecutionOnPhone:(BOOL)arg2 ;
-(id)initWithInteraction:(id)arg1 forceExecutionOnPhone:(BOOL)arg2 ;
-(id)initWithIdentifier:(id)arg1 definition:(id)arg2 serializedParameters:(id)arg3 ;
-(id)generatedIntentWithIdentifier:(id)arg1 input:(id)arg2 processedParameters:(id)arg3 error:(id*)arg4 ;
-(id)createResourceManager;
-(id)executorWithIntent:(id)arg1 groupIdentifier:(id)arg2 ;
-(id)localizedKeyParameterDisplayName;
-(BOOL)forceExecutionOnPhone;
-(INIntentExecutionInfo *)resolvedExecutionInfo;
@end

