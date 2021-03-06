/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:08 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/AssetsLibrary.framework/AssetsLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AssetsLibrary/AssetsLibrary-Structs.h>
@class ALAssetsGroupPrivate;

@interface ALAssetsGroup : NSObject {

	id _internal;

}

@property (nonatomic,retain) ALAssetsGroupPrivate * internal;                //@synthesize internal=_internal - In the implementation block
@property (getter=isEditable,nonatomic,readonly) BOOL editable; 
-(BOOL)isEditable;
-(long long)numberOfAssets;
-(id)_uuid;
-(void)dealloc;
-(ALAssetsGroupPrivate *)internal;
-(CGImageRef)posterImage;
-(BOOL)isValid;
-(id)description;
-(void)setInternal:(ALAssetsGroupPrivate *)arg1 ;
-(void)enumerateAssetsUsingBlock:(/*^block*/id)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(BOOL)addAsset:(id)arg1 ;
-(id)_typeAsString;
-(void)_enumerateAssetsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
-(id)initWithPhotoAlbum:(id)arg1 library:(id)arg2 type:(unsigned long long)arg3 ;
-(void)setAssetsFilter:(id)arg1 ;
-(void)enumerateAssetsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumerateAssetsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(/*^block*/id)arg3 ;
@end

