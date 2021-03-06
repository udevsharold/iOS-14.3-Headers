/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:55 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class UIImage, UIImageSymbolConfiguration, UIColor;

@interface UIListContentImageProperties : NSObject <NSCopying, NSSecureCoding> {

	struct {
		unsigned hasCustomizedPreferredSymbolConfiguration : 1;
		unsigned hasCustomizedTintColor : 1;
		unsigned hasCustomizedTintColorTransformer : 1;
		unsigned hasCustomizedCornerRadius : 1;
		unsigned hasCustomizedReservedLayoutSize : 1;
		unsigned hasCustomizedMaximumSize : 1;
		unsigned hasCustomizedAccessibilityIgnoresInvertColors : 1;
	}  _imageFlags;
	BOOL _accessibilityIgnoresInvertColors;
	UIImage* _image;
	UIImageSymbolConfiguration* _preferredSymbolConfiguration;
	UIColor* _tintColor;
	/*^block*/id _tintColorTransformer;
	double _cornerRadius;
	long long _tintColorTransformerIdentifier;
	CGSize _reservedLayoutSize;
	CGSize _maximumSize;

}

@property (nonatomic,copy) UIImageSymbolConfiguration * preferredSymbolConfiguration; 
@property (nonatomic,retain) UIColor * tintColor; 
@property (nonatomic,copy) id tintColorTransformer; 
@property (assign,nonatomic) double cornerRadius; 
@property (assign,nonatomic) CGSize maximumSize; 
@property (assign,nonatomic) CGSize reservedLayoutSize; 
@property (assign,nonatomic) BOOL accessibilityIgnoresInvertColors; 
+(BOOL)supportsSecureCoding;
-(void)setTintColor:(UIColor *)arg1 ;
-(id)init;
-(void)setCornerRadius:(double)arg1 ;
-(void)setReservedLayoutSize:(CGSize)arg1 ;
-(double)cornerRadius;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAccessibilityIgnoresInvertColors:(BOOL)arg1 ;
-(void)setPreferredSymbolConfiguration:(UIImageSymbolConfiguration *)arg1 ;
-(BOOL)accessibilityIgnoresInvertColors;
-(CGSize)reservedLayoutSize;
-(unsigned long long)hash;
-(CGSize)maximumSize;
-(id)initWithCoder:(id)arg1 ;
-(UIColor *)tintColor;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)resolvedTintColorForTintColor:(id)arg1 ;
-(void)setTintColorTransformer:(id)arg1 ;
-(id)tintColorTransformer;
-(UIImageSymbolConfiguration *)preferredSymbolConfiguration;
-(void)setMaximumSize:(CGSize)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

