/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:49 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OFLRUCache;

@interface OFMetadataMemoryCache : NSObject {

	OFLRUCache* _memoryCache;
	BOOL _allowCleanupOnMemoryWarnings;
	BOOL _allowCleanupOnEnteringBackground;
	unsigned long long _hasChanges;

}

@property (assign,nonatomic) BOOL allowCleanupOnMemoryWarnings;                  //@synthesize allowCleanupOnMemoryWarnings=_allowCleanupOnMemoryWarnings - In the implementation block
@property (assign,nonatomic) BOOL allowCleanupOnEnteringBackground;              //@synthesize allowCleanupOnEnteringBackground=_allowCleanupOnEnteringBackground - In the implementation block
-(BOOL)writeToURL:(id)arg1 ;
-(BOOL)loadFromURL:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)hasChanges;
-(void)invalidate;
-(id)attributesForIdentifier:(id)arg1 ;
-(void)_didReceiveMemoryWarningNotification;
-(void)_didEnterBackgroundNotification;
-(id)_metadataForIdentifier:(id)arg1 ;
-(void)_saveMetadata:(id)arg1 forIdentifier:(id)arg2 ;
-(void)setNumberOfMemorySlots:(unsigned long long)arg1 ;
-(id)valueForKey:(id)arg1 andIdentifier:(id)arg2 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 andIdentifier:(id)arg3 ;
-(void)setAttributes:(id)arg1 forIdentifier:(id)arg2 ;
-(BOOL)allowCleanupOnMemoryWarnings;
-(void)setAllowCleanupOnMemoryWarnings:(BOOL)arg1 ;
-(BOOL)allowCleanupOnEnteringBackground;
-(void)setAllowCleanupOnEnteringBackground:(BOOL)arg1 ;
-(void)resetChanges;
-(unsigned long long)numberOfMemorySlots;
-(unsigned long long)numberOfUsedMemorySlots;
-(void)invalidateForIdentifier:(id)arg1 ;
@end

