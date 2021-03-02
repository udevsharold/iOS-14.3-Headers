/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:28 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreServices/SSRequest.h>

@class NSString;

@interface SSRemoteWebViewRequest : SSRequest {

	NSString* _referrer;
	NSString* _URLString;

}

@property (nonatomic,retain) NSString * referrer;               //@synthesize referrer=_referrer - In the implementation block
@property (nonatomic,retain) NSString * URLString;              //@synthesize URLString=_URLString - In the implementation block
-(id)copyXPCEncoding;
-(id)initWithXPCEncoding:(id)arg1 ;
-(NSString *)URLString;
-(NSString *)referrer;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setReferrer:(NSString *)arg1 ;
-(void)setURLString:(NSString *)arg1 ;
@end
