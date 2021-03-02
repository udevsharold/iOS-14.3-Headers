/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:09 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source;
@class GEOSQLiteDB, geo_isolater, NSMutableArray, NSObject;

@interface _GEOConfigDBOperationQueue : NSObject {

	GEOSQLiteDB* _db;
	geo_isolater* _isolator;
	NSMutableArray* _operations;
	NSObject*<OS_dispatch_source> _timer;

}
-(void)dealloc;
-(void)flush;
-(void)scheduleTimer;
-(void)cancelTimer;
-(id)init:(id)arg1 ;
-(void)enqueueOperation:(id)arg1 ;
@end
