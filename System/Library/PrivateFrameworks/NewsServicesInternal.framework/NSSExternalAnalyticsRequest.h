/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:56:36 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/NewsServicesInternal.framework/NewsServicesInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, NSSExternalAnalyticsRequestMetadata;

@interface NSSExternalAnalyticsRequest : NSObject <NSSecureCoding> {

	NSURL* _URL;
	NSSExternalAnalyticsRequestMetadata* _metadata;

}

@property (nonatomic,copy,readonly) NSURL * URL;                                            //@synthesize URL=_URL - In the implementation block
@property (nonatomic,readonly) NSSExternalAnalyticsRequestMetadata * metadata;              //@synthesize metadata=_metadata - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSSExternalAnalyticsRequestMetadata *)metadata;
-(id)initWithCoder:(id)arg1 ;
-(NSURL *)URL;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithURL:(id)arg1 metadata:(id)arg2 ;
@end

