/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDate;

@interface WLKPlayEvent : NSObject {

	BOOL _played;
	NSString* _bundleID;
	NSString* _channelID;
	NSString* _externalPlayableID;
	NSString* _showID;
	double _elapsedTime;
	double _duration;
	NSDate* _occurrenceDate;

}

@property (nonatomic,copy,readonly) NSString * bundleID;                        //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,copy,readonly) NSString * channelID;                       //@synthesize channelID=_channelID - In the implementation block
@property (nonatomic,copy,readonly) NSString * externalPlayableID;              //@synthesize externalPlayableID=_externalPlayableID - In the implementation block
@property (nonatomic,copy,readonly) NSString * showID;                          //@synthesize showID=_showID - In the implementation block
@property (getter=isPlayed,nonatomic,readonly) BOOL played;                     //@synthesize played=_played - In the implementation block
@property (nonatomic,readonly) double elapsedTime;                              //@synthesize elapsedTime=_elapsedTime - In the implementation block
@property (nonatomic,readonly) double duration;                                 //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy,readonly) NSDate * occurrenceDate;                    //@synthesize occurrenceDate=_occurrenceDate - In the implementation block
-(double)elapsedTime;
-(NSString *)channelID;
-(id)init;
-(BOOL)isPlayed;
-(NSString *)bundleID;
-(NSString *)showID;
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSDate *)occurrenceDate;
-(double)duration;
-(NSString *)externalPlayableID;
@end

