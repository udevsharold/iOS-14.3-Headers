/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:31 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class NSCollectionLayoutSize, _UICollectionPreferredSizingCustomizations;

@interface _UICollectionPreferredSize : NSObject {

	CGSize _originalSize;
	CGSize _fittingSize;
	CGSize _preferredSize;
	NSCollectionLayoutSize* _layoutSize;
	_UICollectionPreferredSizingCustomizations* _customizations;

}

@property (nonatomic,readonly) CGSize originalSize;                                                      //@synthesize originalSize=_originalSize - In the implementation block
@property (nonatomic,readonly) CGSize fittingSize;                                                       //@synthesize fittingSize=_fittingSize - In the implementation block
@property (nonatomic,readonly) NSCollectionLayoutSize * layoutSize;                                      //@synthesize layoutSize=_layoutSize - In the implementation block
@property (nonatomic,readonly) CGSize preferredSize;                                                     //@synthesize preferredSize=_preferredSize - In the implementation block
@property (nonatomic,readonly) _UICollectionPreferredSizingCustomizations * customizations;              //@synthesize customizations=_customizations - In the implementation block
-(id)initWithOriginalSize:(CGSize)arg1 fittingSize:(CGSize)arg2 layoutSize:(id)arg3 ;
-(CGSize)originalSize;
-(id)initWithOriginalSize:(CGSize)arg1 fittingSize:(CGSize)arg2 layoutSize:(id)arg3 customizations:(id)arg4 ;
-(NSCollectionLayoutSize *)layoutSize;
-(_UICollectionPreferredSizingCustomizations *)customizations;
-(id)description;
-(CGSize)fittingSize;
-(CGSize)preferredSize;
@end

