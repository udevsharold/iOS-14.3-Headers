/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:42 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/MLFeatureValueConstraint.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class MLImageSizeConstraint;

@interface MLImageConstraint : NSObject <MLFeatureValueConstraint, NSCopying, NSSecureCoding> {

	long long _pixelsHigh;
	long long _pixelsWide;
	MLImageSizeConstraint* _sizeConstraint;
	unsigned long long _pixelType;

}

@property (readonly) unsigned long long imageHeight; 
@property (readonly) unsigned long long imageWidth; 
@property (readonly) unsigned long long pixelType;                                  //@synthesize pixelType=_pixelType - In the implementation block
@property (readonly) unsigned osType; 
@property (nonatomic,readonly) long long pixelsHigh;                                //@synthesize pixelsHigh=_pixelsHigh - In the implementation block
@property (nonatomic,readonly) long long pixelsWide;                                //@synthesize pixelsWide=_pixelsWide - In the implementation block
@property (nonatomic,readonly) unsigned pixelFormatType; 
@property (nonatomic,readonly) MLImageSizeConstraint * sizeConstraint;              //@synthesize sizeConstraint=_sizeConstraint - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_stringForOSType:(unsigned)arg1 ;
+(BOOL)osType:(unsigned)arg1 isAcceptedForPixelType:(unsigned long long)arg2 ;
+(unsigned long long)imagePixelTypeFromOSType:(unsigned)arg1 ;
+(id)constraintWithPixelsWide:(long long)arg1 pixelsHigh:(long long)arg2 pixelType:(unsigned long long)arg3 sizeConstraint:(id)arg4 ;
+(id)constraintWithPixelsWide:(long long)arg1 pixelsHigh:(long long)arg2 pixelType:(unsigned long long)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)osType;
-(unsigned long long)imageHeight;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPixelsWide:(long long)arg1 pixelsHigh:(long long)arg2 pixelType:(unsigned long long)arg3 sizeConstraint:(id)arg4 ;
-(id)_stringForAllowedOSTypes;
-(unsigned long long)pixelType;
-(id)description;
-(unsigned long long)imageWidth;
-(BOOL)isAllowedValue:(id)arg1 error:(id*)arg2 ;
-(long long)pixelsWide;
-(long long)pixelsHigh;
-(unsigned)pixelFormatType;
-(MLImageSizeConstraint *)sizeConstraint;
-(void)encodeWithCoder:(id)arg1 ;
@end
