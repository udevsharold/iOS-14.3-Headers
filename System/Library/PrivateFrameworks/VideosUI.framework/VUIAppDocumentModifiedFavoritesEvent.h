/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:57:30 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIAppDocumentUpdateEvent.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet;

@interface VUIAppDocumentModifiedFavoritesEvent : VUIAppDocumentUpdateEvent <NSCopying> {

	NSSet* _addedEntityIDs;
	NSSet* _removedEntityIDs;

}

@property (nonatomic,copy) NSSet * addedEntityIDs;                //@synthesize addedEntityIDs=_addedEntityIDs - In the implementation block
@property (nonatomic,copy) NSSet * removedEntityIDs;              //@synthesize removedEntityIDs=_removedEntityIDs - In the implementation block
-(id)initWithDescriptor:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithAddedEntityIDs:(id)arg1 removedEntityIDs:(id)arg2 ;
-(NSSet *)addedEntityIDs;
-(NSSet *)removedEntityIDs;
-(id)initWithAction:(unsigned long long)arg1 entityID:(id)arg2 ;
-(id)coalescedEvent:(id)arg1 ;
-(void)setAddedEntityIDs:(NSSet *)arg1 ;
-(void)setRemovedEntityIDs:(NSSet *)arg1 ;
@end

