/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:51:39 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIBoundingPath.h>

@interface _UIRectangularBoundingPath : _UIBoundingPath {

	CGRect _boundingRect;

}

@property (nonatomic,readonly) CGRect boundingRect;              //@synthesize boundingRect=_boundingRect - In the implementation block
+(BOOL)supportsSecureCoding;
-(CGRect)_rectTuckedInCorner:(unsigned long long)arg1 ofBoundingPathAndRect:(CGRect)arg2 withSize:(CGSize)arg3 cornerRadii:(UIRectCornerRadii)arg4 minimumPadding:(double)arg5 ;
-(void)setCoordinateSpace:(id)arg1 ;
-(BOOL)validateForCoordinateSpace;
-(BOOL)_validateBoundingRect:(CGRect)arg1 forCoordinateSpace:(id)arg2 ;
-(id)boundingPathForCoordinateSpace:(id)arg1 ;
-(id)_imageRepresentation;
-(CGRect)_inscribedRectInBoundingPathAndRect:(CGRect)arg1 byInsettingRect:(CGRect)arg2 onEdges:(unsigned long long)arg3 withOptions:(unsigned long long)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithCoordinateSpace:(id)arg1 boundingRect:(CGRect)arg2 ;
-(id)description;
-(id)boundingPathForCoordinateSpace:(id)arg1 withCornerRadii:(UIRectCornerRadii)arg2 orientation:(long long)arg3 scale:(double)arg4 ;
-(CGRect)_rectTuckedAgainstEdge:(unsigned long long)arg1 ofBoundingPathAndRect:(CGRect)arg2 withSize:(double)arg3 cornerRadii:(UIRectCornerRadii)arg4 minimumPadding:(double)arg5 ;
-(BOOL)isNonRectangular;
-(CGRect)boundingRect;
-(CGRect)_largestInscribedRectInBoundingPathAndRect:(CGRect)arg1 withCenter:(CGPoint)arg2 aspectRatio:(double)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

