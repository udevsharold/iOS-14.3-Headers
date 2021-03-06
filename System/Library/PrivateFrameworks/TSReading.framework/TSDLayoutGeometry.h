/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:08:56 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface TSDLayoutGeometry : NSObject <NSCopying, NSMutableCopying> {

	CGSize mSize;
	CGAffineTransform mTransform;

}

@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) CGAffineTransform transform; 
+(id)geometryFromFullTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)transform;
-(CGPoint)center;
-(CGRect)frame;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGAffineTransform)inverseTransform;
-(CGSize)size;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)description;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)differsInMoreThanTranslationFrom:(id)arg1 ;
-(id)infoGeometry;
-(CGAffineTransform)fullTransform;
-(id)initWithInfoGeometry:(id)arg1 ;
-(id)geometryByTranslatingBy:(CGPoint)arg1 ;
-(CGAffineTransform)transformByConcatenatingTransformTo:(CGAffineTransform)arg1 ;
-(id)initWithSize:(CGSize)arg1 transform:(CGAffineTransform)arg2 ;
-(id)geometryByTransformingBy:(CGAffineTransform)arg1 ;
-(id)geometryByOutsettingBy:(CGSize)arg1 ;
@end

