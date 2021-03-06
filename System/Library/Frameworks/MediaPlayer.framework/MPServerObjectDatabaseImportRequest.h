/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ICUserIdentity, NSDate;

@interface MPServerObjectDatabaseImportRequest : NSObject {

	id _payload;
	ICUserIdentity* _userIdentity;
	NSDate* _expirationDate;

}

@property (nonatomic,retain) id payload;                                 //@synthesize payload=_payload - In the implementation block
@property (nonatomic,retain) ICUserIdentity * userIdentity;              //@synthesize userIdentity=_userIdentity - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                      //@synthesize expirationDate=_expirationDate - In the implementation block
-(ICUserIdentity *)userIdentity;
-(void)setUserIdentity:(ICUserIdentity *)arg1 ;
-(void)setPayload:(id)arg1 ;
-(id)payload;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(id)_initWithPayload:(id)arg1 ;
@end

