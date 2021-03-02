/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:55:11 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/BiomeStorage.framework/BiomeStorage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BMStreamDatastore, BMStreamsAccessClient;

@interface BMStreamDatastorePruner : NSObject {

	BMStreamDatastore* _inner;
	BMStreamsAccessClient* _accessClient;

}
-(void)dealloc;
-(Class)eventClass;
-(void)eventsFrom:(double)arg1 to:(double)arg2 shouldDeleteUsingBlock:(/*^block*/id)arg3 ;
-(id)streamIdentifier;
-(id)newEnumeratorFromBookmark:(id)arg1 ;
-(id)newEnumeratorFromStartTime:(double)arg1 ;
-(id)fetchEventsFrom:(double)arg1 to:(double)arg2 ;
-(void)syncMappedFiles;
-(void)removeEventsFrom:(double)arg1 to:(double)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)removeEventsFrom:(double)arg1 to:(double)arg2 callback:(/*^block*/id)arg3 ;
-(id)initWithStream:(id)arg1 config:(id)arg2 ;
@end
