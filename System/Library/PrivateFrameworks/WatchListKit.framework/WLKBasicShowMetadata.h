/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:20 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKBasicContentMetadata.h>

@class NSDate, NSString;

@interface WLKBasicShowMetadata : WLKBasicContentMetadata {

	NSDate* _releaseDate;
	NSDate* _finaleDate;
	NSString* _network;

}

@property (nonatomic,readonly) NSDate * releaseDate;                 //@synthesize releaseDate=_releaseDate - In the implementation block
@property (nonatomic,readonly) NSDate * finaleDate;                  //@synthesize finaleDate=_finaleDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * network;              //@synthesize network=_network - In the implementation block
-(NSDate *)releaseDate;
-(id)init;
-(NSString *)network;
-(id)initWithDictionary:(id)arg1 ;
-(NSDate *)finaleDate;
@end
