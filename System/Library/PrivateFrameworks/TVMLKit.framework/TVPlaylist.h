/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:09:01 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSDictionary;

@interface TVPlaylist : NSObject {

	NSArray* _mediaItems;
	long long _endAction;
	long long _repeatMode;
	NSDictionary* _userInfo;

}

@property (assign,nonatomic) long long endAction;                      //@synthesize endAction=_endAction - In the implementation block
@property (assign,nonatomic) long long repeatMode;                     //@synthesize repeatMode=_repeatMode - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                    //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,copy,readonly) NSArray * mediaItems;              //@synthesize mediaItems=_mediaItems - In the implementation block
-(void)removeObjectsAtIndexes:(id)arg1 ;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)insertObjects:(id)arg1 atIndexes:(id)arg2 ;
-(void)setRepeatMode:(long long)arg1 ;
-(long long)repeatMode;
-(NSDictionary *)userInfo;
-(void)addObject:(id)arg1 ;
-(NSArray *)mediaItems;
-(void)setEndAction:(long long)arg1 ;
-(long long)endAction;
@end

