/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, WLKPlayable;

@interface WLKContentPlayResponse : NSObject {

	NSDictionary* _dictionary;
	WLKPlayable* _playable;

}

@property (nonatomic,copy,readonly) NSDictionary * dictionary;              //@synthesize dictionary=_dictionary - In the implementation block
@property (nonatomic,readonly) WLKPlayable * playable;                      //@synthesize playable=_playable - In the implementation block
-(id)init;
-(WLKPlayable *)playable;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionary;
@end
