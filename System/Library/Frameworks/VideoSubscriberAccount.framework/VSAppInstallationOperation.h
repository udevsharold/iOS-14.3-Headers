/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 11:07:21 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSString, VSOptional;

@interface VSAppInstallationOperation : VSAsyncOperation {

	NSString* _buyParams;
	VSOptional* _result;

}

@property (nonatomic,retain) VSOptional * result;              //@synthesize result=_result - In the implementation block
@property (nonatomic,copy) NSString * buyParams;               //@synthesize buyParams=_buyParams - In the implementation block
-(void)setResult:(VSOptional *)arg1 ;
-(VSOptional *)result;
-(id)init;
-(NSString *)buyParams;
-(void)setBuyParams:(NSString *)arg1 ;
-(void)executionDidBegin;
@end

