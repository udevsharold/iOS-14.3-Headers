/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:48 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICSAPSessionAbstractOperation.h>

@class NSData, NSMutableData;

@interface ICSAPSessionVerifySignatureOperation : ICSAPSessionAbstractOperation {

	NSData* _signatureData;
	NSMutableData* _data;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) NSData * signatureData;              //@synthesize signatureData=_signatureData - In the implementation block
@property (nonatomic,retain) NSMutableData * data;              //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) id responseHandler;                  //@synthesize responseHandler=_responseHandler - In the implementation block
-(NSMutableData *)data;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
-(void)setData:(NSMutableData *)arg1 ;
-(NSData *)signatureData;
-(void)executeWithSAPContext:(id)arg1 ;
-(void)setSignatureData:(NSData *)arg1 ;
-(void)finishWithSAPContextPreparationError:(id)arg1 ;
@end
