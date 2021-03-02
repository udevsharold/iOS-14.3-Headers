/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:41 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TSCacheFlushingManagerType.h>

@interface TSCacheFlushingManager : NSObject <TSCacheFlushingManagerType> {

	 cacheFlusher;
	 storageLevelProvider;
	 preFlushGroup;

}
-(void)addPreFlushTask:(/*^block*/id)arg1 ;
-(id)init;
-(id)createPreFlushTask;
-(void)enableFlushing;
@end
