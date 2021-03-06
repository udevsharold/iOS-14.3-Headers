/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary;

@interface BWColorLookupCache : NSObject {

	NSObject*<OS_dispatch_queue> _coreImageCacheIsolationQueue;
	NSMutableDictionary* _coreImageTableCache;

}
+(void)initialize;
-(id)init;
-(void)dealloc;
-(id)colorLookupTablesForFilter:(id)arg1 ;
-(id)fetchColorLookupTablesForFilter:(id)arg1 ;
-(id)identityColorLookupTable;
-(id)interpolatedColorLookupTableFromTable:(id)arg1 toTable:(id)arg2 fractionComplete:(float)arg3 ;
@end

