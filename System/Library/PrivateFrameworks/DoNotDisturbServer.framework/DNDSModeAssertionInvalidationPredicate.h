/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DoNotDisturbServer/DoNotDisturbServer-Structs.h>
#import <Foundation/NSPredicate.h>

@interface DNDSModeAssertionInvalidationPredicate : NSPredicate

@property (nonatomic,readonly) unsigned long long predicateType; 
+(id)predicateForAnyAssertion;
+(id)predicateForAssertionClientIdentifiers:(id)arg1 ;
+(id)predicateForAssertionsTakenBeforeDate:(id)arg1 ;
+(id)predicateForAssertionUUIDs:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)predicateType;
-(BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2 ;
-(id)_init;
@end
