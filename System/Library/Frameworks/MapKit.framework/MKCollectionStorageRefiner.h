/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:23 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MapKit/MapKit-Structs.h>
@class GEOURLCollectionStorage;

@interface MKCollectionStorageRefiner : NSObject {

	os_unfair_lock_s _lock;
	GEOURLCollectionStorage* _collectionStorage;

}
-(void)_sharedInitWithCollectionStorage:(id)arg1 ;
-(void)fetchMapItems:(/*^block*/id)arg1 traits:(id)arg2 ;
-(id)initWithCollectionURL:(id)arg1 ;
-(id)initWithCollectionStorage:(id)arg1 ;
-(void)fetchMapItems:(/*^block*/id)arg1 ;
@end

