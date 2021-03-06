/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:52:45 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIFeature.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CIQRCodeDescriptor, NSString;

@interface CIQRCodeFeature : CIFeature <NSSecureCoding, NSCopying> {

	CGRect bounds;
	CGPoint topLeft;
	CGPoint topRight;
	CGPoint bottomLeft;
	CGPoint bottomRight;
	CIQRCodeDescriptor* symbolDescriptor;

}

@property (readonly) CGRect bounds; 
@property (readonly) CGPoint topLeft; 
@property (readonly) CGPoint topRight; 
@property (readonly) CGPoint bottomLeft; 
@property (readonly) CGPoint bottomRight; 
@property (readonly) NSString * messageString; 
@property (readonly) CIQRCodeDescriptor * symbolDescriptor; 
+(id)featureWithInternalRepresentation:(SCD_Struct_CI23*)arg1 ;
+(BOOL)supportsSecureCoding;
-(CIQRCodeDescriptor *)symbolDescriptor;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGPoint)topLeft;
-(CGPoint)topRight;
-(void)dealloc;
-(CGRect)bounds;
-(id)initWithCoder:(id)arg1 ;
-(id)type;
-(id)initWithInternalRepresentation:(SCD_Struct_CI23*)arg1 ;
-(CGPoint)bottomRight;
-(CGPoint)bottomLeft;
-(NSString *)messageString;
-(void)encodeWithCoder:(id)arg1 ;
@end

