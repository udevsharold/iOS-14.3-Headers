/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:17 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NanoMusicSync.framework/NanoMusicSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoMusicSync/NanoMusicSync-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber, NSString;

@interface NMSPodcastIdentifierSet : NSObject <NSCopying> {

	NSNumber* _storeID;
	NSString* _feedURL;

}

@property (nonatomic,readonly) NSNumber * storeID;              //@synthesize storeID=_storeID - In the implementation block
@property (nonatomic,readonly) NSString * feedURL;              //@synthesize feedURL=_feedURL - In the implementation block
-(NSNumber *)storeID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(NSString *)feedURL;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg1 ;
-(id)initWithStoreID:(id)arg1 feedURL:(id)arg2 ;
-(BOOL)isEqualToPodcastIdentifierSet:(id)arg1 ;
@end

