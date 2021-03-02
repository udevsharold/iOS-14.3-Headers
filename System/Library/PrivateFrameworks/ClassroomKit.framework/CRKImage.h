/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClassroomKit/ClassroomKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage, NSData, NSString;

@interface CRKImage : NSObject <NSSecureCoding, NSCopying> {

	BOOL _horizontallyFlipped;
	UIImage* _underlyingImage;

}

@property (nonatomic,retain) UIImage * underlyingImage;                                          //@synthesize underlyingImage=_underlyingImage - In the implementation block
@property (assign,getter=isHorizontallyFlipped,nonatomic) BOOL horizontallyFlipped;              //@synthesize horizontallyFlipped=_horizontallyFlipped - In the implementation block
@property (nonatomic,readonly) CRKImage * localizedImage; 
@property (nonatomic,copy,readonly) NSData * PNGRepresentation; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) CGImageRef CGImage; 
@property (nonatomic,copy) NSString * accessibilityDescription; 
+(double)screenScale;
+(BOOL)supportsSecureCoding;
+(id)imageWithData:(id)arg1 ;
+(id)imageWithCGImage:(CGImageRef)arg1 ;
+(id)imageNamed:(id)arg1 inBundle:(id)arg2 ;
+(id)imageNamed:(id)arg1 ;
+(id)imageWithUnderlyingImage:(id)arg1 ;
+(id)templateImageNamed:(id)arg1 inBundle:(id)arg2 ;
+(id)templateImageNamed:(id)arg1 ;
+(CGImageRef)resizedCGImageFromImage:(CGImageRef)arg1 newSize:(CGSize)arg2 ;
-(CGImageRef)CGImage;
-(NSString *)accessibilityDescription;
-(void)setAccessibilityDescription:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqualToImage:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)size;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)PNGRepresentation;
-(void)setHorizontallyFlipped:(BOOL)arg1 ;
-(id)initWithUnderlyingImage:(id)arg1 ;
-(UIImage *)underlyingImage;
-(id)initWithUnderlyingImage:(id)arg1 horizontallyFlipped:(BOOL)arg2 ;
-(BOOL)layoutIsLeftToRight;
-(id)flippedUnderlyingImage;
-(id)imageByResizingToSize:(CGSize)arg1 ;
-(BOOL)isHorizontallyFlipped;
-(CRKImage *)localizedImage;
-(id)imageByEnlargingCanvasToSize:(CGSize)arg1 ;
-(id)imageByAspectFittingToBox:(CGSize)arg1 ;
-(id)JPEGRepresentationWithCompressionFactor:(double)arg1 ;
-(BOOL)isLargerThanSize:(CGSize)arg1 ;
-(void)setUnderlyingImage:(UIImage *)arg1 ;
@end
