/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:59:37 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaConversionService/PAMediaConversionServiceImageMetadataPolicy.h>

@class CLLocation;

@interface PAMediaConversionServiceSetLocationImageMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy {

	CLLocation* _location;

}

@property (retain) CLLocation * location;              //@synthesize location=_location - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)policyWithLocation:(id)arg1 ;
-(CLLocation *)location;
-(id)initWithCoder:(id)arg1 ;
-(void)setLocation:(CLLocation *)arg1 ;
-(id)processMetadata:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)metadataNeedsProcessing:(id)arg1 ;
@end

