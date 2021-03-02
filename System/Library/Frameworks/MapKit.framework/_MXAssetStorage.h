/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:24 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSMutableSet;

@interface _MXAssetStorage : NSObject {

	NSObject*<OS_dispatch_queue> _lock;
	NSMutableDictionary* _storage;
	NSMutableSet* _loadingKeys;
	NSMutableDictionary* _fetchBlocks;

}
-(id)init;
-(void)loadAssetForKey:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)fetchAssetForKey:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setAsset:(id)arg1 forKey:(id)arg2 ;
@end
