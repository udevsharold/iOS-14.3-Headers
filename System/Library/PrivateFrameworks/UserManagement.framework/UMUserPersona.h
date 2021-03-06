/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:06 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UserManagement/UserManagement-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSString;

@interface UMUserPersona : NSObject <NSCopying, NSMutableCopying> {

	NSString* personaName;
	BOOL shouldFetchAttributes;
	BOOL _isSystemPersona;
	BOOL _isDefaultPersona;
	BOOL _isGuestPersona;
	BOOL _isDataSeparatedPersona;
	BOOL _isEnterprisePersona;
	BOOL _isPersonalPersona;
	BOOL _isDisabled;
	unsigned _uid;
	unsigned _gid;
	NSString* _userPersonaUniqueString;
	NSString* _userPersonaNickName;
	unsigned long long _userPersonaType;

}

@property (assign,nonatomic) unsigned uid;                                    //@synthesize uid=_uid - In the implementation block
@property (assign,nonatomic) unsigned gid;                                    //@synthesize gid=_gid - In the implementation block
@property (assign,nonatomic) BOOL isEnterprisePersona;                        //@synthesize isEnterprisePersona=_isEnterprisePersona - In the implementation block
@property (assign,nonatomic) BOOL isPersonalPersona;                          //@synthesize isPersonalPersona=_isPersonalPersona - In the implementation block
@property (assign,nonatomic) BOOL isSystemPersona;                            //@synthesize isSystemPersona=_isSystemPersona - In the implementation block
@property (assign,nonatomic) BOOL isDefaultPersona;                           //@synthesize isDefaultPersona=_isDefaultPersona - In the implementation block
@property (assign,nonatomic) BOOL isGuestPersona;                             //@synthesize isGuestPersona=_isGuestPersona - In the implementation block
@property (assign,nonatomic) BOOL isDataSeparatedPersona;                     //@synthesize isDataSeparatedPersona=_isDataSeparatedPersona - In the implementation block
@property (assign,nonatomic) BOOL isDisabled;                                 //@synthesize isDisabled=_isDisabled - In the implementation block
@property (nonatomic,copy) NSString * userPersonaUniqueString;                //@synthesize userPersonaUniqueString=_userPersonaUniqueString - In the implementation block
@property (nonatomic,copy) NSString * userPersonaNickName;                    //@synthesize userPersonaNickName=_userPersonaNickName - In the implementation block
@property (assign,nonatomic) unsigned long long userPersonaType;              //@synthesize userPersonaType=_userPersonaType - In the implementation block
+(BOOL)currentPersonaMatchesPath:(id)arg1 ;
+(id)currentPersona;
-(BOOL)isDisabled;
-(BOOL)commitChanges;
-(BOOL)commitChangesWithError:(id*)arg1 ;
-(void)setUid:(unsigned)arg1 ;
-(id)generateAndRestorePersonaContextWithPersonaUniqueString:(id)arg1 ;
-(void)fetchAttributesIfNeeded;
-(BOOL)isPersonalPersona;
-(unsigned)uid;
-(void)setUserPersonaNickName:(NSString *)arg1 ;
-(void)setIsDefaultPersona:(BOOL)arg1 ;
-(id)init;
-(unsigned long long)userPersonaType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)generateAndRestorePersonaContextWithIdentityString:(id)arg1 ;
-(void)setIsEnterprisePersona:(BOOL)arg1 ;
-(id)restorePersonaWithSavedPersonaContext:(id)arg1 ;
-(BOOL)isDataSeparatedPersona;
-(BOOL)isGuestPersona;
-(BOOL)isEqualToPersona:(id)arg1 ;
-(void)setIsSystemPersona:(BOOL)arg1 ;
-(void)setIsPersonalPersona:(BOOL)arg1 ;
-(id)createPersonaContextForBackgroundProcessingWithIdentityString:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(NSString *)userPersonaUniqueString;
-(NSString *)userPersonaNickName;
-(void)setPropertiesFromUserPersona:(id)arg1 ;
-(id)createPersonaContextForBackgroundProcessingWithPersonaUniqueString:(id)arg1 ;
-(BOOL)isSystemPersona;
-(void)setGid:(unsigned)arg1 ;
-(unsigned)gid;
-(void)setIsDisabled:(BOOL)arg1 ;
-(BOOL)isDefaultPersona;
-(void)setUserPersonaType:(unsigned long long)arg1 ;
-(id)copyCurrentPersonaContextWithError:(id*)arg1 ;
-(BOOL)isEnterprisePersona;
-(void)setIsGuestPersona:(BOOL)arg1 ;
-(void)setUserPersonaUniqueString:(NSString *)arg1 ;
-(void)setIsDataSeparatedPersona:(BOOL)arg1 ;
@end

