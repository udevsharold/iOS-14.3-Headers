/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:05:19 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKit/WLKBasicContentMetadata.h>

@class NSNumber, NSString;

@interface WLKBasicSeasonMetadata : WLKBasicContentMetadata {

	NSNumber* _seasonNumber;
	NSString* _canonicalShowID;

}

@property (nonatomic,readonly) NSNumber * seasonNumber;                      //@synthesize seasonNumber=_seasonNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * canonicalShowID;              //@synthesize canonicalShowID=_canonicalShowID - In the implementation block
+(id)seasonsWithDictionaries:(id)arg1 ;
-(NSNumber *)seasonNumber;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)canonicalShowID;
@end
