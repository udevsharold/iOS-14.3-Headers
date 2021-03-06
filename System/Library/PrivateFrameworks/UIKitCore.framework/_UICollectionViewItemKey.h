/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:32 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSIndexPath, NSString;

@interface _UICollectionViewItemKey : NSObject <NSCopying> {

	NSIndexPath* _indexPath;
	NSString* _identifier;
	BOOL _isClone;
	unsigned long long _type;

}

@property (nonatomic,readonly) unsigned long long type;                     //@synthesize type=_type - In the implementation block
@property (nonatomic,retain,readonly) NSIndexPath * indexPath;              //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,retain,readonly) NSString * identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL isClone;                                //@synthesize isClone=_isClone - In the implementation block
+(id)collectionItemKeyForLayoutAttributes:(id)arg1 ;
+(id)collectionItemKeyForCellWithIndexPath:(id)arg1 ;
+(id)collectionItemKeyForDecorationViewOfKind:(id)arg1 andIndexPath:(id)arg2 ;
+(id)collectionItemKeyForSupplementaryViewOfKind:(id)arg1 andIndexPath:(id)arg2 ;
-(NSIndexPath *)indexPath;
-(id)copyAsClone:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isClone;
-(unsigned long long)hash;
-(NSString *)identifier;
-(id)description;
-(unsigned long long)type;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithType:(unsigned long long)arg1 indexPath:(id)arg2 identifier:(id)arg3 clone:(BOOL)arg4 ;
-(id)initWithType:(unsigned long long)arg1 indexPath:(id)arg2 identifier:(id)arg3 ;
@end

