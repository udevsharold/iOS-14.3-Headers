/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:53:59 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface PKPaymentHeroImageModel : NSObject {

	NSURL* _url;
	NSString* _imageSha;

}

@property (nonatomic,readonly) NSURL * url;                      //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSString * imageSha;              //@synthesize imageSha=_imageSha - In the implementation block
-(NSString *)imageSha;
-(id)initWithDictionary:(id)arg1 ;
-(NSURL *)url;
@end

