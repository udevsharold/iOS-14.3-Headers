/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:58:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PPContactDiskCache : NSObject {

	long long _lastCreatedAt;
	NSString* _path;

}
-(id)initWithPath:(id)arg1 ;
-(BOOL)isEmpty;
-(id)init;
-(BOOL)iterNameRecordCacheWithError:(id*)arg1 block:(/*^block*/id)arg2 ;
-(id)path;
-(id)_cacheObjectFromFilePath:(id)arg1 error:(id*)arg2 ;
@end

