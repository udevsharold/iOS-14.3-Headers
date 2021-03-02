/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPCFuture;

@interface MPCFutureInvalidationToken : NSObject <NSCopying> {

	MPCFuture* _future;

}

@property (nonatomic,retain) MPCFuture * future;              //@synthesize future=_future - In the implementation block
-(MPCFuture *)future;
-(void)setFuture:(MPCFuture *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
