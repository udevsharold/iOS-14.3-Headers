/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:52 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceShortcutClient/WFDatabaseObjectDescriptor.h>

@class WFWorkflowReference, NSString, NSDate;

@interface WFWorkflowRunEvent : WFDatabaseObjectDescriptor {

	WFWorkflowReference* _workflow;
	NSString* _source;
	NSDate* _date;
	NSString* _triggerID;
	long long _outcome;

}

@property (readonly,nonatomic) NSString * displayName; 
@property (nonatomic,readonly) WFWorkflowReference * workflow;              //@synthesize workflow=_workflow - In the implementation block
@property (nonatomic,readonly) NSString * source;                           //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) NSDate * date;                               //@synthesize date=_date - In the implementation block
@property (nonatomic,copy,readonly) NSString * triggerID;                   //@synthesize triggerID=_triggerID - In the implementation block
@property (nonatomic,readonly) long long outcome;                           //@synthesize outcome=_outcome - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)displayName;
-(NSDate *)date;
-(long long)outcome;
-(id)initWithCoder:(id)arg1 ;
-(WFWorkflowReference *)workflow;
-(NSString *)source;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)triggerID;
-(id)initWithIdentifier:(id)arg1 workflow:(id)arg2 source:(id)arg3 date:(id)arg4 triggerID:(id)arg5 outcome:(long long)arg6 ;
@end

