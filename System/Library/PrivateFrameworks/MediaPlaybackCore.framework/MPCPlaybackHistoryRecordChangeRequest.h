/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:43 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MPModelPlayEvent, MPModelGenericObject;

@interface MPCPlaybackHistoryRecordChangeRequest : NSObject <NSCopying> {

	BOOL _allowsStoreContainerImport;
	MPModelPlayEvent* _playEvent;
	MPModelGenericObject* _itemGenericObject;
	long long _type;

}

@property (assign,nonatomic) BOOL allowsStoreContainerImport;                       //@synthesize allowsStoreContainerImport=_allowsStoreContainerImport - In the implementation block
@property (nonatomic,retain) MPModelPlayEvent * playEvent;                          //@synthesize playEvent=_playEvent - In the implementation block
@property (nonatomic,retain) MPModelGenericObject * itemGenericObject;              //@synthesize itemGenericObject=_itemGenericObject - In the implementation block
@property (assign,nonatomic) long long type;                                        //@synthesize type=_type - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setType:(long long)arg1 ;
-(id)newOperationWithResponseHandler:(/*^block*/id)arg1 ;
-(long long)type;
-(MPModelPlayEvent *)playEvent;
-(void)setItemGenericObject:(MPModelGenericObject *)arg1 ;
-(void)setPlayEvent:(MPModelPlayEvent *)arg1 ;
-(void)setAllowsStoreContainerImport:(BOOL)arg1 ;
-(MPModelGenericObject *)itemGenericObject;
-(BOOL)allowsStoreContainerImport;
@end
