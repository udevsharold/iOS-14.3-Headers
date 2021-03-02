/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NFLocking.h>

@protocol NFLocking;
@interface FCMTWriterLock : NSObject <NFLocking> {

	id<NFLocking> _underlyingLock;

}

@property (nonatomic,retain) id<NFLocking> underlyingLock;              //@synthesize underlyingLock=_underlyingLock - In the implementation block
-(id)init;
-(void)setUnderlyingLock:(id<NFLocking>)arg1 ;
-(void)unlock;
-(void)performReadSync:(/*^block*/id)arg1 ;
-(void)performWriteSync:(/*^block*/id)arg1 ;
-(id<NFLocking>)underlyingLock;
-(void)lock;
-(id)initWithUnderlyingLock:(id)arg1 ;
@end
