/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber;

@interface PPMediaPlayerResponse : NSObject {

	unsigned _state;
	NSString* _title;
	NSString* _artist;
	NSString* _album;
	NSString* _bundleID;
	NSString* _playerID;
	NSNumber* _storeItemID;
	double _duration;

}

@property (nonatomic,retain) NSString * title;                    //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * artist;                   //@synthesize artist=_artist - In the implementation block
@property (nonatomic,retain) NSString * album;                    //@synthesize album=_album - In the implementation block
@property (nonatomic,retain) NSString * bundleID;                 //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSString * playerID;                 //@synthesize playerID=_playerID - In the implementation block
@property (nonatomic,retain) NSNumber * storeItemID;              //@synthesize storeItemID=_storeItemID - In the implementation block
@property (assign,nonatomic) unsigned state;                      //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) double duration;                     //@synthesize duration=_duration - In the implementation block
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)playerID;
-(BOOL)isEqualToResponse:(id)arg1 ;
-(void)setArtist:(NSString *)arg1 ;
-(void)setDuration:(double)arg1 ;
-(NSString *)bundleID;
-(unsigned)state;
-(NSString *)album;
-(NSNumber *)storeItemID;
-(void)setPlayerID:(NSString *)arg1 ;
-(void)setAlbum:(NSString *)arg1 ;
-(NSString *)artist;
-(void)setTitle:(NSString *)arg1 ;
-(double)duration;
-(NSString *)title;
-(void)setState:(unsigned)arg1 ;
-(void)setStoreItemID:(NSNumber *)arg1 ;
@end

