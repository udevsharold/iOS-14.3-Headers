/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:10 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MobileCalDAVDelegateUserInfo : NSObject {

	BOOL _allowWrite;
	NSString* _principalPath;
	NSString* _displayName;
	NSString* _uid;

}

@property (nonatomic,retain) NSString * principalPath;              //@synthesize principalPath=_principalPath - In the implementation block
@property (nonatomic,retain) NSString * displayName;                //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * uid;                        //@synthesize uid=_uid - In the implementation block
@property (assign,nonatomic) BOOL allowWrite;                       //@synthesize allowWrite=_allowWrite - In the implementation block
+(id)infoFromCalDAVDetails:(id)arg1 allowWrite:(BOOL)arg2 ;
-(void)setUid:(NSString *)arg1 ;
-(NSString *)uid;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)description;
-(void)setAllowWrite:(BOOL)arg1 ;
-(id)initWithPrincipalPath:(id)arg1 displayName:(id)arg2 allowWrite:(BOOL)arg3 ;
-(BOOL)allowWrite;
-(NSString *)principalPath;
-(void)setPrincipalPath:(NSString *)arg1 ;
-(NSString *)displayName;
@end

