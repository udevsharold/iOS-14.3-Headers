/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, March 2, 2021 at 10:54:47 AM US Time
* Operating System: Version 14.3 (Build 18C66)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/ICSAPSessionAbstractOperation.h>

@class NSData;

@interface ICSAPSessionSignDataOperation : ICSAPSessionAbstractOperation {

	NSData* _data;
	/*^block*/id _responseHandler;

}

@property (nonatomic,copy) NSData * data;                   //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) id responseHandler;              //@synthesize responseHandler=_responseHandler - In the implementation block
-(NSData *)data;
-(void)setResponseHandler:(id)arg1 ;
-(id)responseHandler;
-(void)setData:(NSData *)arg1 ;
-(void)executeWithSAPContext:(id)arg1 ;
-(void)finishWithSAPContextPreparationError:(id)arg1 ;
@end

