/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:53 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <UIKitCore/_UICollectionLayoutAPIRespresenting.h>

@class _UICollectionLayoutDimension;

@interface _UICollectionLayoutSize : NSObject <NSCopying, _UICollectionLayoutAPIRespresenting> {

	_UICollectionLayoutDimension* _width;
	_UICollectionLayoutDimension* _height;

}

@property (nonatomic,readonly) _UICollectionLayoutDimension * width; 
@property (nonatomic,readonly) _UICollectionLayoutDimension * height; 
+(id)sizeWithWidth:(id)arg1 height:(id)arg2 ;
-(_UICollectionLayoutDimension *)width;
-(id)copyWithZone:(NSZone*)arg1 ;
-(_UICollectionLayoutDimension *)height;
-(id)_apiRepresentation;
-(id)initWithWidth:(id)arg1 height:(id)arg2 ;
@end
