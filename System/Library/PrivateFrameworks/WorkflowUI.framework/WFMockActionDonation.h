/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:15 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/VCActionDonation.h>

@class NSString, NSDate, INShortcut, NSData;

@interface WFMockActionDonation : NSObject <VCActionDonation> {

	NSString* _sourceAppIdentifier;
	NSString* _title;
	NSString* _subtitle;
	NSString* _sourceAppIdentifierForLaunching;
	id _uniqueProperty;
	NSData* _actionData;

}

@property (nonatomic,copy,readonly) NSData * actionData;                                     //@synthesize actionData=_actionData - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSDate * date; 
@property (nonatomic,copy,readonly) NSString * sourceAppIdentifier;                          //@synthesize sourceAppIdentifier=_sourceAppIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * sourceAppIdentifierForDisplay; 
@property (nonatomic,copy,readonly) NSString * sourceAppIdentifierForLaunching;              //@synthesize sourceAppIdentifierForLaunching=_sourceAppIdentifierForLaunching - In the implementation block
@property (nonatomic,readonly) NSString * title;                                             //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * subtitle;                                          //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * fullDescription; 
@property (nonatomic,copy,readonly) NSString * suggestedPhrase; 
@property (nonatomic,readonly) id uniqueProperty;                                            //@synthesize uniqueProperty=_uniqueProperty - In the implementation block
@property (nonatomic,readonly) INShortcut * shortcut; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)fullDescription;
-(NSString *)subtitle;
-(NSData *)actionData;
-(NSDate *)date;
-(NSString *)identifier;
-(INShortcut *)shortcut;
-(NSString *)sourceAppIdentifierForDisplay;
-(NSString *)sourceAppIdentifierForLaunching;
-(NSString *)suggestedPhrase;
-(id)uniqueProperty;
-(NSString *)sourceAppIdentifier;
-(NSString *)title;
-(id)initWithBundleIdentifier:(id)arg1 title:(id)arg2 subtitle:(id)arg3 actionData:(id)arg4 ;
@end
