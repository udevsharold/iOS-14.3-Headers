/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:57 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/EKObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/EKIdentityProtocol.h>

@class NSString, NSPredicate, EKCalendar;

@interface EKSharee : EKObject <NSCopying, EKIdentityProtocol>

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,readonly) NSString * emailAddress; 
@property (nonatomic,readonly) NSString * phoneNumber; 
@property (assign,nonatomic) unsigned long long shareeStatus; 
@property (assign,nonatomic) unsigned long long shareeAccessLevel; 
@property (nonatomic,readonly) NSPredicate * contactPredicate; 
@property (nonatomic,readonly) NSString * UUID; 
@property (nonatomic,copy) NSString * address; 
@property (nonatomic,copy) NSString * firstName; 
@property (nonatomic,copy) NSString * lastName; 
@property (nonatomic,copy) NSString * externalID; 
@property (nonatomic,readonly) EKCalendar * owner; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)knownIdentityKeysForComparison;
+(Class)frozenClass;
+(id)shareeWithName:(id)arg1 url:(id)arg2 ;
+(id)_urlForEmailAddress:(id)arg1 andPhoneNumber:(id)arg2 ;
+(id)shareeWithName:(id)arg1 emailAddress:(id)arg2 ;
+(unsigned long long)_ekShareeStatusFromCalShareeStatus:(int)arg1 ;
+(int)_calShareeStatusFromEKShareeStatus:(unsigned long long)arg1 ;
+(id)shareeWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3 ;
+(unsigned long long)_ekShareeAccessLevelFromCalShareeAccessLevel:(int)arg1 ;
+(int)_calShareeAccessLevelFromEKShareeAccessLevel:(unsigned long long)arg1 ;
+(unsigned long long)statusEnumFromString:(id)arg1 ;
+(id)shareeWithName:(id)arg1 phoneNumber:(id)arg2 ;
+(id)shareeWithName:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3 externalID:(id)arg4 ;
+(id)statusStringFromEnum:(unsigned long long)arg1 ;
+(id)knownSingleValueKeysForComparison;
-(void)setExternalID:(NSString *)arg1 ;
-(void)setAddress:(NSString *)arg1 ;
-(void)setUUID:(NSString *)arg1 ;
-(void)setLastName:(NSString *)arg1 ;
-(void)setEmailAddress:(NSString *)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setFirstName:(NSString *)arg1 ;
-(NSString *)emailAddress;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)address;
-(NSString *)UUID;
-(NSString *)phoneNumber;
-(int)shareeStatusRaw;
-(void)setShareeStatusRaw:(int)arg1 ;
-(int)shareeAccessLevelRaw;
-(void)setShareeAccessLevelRaw:(int)arg1 ;
-(void)setDisplayName:(id)arg1 ;
-(unsigned long long)shareeStatus;
-(void)setPhoneNumber:(NSString *)arg1 ;
-(NSString *)description;
-(EKCalendar *)owner;
-(NSString *)externalID;
-(id)initWithName:(id)arg1 url:(id)arg2 ;
-(id)initWithName:(id)arg1 url:(id)arg2 externalID:(id)arg3 ;
-(void)setShareeAccessLevel:(unsigned long long)arg1 ;
-(unsigned long long)shareeAccessLevel;
-(NSString *)name;
-(id)URL;
-(NSString *)lastName;
-(NSPredicate *)contactPredicate;
-(NSString *)firstName;
-(void)setShareeStatus:(unsigned long long)arg1 ;
-(id)displayName;
@end

