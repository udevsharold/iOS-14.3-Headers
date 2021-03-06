/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BiomeStorage.framework/BiomeStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BMStreamDatastore, BMFrameStore, BMStoreBookmark;

@interface BMStoreEnumerator : NSObject {

	BMStreamDatastore* _ds;
	BMFrameStore* _currentFrameStore;
	unsigned long long _frameStoreOffset;
	double _iterationStartTime;

}

@property (nonatomic,readonly) BMFrameStore * currentFrameStore;              //@synthesize currentFrameStore=_currentFrameStore - In the implementation block
@property (nonatomic,readonly) BMStoreBookmark * bookmark; 
-(BMStoreBookmark *)bookmark;
-(id)copyPeekUntypedEvent;
-(id)initWithStreamDatastore:(id)arg1 bookmark:(id)arg2 ;
-(id)copyPeekEvent;
-(void)dealloc;
-(BMFrameStore *)currentFrameStore;
-(id)initWithStreamDatastore:(id)arg1 currentFrameStore:(id)arg2 frameStoreOffset:(unsigned long long)arg3 iterationStartTime:(double)arg4 ;
-(id)copyNextEventAndMoveBookmark:(BOOL)arg1 ;
-(id)copyNextUntypedEvent;
-(id)initWithStreamDatastore:(id)arg1 startTime:(double)arg2 ;
-(void)nextEventWithContext:(/*^block*/id)arg1 ;
-(id)copyNextEvent;
@end

