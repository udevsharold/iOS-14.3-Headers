/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AssistantUI/AssistantUI-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, AFAccount, NSNumber;

@interface AFUISiriSessionInfo : NSObject <NSSecureCoding, NSCopying> {

	NSString* _identifier;
	NSString* _assistantVersion;
	AFAccount* _activeAccount;
	NSNumber* _userAccountCount;

}

@property (nonatomic,copy) NSString * assistantVersion;                 //@synthesize assistantVersion=_assistantVersion - In the implementation block
@property (nonatomic,copy) AFAccount * activeAccount;                   //@synthesize activeAccount=_activeAccount - In the implementation block
@property (nonatomic,copy) NSNumber * userAccountCount;                 //@synthesize userAccountCount=_userAccountCount - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)_initWithIdentifier:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)setActiveAccount:(AFAccount *)arg1 ;
-(AFAccount *)activeAccount;
-(void)encodeWithCoder:(id)arg1 ;
-(id)setAssistantVersionAndGenerateLightweightInfo:(id)arg1 ;
-(id)setActiveAccountAndGenerateLightweightInfo:(id)arg1 ;
-(id)setUserAccountCountGenerateLightweightInfo:(long long)arg1 ;
-(void)setAssistantVersion:(NSString *)arg1 ;
-(id)_setPropertyValue:(id)arg1 withSelector:(SEL)arg2 ;
-(void)setUserAccountCount:(NSNumber *)arg1 ;
-(id)_strippedInfo;
-(BOOL)applyInfo:(id)arg1 ;
-(NSString *)assistantVersion;
-(NSNumber *)userAccountCount;
@end
