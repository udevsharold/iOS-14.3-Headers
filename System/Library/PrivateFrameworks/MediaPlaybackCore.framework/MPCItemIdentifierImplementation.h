/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/MPCItemIdentifier.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MPCItemIdentifierImplementation : NSObject <MPCItemIdentifier, NSCopying> {

	NSString* _contentItemID;
	long long _repeatIndex;

}

@property (nonatomic,copy) NSString * contentItemID;                //@synthesize contentItemID=_contentItemID - In the implementation block
@property (assign,nonatomic) long long repeatIndex;                 //@synthesize repeatIndex=_repeatIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)identifierForMFQueuePlayerItem:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)setContentItemID:(NSString *)arg1 ;
-(long long)repeatIndex;
-(void)setRepeatIndex:(long long)arg1 ;
-(NSString *)contentItemID;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithContentItemID:(id)arg1 repeatIndex:(long long)arg2 ;
@end

