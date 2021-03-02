/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:00 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FMFMapCache, NSXPCConnection;

@interface FMFMapSession : NSObject {

	FMFMapCache* _mapCache;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) FMFMapCache * mapCache;                    //@synthesize mapCache=_mapCache - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
+(id)sharedInstance;
+(id)newConnection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(NSXPCConnection *)connection;
-(void)setMapCache:(FMFMapCache *)arg1 ;
-(void)mapImageForRequest:(id)arg1 andCompletion:(/*^block*/id)arg2 ;
-(void)gridImageForScreenRatio:(double)arg1 andCompletion:(/*^block*/id)arg2 ;
-(void)noLocationImageForScreenRatio:(double)arg1 andCompletion:(/*^block*/id)arg2 ;
-(void)mapImageForLocation:(id)arg1 altitude:(double)arg2 pitch:(double)arg3 screenRatio:(double)arg4 andCompletion:(/*^block*/id)arg5 ;
-(FMFMapCache *)mapCache;
-(void)gridImageForWidth:(double)arg1 height:(double)arg2 cache:(BOOL)arg3 andCompletion:(/*^block*/id)arg4 ;
-(void)noLocationImageForWidth:(double)arg1 height:(double)arg2 cache:(BOOL)arg3 andCompletion:(/*^block*/id)arg4 ;
-(void)mapImageForLocation:(id)arg1 altitude:(double)arg2 pitch:(double)arg3 width:(double)arg4 height:(double)arg5 cache:(BOOL)arg6 andCompletion:(/*^block*/id)arg7 ;
@end
