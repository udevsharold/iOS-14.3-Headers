/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:51 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WFTrigger : NSObject <NSSecureCoding, NSCopying>
+(id)powerLogEventKindForTrigger:(id)arg1 ;
+(id)onIcon;
+(id)onLabel;
+(id)offLabel;
+(id)offIcon;
+(id)triggerTypeIcon;
+(BOOL)supportsSecureCoding;
+(id)localizedDisplayName;
+(BOOL)isUserInitiated;
+(BOOL)isSupportedOnThisDevice;
+(BOOL)isAllowedToRunAutomatically;
+(id)localizedDisplayExplanation;
+(id)triggerWithSerializedData:(id)arg1 ;
-(id)contextStoreKeyPathForCurrentState;
-(id)contextStorePredicate;
-(unsigned)contextStoreQualityOfService;
-(BOOL)contextStoreRegistrationIsForWatch;
-(BOOL)shouldFireTriggerWithEventInfo:(id)arg1 error:(out id*)arg2 ;
-(BOOL)requiresEventInfoAsInput;
-(Class)viewControllerClassForConfiguration;
-(id)serializedData;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)configureWithConfiguration:(id)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)localizedDescriptionWithConfigurationSummary;
-(id)localizedPastTenseDescription;
-(BOOL)hasValidConfiguration;
@end
