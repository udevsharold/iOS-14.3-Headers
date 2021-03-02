/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:46 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ScreenTimeCore/STUniquedManagedObject.h>
#import <libobjc.A.dylib/STUniquelySerializableManagedObject.h>

@class STCoreUser, NSString;

@interface STCoreOrganizationSettings : STUniquedManagedObject <STUniquelySerializableManagedObject>

@property (nonatomic,retain) STCoreUser * user; 
@property (nonatomic,copy) NSString * passcode; 
@property (assign,nonatomic) BOOL allLimitsEnabled; 
@property (assign,nonatomic) long long communicationPolicy; 
@property (assign,nonatomic) long long communicationWhileLimitedPolicy; 
@property (assign,nonatomic) long long contactManagementState; 
@property (assign,nonatomic) BOOL needsToSetPasscode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)fetchResultsRequestsForChangesToOrganizationSettingsForUserWithDSID:(id)arg1 ;
+(id)fetchOrCreateWithDictionaryRepresentation:(id)arg1 inContext:(id)arg2 error:(id*)arg3 ;
-(BOOL)updateWithDictionaryRepresentation:(id)arg1 ;
-(NSString *)description;
-(id)dictionaryRepresentation;
-(id)redactedDescription;
-(void)_changeAppLimitsFromAskToWarn:(id)arg1 ;
@end
