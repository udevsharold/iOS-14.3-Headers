/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:40 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIColor;

@interface _UIImageContentLayout : NSObject {

	SCD_Struct_UI62 _flags;
	id _contents;
	UIColor* _contentsMultiplyColor;
	double _contentsScaleFactor;
	double _baselineOffsetFromTop;
	double _baselineOffsetFromBottom;
	UIEdgeInsets _contentInsets;
	CGAffineTransform _contentsTransform;

}

@property (nonatomic,readonly) CGAffineTransform contentsTransform;              //@synthesize contentsTransform=_contentsTransform - In the implementation block
@property (nonatomic,readonly) double contentsScaleFactor;                       //@synthesize contentsScaleFactor=_contentsScaleFactor - In the implementation block
@property (nonatomic,readonly) id contents; 
@property (nonatomic,readonly) UIEdgeInsets contentInsets;                       //@synthesize contentInsets=_contentInsets - In the implementation block
@property (nonatomic,readonly) UIColor * contentsMultiplyColor; 
@property (nonatomic,readonly) double baselineOffsetFromBottom;                  //@synthesize baselineOffsetFromBottom=_baselineOffsetFromBottom - In the implementation block
+(id)layoutForSource:(id)arg1 inTarget:(id)arg2 withSize:(CGSize)arg3 ;
-(UIEdgeInsets)contentInsets;
-(double)baselineOffsetFromBottom;
-(double)contentsScaleFactor;
-(CGAffineTransform)contentsTransform;
-(id)contents;
-(id)description;
-(UIColor *)contentsMultiplyColor;
-(BOOL)hasContents;
@end
