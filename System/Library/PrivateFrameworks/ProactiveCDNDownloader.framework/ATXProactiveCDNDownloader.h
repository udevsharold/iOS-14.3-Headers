/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ProactiveCDNDownloader.framework/ProactiveCDNDownloader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATXProactiveCDNDownloaderProtocol.h>

@protocol ATXGEOTileLoaderProtocol, ATXGEOTileDataReaderProtocol, OS_dispatch_queue;
@class NSObject;

@interface ATXProactiveCDNDownloader : NSObject <ATXProactiveCDNDownloaderProtocol> {

	id<ATXGEOTileLoaderProtocol> _tileLoader;
	id<ATXGEOTileDataReaderProtocol> _tileDataReader;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) id<ATXGEOTileLoaderProtocol> tileLoader;                      //@synthesize tileLoader=_tileLoader - In the implementation block
@property (nonatomic,readonly) id<ATXGEOTileDataReaderProtocol> tileDataReader;              //@synthesize tileDataReader=_tileDataReader - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                           //@synthesize queue=_queue - In the implementation block
-(id<ATXGEOTileLoaderProtocol>)tileLoader;
-(id)init;
-(id)initWithTileLoader:(id)arg1 tileDataReader:(id)arg2 ;
-(id<ATXGEOTileDataReaderProtocol>)tileDataReader;
-(void)_heroAppPredictionsForLocation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)heroAppPredictionsForLocation:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
@end
