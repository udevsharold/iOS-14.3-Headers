/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/ClassKit.framework/ClassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassKit/ClassKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLSPerson, NSString, NSDictionary;

@interface CLSCurrentUser : NSObject <NSCopying, NSSecureCoding> {

	BOOL _hasDataSeparatedAccount;
	BOOL _hasMatchingPersona;
	BOOL _hasEDUAccount;
	BOOL _organizationProgressTrackingAllowed;
	int _devMode;
	int _rosterServiceAuthenticationState;
	int _handoutServiceAuthenticationState;
	CLSPerson* _person;
	NSString* _personaUniqueString;
	NSString* _clientPersonaUniqueString;
	NSString* _organizationName;
	long long _catalogEnvironment;
	unsigned long long _roles;
	NSDictionary* _locationIDsByAXMRoleType;

}

@property (assign,nonatomic) int devMode;                                           //@synthesize devMode=_devMode - In the implementation block
@property (nonatomic,retain) CLSPerson * person;                                    //@synthesize person=_person - In the implementation block
@property (nonatomic,copy) NSString * personaUniqueString;                          //@synthesize personaUniqueString=_personaUniqueString - In the implementation block
@property (nonatomic,copy) NSString * clientPersonaUniqueString;                    //@synthesize clientPersonaUniqueString=_clientPersonaUniqueString - In the implementation block
@property (assign,nonatomic) BOOL hasDataSeparatedAccount;                          //@synthesize hasDataSeparatedAccount=_hasDataSeparatedAccount - In the implementation block
@property (assign,nonatomic) BOOL hasMatchingPersona;                               //@synthesize hasMatchingPersona=_hasMatchingPersona - In the implementation block
@property (assign,nonatomic) unsigned long long roles;                              //@synthesize roles=_roles - In the implementation block
@property (nonatomic,retain) NSDictionary * locationIDsByAXMRoleType;               //@synthesize locationIDsByAXMRoleType=_locationIDsByAXMRoleType - In the implementation block
@property (assign,nonatomic) BOOL hasEDUAccount;                                    //@synthesize hasEDUAccount=_hasEDUAccount - In the implementation block
@property (nonatomic,copy) NSString * organizationName;                             //@synthesize organizationName=_organizationName - In the implementation block
@property (assign,nonatomic) BOOL organizationProgressTrackingAllowed;              //@synthesize organizationProgressTrackingAllowed=_organizationProgressTrackingAllowed - In the implementation block
@property (assign,nonatomic) long long catalogEnvironment;                          //@synthesize catalogEnvironment=_catalogEnvironment - In the implementation block
@property (assign,nonatomic) int rosterServiceAuthenticationState;                  //@synthesize rosterServiceAuthenticationState=_rosterServiceAuthenticationState - In the implementation block
@property (assign,nonatomic) int handoutServiceAuthenticationState;                 //@synthesize handoutServiceAuthenticationState=_handoutServiceAuthenticationState - In the implementation block
@property (nonatomic,readonly) BOOL isAdministrator; 
@property (nonatomic,readonly) BOOL isInstructor; 
@property (nonatomic,readonly) BOOL isStudent; 
+(BOOL)supportsSecureCoding;
+(id)magicValue;
+(unsigned long long)userRolesFromUserLocationIDsByAXMRoleType:(id)arg1 ;
-(void)setDevMode:(int)arg1 ;
-(BOOL)hasMatchingPersona;
-(void)setClientPersonaUniqueString:(NSString *)arg1 ;
-(void)setPersonaUniqueString:(NSString *)arg1 ;
-(void)setOrganizationName:(NSString *)arg1 ;
-(NSDictionary *)locationIDsByAXMRoleType;
-(BOOL)isAdministrator;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setHandoutServiceAuthenticationState:(int)arg1 ;
-(CLSPerson *)person;
-(void)setRosterServiceAuthenticationState:(int)arg1 ;
-(BOOL)hasRole:(unsigned long long)arg1 ;
-(int)rosterServiceAuthenticationState;
-(BOOL)_hasRole:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)catalogEnvironment;
-(void)setOrganizationProgressTrackingAllowed:(BOOL)arg1 ;
-(NSString *)organizationName;
-(int)handoutServiceAuthenticationState;
-(id)description;
-(NSString *)clientPersonaUniqueString;
-(id)_init;
-(void)setRoles:(unsigned long long)arg1 ;
-(BOOL)isStudent;
-(BOOL)isInstructor;
-(BOOL)hasDataSeparatedAccount;
-(BOOL)organizationProgressTrackingAllowed;
-(void)setHasDataSeparatedAccount:(BOOL)arg1 ;
-(void)setPerson:(CLSPerson *)arg1 ;
-(unsigned long long)roles;
-(int)devMode;
-(NSString *)personaUniqueString;
-(void)setHasMatchingPersona:(BOOL)arg1 ;
-(BOOL)hasEDUAccount;
-(void)setCatalogEnvironment:(long long)arg1 ;
-(void)setHasEDUAccount:(BOOL)arg1 ;
-(unsigned long long)_useRoles;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setLocationIDsByAXMRoleType:(NSDictionary *)arg1 ;
@end

