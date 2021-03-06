/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet;

@interface SSModelLoader : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _pendingUpdates;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableSet * pendingUpdates;                   //@synthesize pendingUpdates=_pendingUpdates - In the implementation block
+(id)sharedInstance;
+(id)assetDirectoryPathForType:(unsigned long long)arg1 forUpdate:(BOOL)arg2 ;
-(id)init;
-(void)removeAssetsWithName:(id)arg1 ;
-(void)unpackageModelAssets:(id)arg1 assetName:(id)arg2 completion:(/*^block*/id)arg3 ;
-(NSMutableSet *)pendingUpdates;
-(BOOL)hasPendingUpdates;
-(void)unpackageModelAssets:(id)arg1 type:(unsigned long long)arg2 intoDirectory:(id)arg3 group:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)unpackageModelAssets:(id)arg1 type:(unsigned long long)arg2 group:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)removeAssetsForType:(unsigned long long)arg1 group:(id)arg2 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)moveNewlyPackagedAssets:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setPendingUpdates:(NSMutableSet *)arg1 ;
@end

