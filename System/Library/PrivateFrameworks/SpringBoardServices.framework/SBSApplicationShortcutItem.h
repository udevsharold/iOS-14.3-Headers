/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardServices/SpringBoardServices-Structs.h>
#import <libobjc.A.dylib/BSXPCCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, SBSApplicationShortcutIcon, NSData, NSDictionary;

@interface SBSApplicationShortcutItem : NSObject <BSXPCCoding, NSCopying> {

	NSString* _type;
	NSString* _localizedTitle;
	NSString* _localizedSubtitle;
	SBSApplicationShortcutIcon* _icon;
	unsigned long long _activationMode;
	NSString* _bundleIdentifierToLaunch;
	NSString* _targetContentIdentifier;
	NSData* _userInfoData;

}

@property (nonatomic,retain) NSData * userInfoData;                          //@synthesize userInfoData=_userInfoData - In the implementation block
@property (nonatomic,copy) NSString * type;                                  //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * localizedTitle;                        //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,copy) NSString * localizedSubtitle;                     //@synthesize localizedSubtitle=_localizedSubtitle - In the implementation block
@property (nonatomic,copy) SBSApplicationShortcutIcon * icon;                //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo; 
@property (assign,nonatomic) unsigned long long activationMode;              //@synthesize activationMode=_activationMode - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifierToLaunch;              //@synthesize bundleIdentifierToLaunch=_bundleIdentifierToLaunch - In the implementation block
@property (nonatomic,copy) NSString * targetContentIdentifier;               //@synthesize targetContentIdentifier=_targetContentIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_staticApplicationShortcutItemsFromInfoPlistEntry:(id)arg1 ;
-(unsigned long long)activationMode;
-(NSString *)localizedSubtitle;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(id)initWithXPCDictionary:(id)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)setTargetContentIdentifier:(NSString *)arg1 ;
-(NSData *)userInfoData;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setType:(NSString *)arg1 ;
-(SBSApplicationShortcutIcon *)icon;
-(void)setLocalizedSubtitle:(NSString *)arg1 ;
-(NSDictionary *)userInfo;
-(unsigned long long)hash;
-(void)setIcon:(SBSApplicationShortcutIcon *)arg1 ;
-(NSString *)description;
-(NSString *)type;
-(NSString *)bundleIdentifierToLaunch;
-(void)setBundleIdentifierToLaunch:(NSString *)arg1 ;
-(void)_localizeWithHandler:(/*^block*/id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)targetContentIdentifier;
-(void)encodeWithXPCDictionary:(id)arg1 ;
-(void)setUserInfoData:(NSData *)arg1 ;
-(void)setActivationMode:(unsigned long long)arg1 ;
@end
