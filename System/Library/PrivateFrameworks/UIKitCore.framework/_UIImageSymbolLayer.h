/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIColor, UIImageAsset, _UIImageCUIVectorGlyphContent, NSString;

@interface _UIImageSymbolLayer : NSObject {

	UIColor* _color;
	double _scaleFactor;
	UIImageAsset* _asset;
	_UIImageCUIVectorGlyphContent* _content;
	CGPoint _offset;

}

@property (nonatomic,retain) UIImageAsset * asset;                                 //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) _UIImageCUIVectorGlyphContent * content;              //@synthesize content=_content - In the implementation block
@property (nonatomic,retain) UIColor * color;                                      //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) CGPoint offset;                                       //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) double scaleFactor;                                   //@synthesize scaleFactor=_scaleFactor - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (getter=isSystemImage,nonatomic,readonly) BOOL systemImage; 
+(id)_symbolLayerWithSystemName:(id)arg1 color:(id)arg2 ;
+(id)_symbolLayerWithName:(id)arg1 color:(id)arg2 ;
+(id)_symbolLayerWithSystemName:(id)arg1 color:(id)arg2 offset:(CGPoint)arg3 scaleFactor:(double)arg4 ;
+(id)_symbolLayerWithImage:(id)arg1 color:(id)arg2 offset:(CGPoint)arg3 scaleFactor:(double)arg4 ;
+(id)_symbolLayerWithName:(id)arg1 color:(id)arg2 offset:(CGPoint)arg3 scaleFactor:(double)arg4 ;
-(_UIImageCUIVectorGlyphContent *)content;
-(void)setColor:(UIColor *)arg1 ;
-(UIImageAsset *)asset;
-(void)setAsset:(UIImageAsset *)arg1 ;
-(void)setContent:(_UIImageCUIVectorGlyphContent *)arg1 ;
-(UIColor *)color;
-(CGPoint)offset;
-(void)setOffset:(CGPoint)arg1 ;
-(double)scaleFactor;
-(void)setScaleFactor:(double)arg1 ;
-(BOOL)isSystemImage;
-(NSString *)name;
@end
